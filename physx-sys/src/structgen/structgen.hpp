#include <cassert>
#include <cstdio>
#include <cstdint>
#include <vector>

struct RustCheck {
    const char* rname;
    uint32_t size;
};

struct PodStructGen {
    PodStructGen() {
        cfile = fopen("structgen_out.hpp", "w");
        rfile = fopen("structgen_out.rs", "w");
        emit_builtin_pods();
    }

    void finish() {
        fclose(cfile);

        fputs("#[cfg(test)]\nmod sizes {\n    use super::*;\n    use std::mem::size_of;\n    #[test]\n    fn check_sizes() {\n", rfile);
        for (const auto& rc : rust_checks) {
            fprintf(
                rfile,
                "        assert_eq!(size_of::<%s>(), %u);\n",
                rc.rname,
                rc.size
            );
        }
        fputs("    }\n}\n", rfile);
        fclose(rfile);
    }

    void pass_thru(const char* code) { fputs(code, cfile); }

    void begin_struct(const char* cname, const char* rname) {
        fprintf(cfile, "struct %s {\n", cname);

        fprintf(rfile, "#[derive(Clone, Copy)]\n");
        fprintf(rfile, "#[cfg_attr(feature = \"debug-structs\", derive(Debug))]\n");
        fprintf(rfile, "#[repr(C)]\n");
        fprintf(rfile, "pub struct %s {\n", rname);

        this->rname = rname;
        pos = 0;
        padIdx = 0;
    }

    void emit_padding(uint32_t bytes) {
        fprintf(cfile, "    char structgen_pad%u[%u];\n", padIdx, bytes);
        fprintf(rfile, "    pub structgen_pad%u: [u8; %u],\n", padIdx, bytes);
        ++padIdx;
    }

    void add_field(
        const char* cppDecl,
        const char* rustName,
        const char* rustType,
        size_t size,
        size_t offset) {
        assert(offset >= pos);
        if (offset > pos) {
            emit_padding(uint32_t(offset - pos));
            pos = offset;
        }
        fprintf(cfile, "    %s;\n", cppDecl);
        fprintf(rfile, "    pub %s: %s,\n", rustName, rustType);
        pos += size;
    }

    void end_struct(size_t size) {
        assert(size >= pos);
        if (size > pos) {
            emit_padding(uint32_t(size - pos));
        }
        fputs("};\n", cfile);
        fputs("}\n", rfile);

        rust_checks.emplace_back(RustCheck { rname, uint32_t(size) });
    }

  private:
    void emit_builtin_pods() {
        fputs(
            "struct physx_PxVec2_Pod { float x; float y; };\n"
            "struct physx_PxVec3_Pod { float x; float y; float z; };\n"
            "struct physx_PxExtendedVec3_Pod { double x; double y; double z; };\n"
            "struct physx_PxVec4_Pod { float x; float y; float z; float w; };\n"
            "struct physx_PxQuat_Pod { float x; float y; float z; float w; };\n"
            "struct physx_PxMat33_Pod { physx_PxVec3_Pod column0; physx_PxVec3_Pod column1; physx_PxVec3_Pod column2; };\n"
            "struct physx_PxMat44_Pod { physx_PxVec4_Pod column0; physx_PxVec4_Pod column1; physx_PxVec4_Pod column2; physx_PxVec4_Pod column3; };\n"
            "struct physx_PxTransform_Pod { physx_PxQuat_Pod q; physx_PxVec3_Pod p; };\n",
            cfile);
        fputs(
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxVec2 { pub x: f32, pub y: f32 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxVec3 { pub x: f32, pub y: f32, pub z: f32 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxExtendedVec3 { pub x: f64, pub y: f64, pub z: f64 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxVec4 { pub x: f32, pub y: f32, pub z: f32, pub w: f32 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxQuat { pub x: f32, pub y: f32, pub z: f32, pub w: f32 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxMat33 { pub column0: PxVec3, pub column1: PxVec3, pub column2: PxVec3 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxMat44 { pub column0: PxVec4, pub column1: PxVec4, pub column2: PxVec4, pub column3: PxVec4 }\n"
            "#[derive(Clone, Copy)] #[cfg_attr(feature = \"debug-structs\", derive(Debug))] #[repr(C)] pub struct PxTransform { pub q: PxQuat, pub p: PxVec3 }\n",
            rfile);
    }

    std::vector<RustCheck> rust_checks;
    FILE* cfile;
    FILE* rfile;
    const char* rname;
    size_t pos;
    uint32_t padIdx;
};
