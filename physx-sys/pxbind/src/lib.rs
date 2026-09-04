pub mod consumer;
mod dump;
pub mod generator;

pub use dump::*;

pub type Node = clang_ast::Node<consumer::Item>;

pub fn generate_bindings(
    include_dir: impl AsRef<std::path::Path>,
    output_dir: impl AsRef<std::path::Path>,
    clang: std::process::Command,
) -> anyhow::Result<()> {
    use anyhow::Context as _;
    use std::{fs::File, io::BufWriter};

    let include_dir = include_dir.as_ref();
    let output_dir = output_dir.as_ref();
    std::fs::create_dir_all(output_dir).context("failed to create binding output directory")?;

    let api_header = include_dir.join("PxPhysicsAPI.h");
    let (root, _) = get_parsed_ast_with_command(&api_header, include_dir, clang)?;
    let mut ast = consumer::AstConsumer::default();
    ast.consume(&root)?;

    let mut structgen = BufWriter::new(File::create(output_dir.join("structgen.cpp"))?);
    let mut cpp = BufWriter::new(File::create(output_dir.join("physx_generated.hpp"))?);
    let mut rust = BufWriter::new(File::create(output_dir.join("physx_generated.rs"))?);
    generator::Generator::default().generate_all(&ast, &mut structgen, &mut cpp, &mut rust)
}
