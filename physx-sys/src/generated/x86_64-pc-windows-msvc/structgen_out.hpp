struct physx_PxVec2_Pod {
    float x;
    float y;
};
struct physx_PxVec3_Pod {
    float x;
    float y;
    float z;
};
struct physx_PxExtendedVec3_Pod {
    double x;
    double y;
    double z;
};
struct physx_PxVec4_Pod {
    float x;
    float y;
    float z;
    float w;
};
struct physx_PxQuat_Pod {
    float x;
    float y;
    float z;
    float w;
};
struct physx_PxMat33_Pod {
    physx_PxVec3_Pod column0;
    physx_PxVec3_Pod column1;
    physx_PxVec3_Pod column2;
};
struct physx_PxMat44_Pod {
    physx_PxVec4_Pod column0;
    physx_PxVec4_Pod column1;
    physx_PxVec4_Pod column2;
    physx_PxVec4_Pod column3;
};
struct physx_PxTransform_Pod {
    physx_PxQuat_Pod q;
    physx_PxVec3_Pod p;
};
struct physx_PxAllocatorCallback_Pod {
    void* vtable_;
};
struct physx_PxAllocationListener_Pod;
struct physx_PxErrorCallback_Pod;
struct physx_PxFoundation_Pod {
    void* vtable_;
};
struct physx_PxProfilerCallback_Pod;
struct physx_PxInputStream_Pod {
    void* vtable_;
};
struct physx_PxInputData_Pod {
    void* vtable_;
};
struct physx_PxOutputStream_Pod {
    void* vtable_;
};
struct physx_PxAllocator_Pod {
    char structgen_pad0[1];
};
struct physx_PxRawAllocator_Pod {
    char structgen_pad0[1];
};
struct physx_PxUserAllocated_Pod {
    char structgen_pad0[1];
};
struct physx_PxTempAllocator_Pod {
    char structgen_pad0[1];
};
struct physx_PxLogTwo_Pod;
struct physx_PxUnConst_Pod;
struct physx_PxBitAndByte_Pod {
    char structgen_pad0[1];
};
struct physx_PxBitMap_Pod {
    char structgen_pad0[16];
};
struct physx_PxVec3Padded_Pod {
    char structgen_pad0[12];
    uint32_t padding;
};
struct physx_PxTransformPadded_Pod {
    char structgen_pad0[28];
    uint32_t padding;
};
struct physx_PxBounds3_Pod {
    physx_PxVec3_Pod minimum;
    physx_PxVec3_Pod maximum;
};
struct physx_PxErrorCallback_Pod {
    void* vtable_;
};
struct physx_PxAllocationListener_Pod {
    void* vtable_;
};
struct physx_PxBroadcastingAllocator_Pod {
    void* vtable_;
    physx_PxAllocatorCallback_Pod* mAllocator;
    physx_PxErrorCallback_Pod* mError;
};
struct physx_PxBroadcastingErrorCallback_Pod {
    char structgen_pad0[160];
};
struct physx_PxFPUGuard_Pod {
    char structgen_pad0[32];
};
struct physx_PxSIMDGuard_Pod {
    char structgen_pad0[8];
};
struct physx_PxHash_Pod;
struct physx_PxPlane_Pod {
    physx_PxVec3_Pod n;
    float d;
};
struct physx_Interpolation_Pod {
    char structgen_pad0[1];
};
struct physx_PxMutexImpl_Pod {
    char structgen_pad0[1];
};
struct physx_PxReadWriteLock_Pod {
    char structgen_pad0[8];
};
struct physx_PxProfilerCallback_Pod {
    void* vtable_;
};
struct physx_PxProfileScoped_Pod {
    physx_PxProfilerCallback_Pod* mCallback;
    char const* mEventName;
    void* mProfilerData;
    uint64_t mContextId;
    bool mDetached;
    char structgen_pad0[7];
};
struct physx_PxSListEntry_Pod {
    char structgen_pad0[16];
};
struct physx_PxSListImpl_Pod {
    char structgen_pad0[1];
};
struct physx_PxSocket_Pod {
    void* vtable_;
    void* mImpl;
};
struct physx_PxSyncImpl_Pod {
    char structgen_pad0[1];
};
struct physx_PxRunnable_Pod {
    void* vtable_;
};
struct physx_PxThreadImpl_Pod {
    char structgen_pad0[1];
};
struct physx_PxCounterFrequencyToTensOfNanos_Pod {
    uint64_t mNumerator;
    uint64_t mDenominator;
};
struct physx_PxTime_Pod {
    char structgen_pad0[8];
};
struct physx_PxBoundedData_Pod {
    void const* data;
    uint32_t stride;
    uint32_t count;
};
struct physx_PxDebugPoint_Pod {
    physx_PxVec3_Pod pos;
    uint32_t color;
};
struct physx_PxDebugLine_Pod {
    physx_PxVec3_Pod pos0;
    uint32_t color0;
    physx_PxVec3_Pod pos1;
    uint32_t color1;
};
struct physx_PxDebugTriangle_Pod {
    physx_PxVec3_Pod pos0;
    uint32_t color0;
    physx_PxVec3_Pod pos1;
    uint32_t color1;
    physx_PxVec3_Pod pos2;
    uint32_t color2;
};
struct physx_PxDebugText_Pod {
    physx_PxVec3_Pod position;
    float size;
    uint32_t color;
    char structgen_pad0[4];
    char const* string;
};
struct physx_PxRenderBuffer_Pod {
    void* vtable_;
};
struct physx_PxBase_Pod;
struct physx_PxSerializationContext_Pod;
struct physx_PxRepXSerializer_Pod;
struct physx_PxSerializer_Pod;
struct physx_PxPhysics_Pod;
struct physx_PxCollection_Pod;
struct physx_PxProcessPxBaseCallback_Pod {
    void* vtable_;
};
struct physx_PxSerializationContext_Pod {
    void* vtable_;
};
struct physx_PxDeserializationContext_Pod {
    void* vtable_;
    uint8_t* mExtraDataAddress;
};
struct physx_PxSerializationRegistry_Pod {
    void* vtable_;
};
struct physx_PxCollection_Pod {
    void* vtable_;
};
struct physx_PxTypeInfo_Pod;
struct physx_PxMaterial_Pod;
struct physx_PxDeformableSurfaceMaterial_Pod;
struct physx_PxDeformableVolumeMaterial_Pod;
struct physx_PxPBDMaterial_Pod;
struct physx_PxConvexMesh_Pod;
struct physx_PxTriangleMesh_Pod;
struct physx_PxBVH33TriangleMesh_Pod;
struct physx_PxBVH34TriangleMesh_Pod;
struct physx_PxTetrahedronMesh_Pod;
struct physx_PxHeightField_Pod;
struct physx_PxActor_Pod;
struct physx_PxRigidActor_Pod;
struct physx_PxRigidBody_Pod;
struct physx_PxRigidDynamic_Pod;
struct physx_PxRigidStatic_Pod;
struct physx_PxArticulationLink_Pod;
struct physx_PxArticulationJointReducedCoordinate_Pod;
struct physx_PxArticulationReducedCoordinate_Pod;
struct physx_PxAggregate_Pod;
struct physx_PxConstraint_Pod;
struct physx_PxShape_Pod;
struct physx_PxPruningStructure_Pod;
struct physx_PxPBDParticleSystem_Pod;
struct physx_PxDeformableSurface_Pod;
struct physx_PxDeformableVolume_Pod;
struct physx_PxDeformableAttachment_Pod;
struct physx_PxDeformableElementFilter_Pod;
struct physx_PxParticleBuffer_Pod;
struct physx_PxParticleAndDiffuseBuffer_Pod;
struct physx_PxBase_Pod {
    void* vtable_;
    uint16_t mConcreteType;
    uint16_t mBaseFlags;
    uint32_t mBuiltInRefCount;
};
struct physx_PxRefCounted_Pod {
    void* vtable_;
};
struct physx_PxTolerancesScale_Pod {
    float length;
    float speed;
};
struct physx_PxStringTable_Pod {
    void* vtable_;
};
struct physx_PxSerializer_Pod {
    void* vtable_;
};
struct physx_PxInsertionCallback_Pod {
    void* vtable_;
};
struct physx_PxBaseTask_Pod;
struct physx_PxTask_Pod;
struct physx_PxLightCpuTask_Pod;
struct physx_PxCpuDispatcher_Pod;
struct physx_PxTaskManager_Pod {
    void* vtable_;
};
struct physx_PxCpuDispatcher_Pod {
    void* vtable_;
};
struct physx_PxBaseTask_Pod {
    void* vtable_;
    uint64_t mContextID;
    physx_PxTaskManager_Pod* mTm;
};
struct physx_PxTask_Pod {
    void* vtable_;
    uint32_t mTaskID;
};
struct physx_PxLightCpuTask_Pod {
    void* vtable_;
    physx_PxBaseTask_Pod* mCont;
    int32_t mRefCount;
};
struct physx_PxGeometry_Pod {
    char structgen_pad0[4];
    float mTypePadding;
};
struct physx_PxBoxGeometry_Pod {
    char structgen_pad0[8];
    physx_PxVec3_Pod halfExtents;
};
struct physx_PxReportCallbackBase_Pod {
    void* vtable_;
    uint32_t mCapacity;
    uint32_t mSize;
};
struct physx_PxBVH_Pod {
    void* vtable_;
};
struct physx_PxGeomIndexPair_Pod;
struct physx_PxCapsuleGeometry_Pod {
    char structgen_pad0[8];
    float radius;
    float halfHeight;
};
struct physx_PxHullPolygon_Pod {
    float mPlane[4];
    uint16_t mNbVerts;
    uint16_t mIndexBase;
};
struct physx_PxConvexMesh_Pod {
    void* vtable_;
};
struct physx_PxMeshScale_Pod {
    physx_PxVec3_Pod scale;
    physx_PxQuat_Pod rotation;
};
struct physx_PxConvexMeshGeometry_Pod {
    char structgen_pad0[8];
    physx_PxMeshScale_Pod scale;
    char structgen_pad1[4];
    physx_PxConvexMesh_Pod* convexMesh;
    uint8_t meshFlags;
    char structgen_pad2[7];
};
struct physx_PxSphereGeometry_Pod {
    char structgen_pad0[8];
    float radius;
};
struct physx_PxPlaneGeometry_Pod {
    char structgen_pad0[8];
};
struct physx_PxTriangleMeshGeometry_Pod {
    char structgen_pad0[8];
    physx_PxMeshScale_Pod scale;
    uint8_t meshFlags;
    char structgen_pad1[3];
    physx_PxTriangleMesh_Pod* triangleMesh;
};
struct physx_PxHeightFieldGeometry_Pod {
    char structgen_pad0[8];
    physx_PxHeightField_Pod* heightField;
    float heightScale;
    float rowScale;
    float columnScale;
    uint8_t heightFieldFlags;
    char structgen_pad1[3];
};
struct physx_PxFilterData_Pod {
    uint32_t word0;
    uint32_t word1;
    uint32_t word2;
    uint32_t word3;
};
struct physx_PxSimulationFilterCallback_Pod {
    void* vtable_;
};
struct physx_PxScene_Pod;
struct physx_PxActor_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxCudaContextManager_Pod;
struct physx_PxGpuParticleSystem_Pod;
struct physx_PxParticleSystemCallback_Pod {
    void* vtable_;
};
struct physx_PxMultiCallback_Pod {
    void* vtable_;
};
struct physx_PxPBDParticleSystem_Pod {
    void* vtable_;
};
struct physx_PxParticleSystemGeometry_Pod {
    char structgen_pad0[8];
};
struct physx_PxTetrahedronMeshGeometry_Pod {
    char structgen_pad0[8];
    physx_PxTetrahedronMesh_Pod* tetrahedronMesh;
};
struct physx_PxQueryHit_Pod {
    uint32_t faceIndex;
};
struct physx_PxLocationHit_Pod {
    char structgen_pad0[4];
    uint16_t flags;
    char structgen_pad1[2];
    physx_PxVec3_Pod position;
    physx_PxVec3_Pod normal;
    float distance;
};
struct physx_PxGeomRaycastHit_Pod {
    char structgen_pad0[36];
    float u;
    float v;
};
struct physx_PxGeomOverlapHit_Pod {
    char structgen_pad0[4];
};
struct physx_PxGeomSweepHit_Pod {
    char structgen_pad0[36];
};
struct physx_PxGeomIndexPair_Pod {
    uint32_t id0;
    uint32_t id1;
};
struct physx_PxGeomIndexClosePair_Pod {
    char structgen_pad0[8];
    float distance;
};
struct physx_PxQueryThreadContext_Pod {
    char structgen_pad0[1];
};
struct physx_PxContactBuffer_Pod;
struct physx_PxRenderOutput_Pod;
struct physx_PxMassProperties_Pod;
struct physx_PxCustomGeometry_Pod {
    char structgen_pad0[16];
};
struct physx_PxConvexCoreGeometry_Pod {
    char structgen_pad0[40];
};
struct physx_PxGeometryHolder_Pod {
    char structgen_pad0[56];
};
struct physx_PxGeometryQuery_Pod {
    char structgen_pad0[1];
};
struct physx_PxHeightFieldSample_Pod {
    int16_t height;
    physx_PxBitAndByte_Pod materialIndex0;
    physx_PxBitAndByte_Pod materialIndex1;
};
struct physx_PxHeightFieldDesc_Pod;
struct physx_PxHeightField_Pod {
    void* vtable_;
};
struct physx_PxHeightFieldDesc_Pod {
    uint32_t nbRows;
    uint32_t nbColumns;
    int32_t format;
    char structgen_pad0[4];
    physx_PxBoundedData_Pod samples;
    float convexEdgeThreshold;
    uint16_t flags;
    char structgen_pad1[2];
};
struct physx_PxTriangle_Pod;
struct physx_PxMeshQuery_Pod {
    char structgen_pad0[1];
};
struct physx_PxSimpleTriangleMesh_Pod {
    physx_PxBoundedData_Pod points;
    physx_PxBoundedData_Pod triangles;
    uint16_t flags;
    char structgen_pad0[6];
};
struct physx_PxTriangle_Pod {
    physx_PxVec3_Pod verts[3];
};
struct physx_PxTrianglePadded_Pod {
    char structgen_pad0[36];
    uint32_t padding;
};
struct physx_PxTriangleMesh_Pod {
    void* vtable_;
};
struct physx_PxBVH33TriangleMesh_Pod {
    void* vtable_;
};
struct physx_PxBVH34TriangleMesh_Pod {
    void* vtable_;
};
struct physx_PxTetrahedron_Pod {
    physx_PxVec3_Pod verts[4];
};
struct physx_PxDeformableVolumeAuxData_Pod {
    void* vtable_;
};
struct physx_PxTetrahedronMesh_Pod {
    void* vtable_;
};
struct physx_PxDeformableVolumeMesh_Pod {
    void* vtable_;
};
struct physx_PxCollisionMeshMappingData_Pod {
    void* vtable_;
};
struct physx_PxDeformableVolumeCollisionData_Pod {
    char structgen_pad0[1];
};
struct physx_PxTetrahedronMeshData_Pod {
    char structgen_pad0[1];
};
struct physx_PxDeformableVolumeSimulationData_Pod {
    char structgen_pad0[1];
};
struct physx_PxCollisionTetrahedronMeshData_Pod {
    void* vtable_;
};
struct physx_PxSimulationTetrahedronMeshData_Pod {
    void* vtable_;
};
struct physx_PxAggregate_Pod {
    void* vtable_;
    void* userData;
};
struct physx_Px1DConstraintFlag_Pod {
    char structgen_pad0[1];
};
struct physx_Px1DConstraint_Pod {
    physx_PxVec3_Pod linear0;
    float geometricError;
    physx_PxVec3_Pod angular0;
    float velocityTarget;
    physx_PxVec3_Pod linear1;
    float minImpulse;
    physx_PxVec3_Pod angular1;
    float maxImpulse;
    char structgen_pad0[8];
    uint16_t flags;
    uint16_t solveHint;
    uint32_t pad;
};
struct physx_PxConstraintInvMassScale_Pod {
    float linear0;
    float angular0;
    float linear1;
    float angular1;
};
struct physx_PxConstraintVisualizer_Pod {
    void* vtable_;
};
struct physx_PxConstraintConnector_Pod {
    void* vtable_;
};
struct physx_PxContactPoint_Pod {
    physx_PxVec3_Pod normal;
    float separation;
    physx_PxVec3_Pod point;
    float maxImpulse;
    physx_PxVec3_Pod targetVel;
    float staticFriction;
    uint8_t materialFlags;
    char structgen_pad0[3];
    uint32_t internalFaceIndex1;
    float dynamicFriction;
    float restitution;
    float damping;
    char structgen_pad1[12];
};
struct physx_PxTGSSolverBodyVel_Pod;
struct physx_PxSolverBody_Pod {
    physx_PxVec3_Pod linearVelocity;
    uint16_t maxSolverNormalProgress;
    uint16_t maxSolverFrictionProgress;
    physx_PxVec3_Pod angularState;
    uint32_t solverProgress;
};
struct physx_PxSolverBodyData_Pod {
    physx_PxVec3_Pod linearVelocity;
    float invMass;
    physx_PxVec3_Pod angularVelocity;
    float reportThreshold;
    physx_PxMat33_Pod sqrtInvInertia;
    float penBiasClamp;
    uint32_t nodeIndex;
    float maxContactImpulse;
    physx_PxTransform_Pod body2World;
    uint32_t pad;
};
struct physx_PxConstraintBatchHeader_Pod {
    uint32_t startIndex;
    uint16_t stride;
    uint16_t constraintType;
};
struct physx_PxSolverConstraintDesc_Pod {
    char structgen_pad0[16];
    uint32_t bodyADataIndex;
    uint32_t bodyBDataIndex;
    uint32_t linkIndexA;
    uint32_t linkIndexB;
    uint8_t* constraint;
    void* writeBack;
    void* writeBackFriction;
    uint16_t progressA;
    uint16_t progressB;
    char structgen_pad1[4];
};
struct physx_PxSolverConstraintPrepDescBase_Pod {
    physx_PxConstraintInvMassScale_Pod invMassScales;
    physx_PxSolverConstraintDesc_Pod* desc;
    physx_PxSolverBody_Pod const* body0;
    physx_PxSolverBody_Pod const* body1;
    physx_PxSolverBodyData_Pod const* data0;
    physx_PxSolverBodyData_Pod const* data1;
    physx_PxTransform_Pod bodyFrame0;
    physx_PxTransform_Pod bodyFrame1;
    int32_t bodyState0;
    int32_t bodyState1;
    char structgen_pad0[8];
};
struct physx_PxSolverConstraintPrepDesc_Pod {
    char structgen_pad0[128];
    physx_Px1DConstraint_Pod* rows;
    uint32_t numRows;
    float linBreakForce;
    float angBreakForce;
    float minResponseThreshold;
    bool disablePreprocessing;
    bool improvedSlerp;
    bool driveLimitsAreForces;
    bool extendedLimits;
    bool disableConstraint;
    char structgen_pad1[3];
    physx_PxVec3Padded_Pod body0WorldOffset;
};
struct physx_PxSolverContactDesc_Pod {
    char structgen_pad0[128];
    uint8_t* frictionPtr;
    physx_PxContactPoint_Pod const* contacts;
    uint32_t numContacts;
    uint8_t frictionCount;
    bool hasMaxImpulse;
    bool disableStrongFriction;
    bool hasForceThresholds;
    float restDistance;
    float maxCCDSeparation;
    float* contactForces;
    uint32_t startFrictionPatchIndex;
    uint32_t numFrictionPatches;
    uint32_t startContactPatchIndex;
    uint16_t numContactPatches;
    uint16_t axisConstraintCount;
    float offsetSlop;
    char structgen_pad1[4];
};
struct physx_PxConstraintAllocator_Pod {
    void* vtable_;
};
struct physx_PxArticulationLimit_Pod {
    float low;
    float high;
};
struct physx_PxPerformanceEnvelope_Pod {
    float maxEffort;
    float maxActuatorVelocity;
    float velocityDependentResistance;
    float speedEffortGradient;
};
struct physx_PxJointFrictionParams_Pod {
    float staticFrictionEffort;
    float dynamicFrictionEffort;
    float viscousFrictionCoefficient;
};
struct physx_PxArticulationDrive_Pod {
    float stiffness;
    float damping;
    float maxForce;
    physx_PxPerformanceEnvelope_Pod envelope;
    int32_t driveType;
};
struct physx_PxTGSSolverBodyVel_Pod {
    physx_PxVec3_Pod linearVelocity;
    uint16_t maxDynamicPartition;
    uint16_t nbStaticInteractions;
    physx_PxVec3_Pod angularVelocity;
    uint32_t partitionMask;
    physx_PxVec3_Pod deltaAngDt;
    float maxAngVel;
    physx_PxVec3_Pod deltaLinDt;
    uint16_t lockFlags;
    bool isKinematic;
    uint8_t pad;
};
struct physx_PxTGSSolverBodyTxInertia_Pod {
    physx_PxQuat_Pod deltaBody2WorldQ;
    physx_PxVec3_Pod body2WorldP;
    physx_PxMat33_Pod sqrtInvInertia;
};
struct physx_PxTGSSolverBodyData_Pod {
    physx_PxVec3_Pod originalLinearVelocity;
    float maxContactImpulse;
    physx_PxVec3_Pod originalAngularVelocity;
    float penBiasClamp;
    float invMass;
    uint32_t nodeIndex;
    float reportThreshold;
    uint32_t pad;
};
struct physx_PxTGSSolverConstraintPrepDescBase_Pod {
    physx_PxConstraintInvMassScale_Pod invMassScales;
    physx_PxSolverConstraintDesc_Pod* desc;
    physx_PxTGSSolverBodyVel_Pod const* body0;
    physx_PxTGSSolverBodyVel_Pod const* body1;
    physx_PxTGSSolverBodyTxInertia_Pod const* body0TxI;
    physx_PxTGSSolverBodyTxInertia_Pod const* body1TxI;
    physx_PxTGSSolverBodyData_Pod const* bodyData0;
    physx_PxTGSSolverBodyData_Pod const* bodyData1;
    physx_PxTransform_Pod bodyFrame0;
    physx_PxTransform_Pod bodyFrame1;
    char structgen_pad0[16];
};
struct physx_PxTGSSolverConstraintPrepDesc_Pod {
    char structgen_pad0[144];
    physx_Px1DConstraint_Pod* rows;
    uint32_t numRows;
    float linBreakForce;
    float angBreakForce;
    float minResponseThreshold;
    bool disablePreprocessing;
    bool improvedSlerp;
    bool driveLimitsAreForces;
    bool extendedLimits;
    bool disableConstraint;
    char structgen_pad1[3];
    physx_PxVec3Padded_Pod body0WorldOffset;
    physx_PxVec3Padded_Pod cA2w;
    physx_PxVec3Padded_Pod cB2w;
};
struct physx_PxTGSSolverContactDesc_Pod {
    char structgen_pad0[144];
    uint8_t* frictionPtr;
    physx_PxContactPoint_Pod const* contacts;
    uint32_t numContacts;
    uint8_t frictionCount;
    bool hasMaxImpulse;
    bool disableStrongFriction;
    bool hasForceThresholds;
    float restDistance;
    float maxCCDSeparation;
    float* contactForces;
    uint32_t startFrictionPatchIndex;
    uint32_t numFrictionPatches;
    uint32_t startContactPatchIndex;
    uint16_t numContactPatches;
    uint16_t axisConstraintCount;
    float maxImpulse;
    float torsionalPatchRadius;
    float minTorsionalPatchRadius;
    float offsetSlop;
    char structgen_pad1[8];
};
struct physx_PxArticulationSpatialTendon_Pod;
struct physx_PxArticulationFixedTendon_Pod;
struct physx_PxArticulationTendonLimit_Pod {
    float lowLimit;
    float highLimit;
};
struct physx_PxArticulationAttachment_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxArticulationTendonJoint_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxArticulationTendon_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxArticulationSpatialTendon_Pod {
    void* vtable_;
};
struct physx_PxArticulationFixedTendon_Pod {
    void* vtable_;
};
struct physx_PxArticulationMimicJoint_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxSpatialForce_Pod {
    physx_PxVec3_Pod force;
    float pad0;
    physx_PxVec3_Pod torque;
    float pad1;
};
struct physx_PxSpatialVelocity_Pod {
    physx_PxVec3_Pod linear;
    float pad0;
    physx_PxVec3_Pod angular;
    float pad1;
};
struct physx_PxArticulationRootLinkData_Pod {
    physx_PxTransform_Pod transform;
    physx_PxVec3_Pod worldLinVel;
    physx_PxVec3_Pod worldAngVel;
    physx_PxVec3_Pod worldLinAccel;
    physx_PxVec3_Pod worldAngAccel;
};
struct physx_PxArticulationCache_Pod {
    physx_PxSpatialForce_Pod* externalForces;
    float* denseJacobian;
    float* massMatrix;
    float* coriolisForce;
    float* gravityCompensationForce;
    float* centroidalMomentumMatrix;
    float* centroidalMomentumBias;
    float* jointVelocity;
    float* jointAcceleration;
    float* jointPosition;
    float* jointForce;
    float* jointTargetPositions;
    float* jointTargetVelocities;
    physx_PxSpatialVelocity_Pod* linkVelocity;
    physx_PxSpatialVelocity_Pod* linkAcceleration;
    physx_PxSpatialForce_Pod* linkIncomingJointForce;
    physx_PxVec3_Pod* linkForce;
    physx_PxVec3_Pod* linkTorque;
    physx_PxArticulationRootLinkData_Pod* rootLinkData;
    float* coefficientMatrix;
    float* lambda;
    void* scratchMemory;
    void* scratchAllocator;
    uint32_t version;
    char structgen_pad0[4];
};
struct physx_PxArticulationReducedCoordinate_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxArticulationJointReducedCoordinate_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxBaseMaterial_Pod;
struct physx_PxShape_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxRigidActor_Pod {
    void* vtable_;
};
struct physx_PxNodeIndex_Pod {
    char structgen_pad0[8];
};
struct physx_PxRigidBody_Pod {
    void* vtable_;
};
struct physx_PxArticulationLink_Pod {
    void* vtable_;
};
struct physx_PxConstraintShaderTable_Pod {
    void * solverPrep;
    void * visualize;
    int32_t flag;
    char structgen_pad0[4];
};
struct physx_PxConstraint_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxBaseMaterial_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxMaterial_Pod {
    void* vtable_;
};
struct physx_PxContactPatch_Pod {
    physx_PxConstraintInvMassScale_Pod mMassModification;
    physx_PxVec3_Pod normal;
    float restitution;
    float dynamicFriction;
    float staticFriction;
    float damping;
    uint16_t startContactIndex;
    uint8_t nbContacts;
    uint8_t materialFlags;
    uint16_t internalFlags;
    uint16_t materialIndex0;
    uint16_t materialIndex1;
    uint16_t pad[5];
};
struct physx_PxContact_Pod {
    physx_PxVec3_Pod contact;
    float separation;
};
struct physx_PxExtendedContact_Pod {
    char structgen_pad0[16];
    physx_PxVec3_Pod targetVelocity;
    float maxImpulse;
};
struct physx_PxModifiableContact_Pod {
    char structgen_pad0[32];
    physx_PxVec3_Pod normal;
    float restitution;
    uint32_t materialFlags;
    uint16_t materialIndex0;
    uint16_t materialIndex1;
    float staticFriction;
    float dynamicFriction;
};
struct physx_PxContactStreamIterator_Pod {
    physx_PxVec3_Pod zero;
    char structgen_pad0[4];
    physx_PxContactPatch_Pod const* patch;
    physx_PxContact_Pod const* contact;
    uint32_t const* faceIndice;
    uint32_t totalPatches;
    uint32_t totalContacts;
    uint32_t nextContactIndex;
    uint32_t nextPatchIndex;
    uint32_t contactPatchHeaderSize;
    uint32_t contactPointSize;
    int32_t mStreamFormat;
    uint32_t forceNoResponse;
    bool pointStepped;
    char structgen_pad1[3];
    uint32_t hasFaceIndices;
};
struct physx_PxFrictionPatch_Pod {
    physx_PxVec3_Pod anchorPositions[2];
    physx_PxVec3_Pod anchorImpulses[2];
    uint32_t anchorCount;
};
struct physx_PxFrictionAnchorStreamIterator_Pod {
    char structgen_pad0[32];
};
struct physx_PxGpuContactPair_Pod {
    uint8_t* contactPatches;
    uint8_t* contactPoints;
    float* contactForces;
    uint8_t* frictionPatches;
    uint32_t transformCacheRef0;
    uint32_t transformCacheRef1;
    physx_PxNodeIndex_Pod nodeIndex0;
    physx_PxNodeIndex_Pod nodeIndex1;
    physx_PxActor_Pod* actor0;
    physx_PxActor_Pod* actor1;
    uint16_t nbContacts;
    uint16_t nbPatches;
    char structgen_pad0[4];
};
struct physx_PxContactSet_Pod {
    char structgen_pad0[16];
};
struct physx_PxContactModifyPair_Pod {
    physx_PxRigidActor_Pod const* actor[2];
    physx_PxShape_Pod const* shape[2];
    physx_PxTransform_Pod transform[2];
    physx_PxContactSet_Pod contacts;
};
struct physx_PxContactModifyCallback_Pod {
    void* vtable_;
};
struct physx_PxCCDContactModifyCallback_Pod {
    void* vtable_;
};
struct physx_PxDeformableBody_Pod {
    void* vtable_;
};
struct physx_PxDeformableSurface_Pod {
    void* vtable_;
};
struct physx_PxDeformableMaterial_Pod {
    void* vtable_;
};
struct physx_PxDeformableSurfaceMaterial_Pod {
    void* vtable_;
};
struct physx_PxDeformableVolume_Pod {
    void* vtable_;
};
struct physx_PxDeformableVolumeMaterial_Pod {
    void* vtable_;
};
struct physx_PxDeletionListener_Pod {
    void* vtable_;
};
struct physx_PxParticleBuffer_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxDiffuseParticleParams_Pod {
    float threshold;
    float lifetime;
    float airDrag;
    float bubbleDrag;
    float buoyancy;
    float kineticEnergyWeight;
    float pressureWeight;
    float divergenceWeight;
    float collisionDecay;
    bool useAccurateVelocity;
    char structgen_pad0[3];
};
struct physx_PxParticleAndDiffuseBuffer_Pod {
    void* vtable_;
};
struct physx_PxPBDMaterial_Pod {
    void* vtable_;
};
struct physx_PxDeformableAttachmentData_Pod {
    physx_PxActor_Pod* actor[2];
    int32_t type[2];
    char structgen_pad0[64];
    physx_PxTransform_Pod pose[2];
};
struct physx_PxDeformableAttachment_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxDeformableElementFilterData_Pod {
    physx_PxActor_Pod* actor[2];
    char structgen_pad0[64];
};
struct physx_PxDeformableElementFilter_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxSceneDesc_Pod;
struct physx_PxPvd_Pod;
struct physx_PxOmniPvd_Pod;
struct physx_PxPhysics_Pod {
    void* vtable_;
};
struct physx_PxActorShape_Pod {
    physx_PxRigidActor_Pod* actor;
    physx_PxShape_Pod* shape;
};
struct physx_PxRaycastHit_Pod {
    char structgen_pad0[64];
};
struct physx_PxOverlapHit_Pod {
    char structgen_pad0[24];
};
struct physx_PxSweepHit_Pod {
    char structgen_pad0[56];
};
struct physx_PxRaycastCallback_Pod {
    char structgen_pad0[8];
    physx_PxRaycastHit_Pod block;
    bool hasBlock;
    char structgen_pad1[7];
    physx_PxRaycastHit_Pod* touches;
    uint32_t maxNbTouches;
    uint32_t nbTouches;
};
struct physx_PxOverlapCallback_Pod {
    char structgen_pad0[8];
    physx_PxOverlapHit_Pod block;
    bool hasBlock;
    char structgen_pad1[7];
    physx_PxOverlapHit_Pod* touches;
    uint32_t maxNbTouches;
    uint32_t nbTouches;
};
struct physx_PxSweepCallback_Pod {
    char structgen_pad0[8];
    physx_PxSweepHit_Pod block;
    bool hasBlock;
    char structgen_pad1[7];
    physx_PxSweepHit_Pod* touches;
    uint32_t maxNbTouches;
    uint32_t nbTouches;
};
struct physx_PxRaycastBuffer_Pod {
    char structgen_pad0[8];
    physx_PxRaycastHit_Pod block;
    bool hasBlock;
    char structgen_pad1[7];
    physx_PxRaycastHit_Pod* touches;
    uint32_t maxNbTouches;
    uint32_t nbTouches;
};
struct physx_PxOverlapBuffer_Pod {
    char structgen_pad0[8];
    physx_PxOverlapHit_Pod block;
    bool hasBlock;
    char structgen_pad1[7];
    physx_PxOverlapHit_Pod* touches;
    uint32_t maxNbTouches;
    uint32_t nbTouches;
};
struct physx_PxSweepBuffer_Pod {
    char structgen_pad0[8];
    physx_PxSweepHit_Pod block;
    bool hasBlock;
    char structgen_pad1[7];
    physx_PxSweepHit_Pod* touches;
    uint32_t maxNbTouches;
    uint32_t nbTouches;
};
struct physx_PxQueryCache_Pod {
    physx_PxShape_Pod* shape;
    physx_PxRigidActor_Pod* actor;
    uint32_t faceIndex;
    char structgen_pad0[4];
};
struct physx_PxQueryFilterData_Pod {
    physx_PxFilterData_Pod data;
    uint16_t flags;
    char structgen_pad0[2];
};
struct physx_PxQueryFilterCallback_Pod {
    void* vtable_;
};
struct physx_PxRigidDynamic_Pod {
    void* vtable_;
};
struct physx_PxRigidStatic_Pod {
    void* vtable_;
};
struct physx_PxArticulationGPUAPIMaxCounts_Pod {
    uint32_t maxDofs;
    uint32_t maxLinks;
    uint32_t maxFixedTendons;
    uint32_t maxFixedTendonJoints;
    uint32_t maxSpatialTendons;
    uint32_t maxSpatialTendonAttachments;
};
struct physx_PxDirectGPUAPI_Pod {
    void* vtable_;
};
struct physx_PxSceneQuerySystem_Pod;
struct physx_PxSceneQueryDesc_Pod {
    int32_t staticStructure;
    int32_t dynamicStructure;
    uint32_t dynamicTreeRebuildRateHint;
    int32_t dynamicTreeSecondaryPruner;
    int32_t staticBVHBuildStrategy;
    int32_t dynamicBVHBuildStrategy;
    uint32_t staticNbObjectsPerNode;
    uint32_t dynamicNbObjectsPerNode;
    int32_t sceneQueryUpdateMode;
};
struct physx_PxSceneQuerySystemBase_Pod {
    void* vtable_;
};
struct physx_PxSceneSQSystem_Pod {
    void* vtable_;
};
struct physx_PxSceneQuerySystem_Pod {
    void* vtable_;
};
struct physx_PxBroadPhaseRegion_Pod {
    physx_PxBounds3_Pod mBounds;
    void* mUserData;
};
struct physx_PxBroadPhaseRegionInfo_Pod {
    physx_PxBroadPhaseRegion_Pod mRegion;
    uint32_t mNbStaticObjects;
    uint32_t mNbDynamicObjects;
    bool mActive;
    bool mOverlap;
    char structgen_pad0[6];
};
struct physx_PxBroadPhaseCaps_Pod {
    uint32_t mMaxNbRegions;
};
struct physx_PxGpuBroadPhaseDesc_Pod {
    uint8_t gpuBroadPhaseNbBitsShiftX;
    uint8_t gpuBroadPhaseNbBitsShiftY;
    uint8_t gpuBroadPhaseNbBitsShiftZ;
    uint8_t gpuBroadPhaseNbBitsEnvIDX;
    uint8_t gpuBroadPhaseNbBitsEnvIDY;
    uint8_t gpuBroadPhaseNbBitsEnvIDZ;
};
struct physx_PxBroadPhaseDesc_Pod {
    int32_t mType;
    char structgen_pad0[4];
    uint64_t mContextID;
    physx_PxCudaContextManager_Pod* mContextManager;
    uint32_t mFoundLostPairsCapacity;
    bool mDiscardStaticVsKinematic;
    bool mDiscardKinematicVsKinematic;
    char structgen_pad1[2];
};
struct physx_PxBroadPhaseUpdateData_Pod {
    uint32_t const* mCreated;
    uint32_t mNbCreated;
    char structgen_pad0[4];
    uint32_t const* mUpdated;
    uint32_t mNbUpdated;
    char structgen_pad1[4];
    uint32_t const* mRemoved;
    uint32_t mNbRemoved;
    char structgen_pad2[4];
    physx_PxBounds3_Pod const* mBounds;
    uint32_t const* mGroups;
    float const* mDistances;
    uint32_t mCapacity;
    char structgen_pad3[4];
};
struct physx_PxBroadPhasePair_Pod {
    uint32_t mID0;
    uint32_t mID1;
};
struct physx_PxBroadPhaseResults_Pod {
    uint32_t mNbCreatedPairs;
    char structgen_pad0[4];
    physx_PxBroadPhasePair_Pod const* mCreatedPairs;
    uint32_t mNbDeletedPairs;
    char structgen_pad1[4];
    physx_PxBroadPhasePair_Pod const* mDeletedPairs;
};
struct physx_PxBroadPhaseRegions_Pod {
    void* vtable_;
};
struct physx_PxBroadPhase_Pod {
    void* vtable_;
};
struct physx_PxAABBManager_Pod {
    void* vtable_;
};
struct physx_PxBroadPhaseCallback_Pod;
struct physx_PxPostSolveCallback_Pod;
struct physx_PxSimulationEventCallback_Pod;
struct physx_PxSceneLimits_Pod {
    uint32_t maxNbActors;
    uint32_t maxNbBodies;
    uint32_t maxNbStaticShapes;
    uint32_t maxNbDynamicShapes;
    uint32_t maxNbAggregates;
    uint32_t maxNbConstraints;
    uint32_t maxNbRegions;
    uint32_t maxNbBroadPhaseOverlaps;
};
struct physx_PxGpuDynamicsMemoryConfig_Pod {
    uint64_t tempBufferCapacity;
    uint32_t maxRigidContactCount;
    uint32_t maxRigidPatchCount;
    uint32_t heapCapacity;
    uint32_t foundLostPairsCapacity;
    uint32_t foundLostAggregatePairsCapacity;
    uint32_t totalAggregatePairsCapacity;
    uint32_t maxDeformableSurfaceContacts;
    uint32_t maxDeformableVolumeContacts;
    uint32_t maxParticleContacts;
    uint32_t collisionStackSize;
};
struct physx_PxSceneDesc_Pod {
    char structgen_pad0[36];
    physx_PxVec3_Pod gravity;
    physx_PxSimulationEventCallback_Pod* simulationEventCallback;
    physx_PxContactModifyCallback_Pod* contactModifyCallback;
    physx_PxCCDContactModifyCallback_Pod* ccdContactModifyCallback;
    physx_PxPostSolveCallback_Pod* deformableSurfacePostSolveCallback;
    physx_PxPostSolveCallback_Pod* deformableVolumePostSolveCallback;
    void const* filterShaderData;
    uint32_t filterShaderDataSize;
    char structgen_pad1[4];
    void * filterShader;
    physx_PxSimulationFilterCallback_Pod* filterCallback;
    int32_t kineKineFilteringMode;
    int32_t staticKineFilteringMode;
    int32_t broadPhaseType;
    char structgen_pad2[4];
    physx_PxBroadPhaseCallback_Pod* broadPhaseCallback;
    physx_PxGpuBroadPhaseDesc_Pod* gpuBroadPhaseDesc;
    physx_PxSceneLimits_Pod limits;
    int32_t frictionType;
    int32_t solverType;
    float bounceThresholdVelocity;
    float frictionOffsetThreshold;
    float frictionCorrelationDistance;
    uint32_t flags;
    physx_PxCpuDispatcher_Pod* cpuDispatcher;
    physx_PxCudaContextManager_Pod* cudaContextManager;
    void* userData;
    uint32_t solverBatchSize;
    uint32_t solverArticulationBatchSize;
    uint32_t nbContactDataBlocks;
    uint32_t maxNbContactDataBlocks;
    float maxBiasCoefficient;
    uint32_t contactReportStreamBufferSize;
    uint32_t ccdMaxPasses;
    float ccdThreshold;
    float ccdMaxSeparation;
    float wakeCounterResetValue;
    physx_PxBounds3_Pod sanityBounds;
    physx_PxGpuDynamicsMemoryConfig_Pod gpuDynamicsConfig;
    uint32_t gpuMaxNumPartitions;
    uint32_t gpuMaxNumStaticPartitions;
    uint32_t gpuComputeVersion;
    uint32_t contactPairSlabSize;
    physx_PxSceneQuerySystem_Pod* sceneQuerySystem;
    char structgen_pad3[8];
};
struct physx_PxGpuDynamicsMemoryConfigStatistics_Pod {
    uint64_t tempBufferCapacity;
    uint32_t rigidContactCount;
    uint32_t rigidPatchCount;
    uint32_t foundLostPairs;
    uint32_t foundLostAggregatePairs;
    uint32_t totalAggregatePairs;
    uint32_t deformableSurfaceContacts;
    uint32_t deformableVolumeContacts;
    uint32_t softbodyContacts;
    uint32_t particleContacts;
    uint32_t collisionStackSize;
};
struct physx_PxSimulationStatistics_Pod {
    uint32_t nbActiveConstraints;
    uint32_t nbActiveDynamicBodies;
    uint32_t nbActiveKinematicBodies;
    uint32_t nbStaticBodies;
    uint32_t nbDynamicBodies;
    uint32_t nbKinematicBodies;
    uint32_t nbShapes[11];
    uint32_t nbAggregates;
    uint32_t nbArticulations;
    uint32_t nbAxisSolverConstraints;
    uint32_t compressedContactSize;
    uint32_t requiredContactConstraintMemory;
    uint32_t peakConstraintMemory;
    uint32_t nbDiscreteContactPairsTotal;
    uint32_t nbDiscreteContactPairsWithCacheHits;
    uint32_t nbDiscreteContactPairsWithContacts;
    uint32_t nbNewPairs;
    uint32_t nbLostPairs;
    uint32_t nbNewTouches;
    uint32_t nbLostTouches;
    uint32_t nbPartitions;
    char structgen_pad0[4];
    uint64_t gpuMemParticles;
    uint64_t gpuMemDeformableSurfaces;
    uint64_t gpuMemDeformableVolumes;
    uint64_t gpuMemHeap;
    uint64_t gpuMemHeapBroadPhase;
    uint64_t gpuMemHeapNarrowPhase;
    uint64_t gpuMemHeapSolver;
    uint64_t gpuMemHeapArticulation;
    uint64_t gpuMemHeapSimulation;
    uint64_t gpuMemHeapSimulationArticulation;
    uint64_t gpuMemHeapSimulationParticles;
    uint64_t gpuMemHeapSimulationDeformableSurface;
    uint64_t gpuMemHeapSimulationDeformableVolume;
    uint64_t gpuMemHeapParticles;
    uint64_t gpuMemHeapDeformableSurfaces;
    uint64_t gpuMemHeapDeformableVolumes;
    uint64_t gpuMemHeapOther;
    physx_PxGpuDynamicsMemoryConfigStatistics_Pod gpuDynamicsMemoryConfigStatistics;
    uint32_t nbBroadPhaseAdds;
    uint32_t nbBroadPhaseRemoves;
    uint32_t nbDiscreteContactPairs[11][11];
    uint32_t nbCCDPairs[11][11];
    uint32_t nbModifiedContactPairs[11][11];
    uint32_t nbTriggerPairs[11][11];
};
struct physx_PxPvdSceneClient_Pod {
    void* vtable_;
};
struct physx_PxContactPairHeader_Pod;
struct physx_PxDominanceGroupPair_Pod {
    uint8_t dominance0;
    uint8_t dominance1;
};
struct physx_PxBroadPhaseCallback_Pod {
    void* vtable_;
};
struct physx_PxPostSolveCallback_Pod {
    void* vtable_;
};
struct physx_PxScene_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxSceneReadLock_Pod {
    char structgen_pad0[8];
};
struct physx_PxSceneWriteLock_Pod {
    char structgen_pad0[8];
};
struct physx_PxContactPairExtraDataItem_Pod {
    uint8_t type;
};
struct physx_PxContactPairVelocity_Pod {
    char structgen_pad0[4];
    physx_PxVec3_Pod linearVelocity[2];
    physx_PxVec3_Pod angularVelocity[2];
};
struct physx_PxContactPairPose_Pod {
    char structgen_pad0[4];
    physx_PxTransform_Pod globalPose[2];
};
struct physx_PxContactPairIndex_Pod {
    char structgen_pad0[2];
    uint16_t index;
};
struct physx_PxContactPairExtraDataIterator_Pod {
    uint8_t const* currPtr;
    uint8_t const* endPtr;
    physx_PxContactPairVelocity_Pod const* preSolverVelocity;
    physx_PxContactPairVelocity_Pod const* postSolverVelocity;
    physx_PxContactPairPose_Pod const* eventPose;
    uint32_t contactPairIndex;
    char structgen_pad0[4];
};
struct physx_PxContactPair_Pod;
struct physx_PxContactPairHeader_Pod {
    physx_PxActor_Pod* actors[2];
    uint8_t const* extraDataStream;
    uint16_t extraDataStreamSize;
    uint16_t flags;
    char structgen_pad0[4];
    physx_PxContactPair_Pod const* pairs;
    uint32_t nbPairs;
    char structgen_pad1[4];
};
struct physx_PxContactPairPoint_Pod {
    physx_PxVec3_Pod position;
    float separation;
    physx_PxVec3_Pod normal;
    uint32_t internalFaceIndex0;
    physx_PxVec3_Pod impulse;
    uint32_t internalFaceIndex1;
};
struct physx_PxContactPairFrictionAnchor_Pod {
    physx_PxVec3_Pod position;
    physx_PxVec3_Pod impulse;
};
struct physx_PxContactPair_Pod {
    physx_PxShape_Pod* shapes[2];
    uint8_t const* contactPatches;
    uint8_t const* contactPoints;
    float const* contactImpulses;
    uint8_t const* frictionPatches;
    uint32_t requiredBufferSize;
    uint8_t contactCount;
    uint8_t patchCount;
    uint16_t contactStreamSize;
    uint16_t flags;
    uint16_t events;
    uint32_t internalData[2];
    char structgen_pad0[4];
};
struct physx_PxTriggerPair_Pod {
    physx_PxShape_Pod* triggerShape;
    physx_PxActor_Pod* triggerActor;
    physx_PxShape_Pod* otherShape;
    physx_PxActor_Pod* otherActor;
    int32_t status;
    uint8_t flags;
    char structgen_pad0[3];
};
struct physx_PxConstraintInfo_Pod {
    physx_PxConstraint_Pod* constraint;
    void* externalReference;
    uint32_t type;
    char structgen_pad0[4];
};
struct physx_PxSimulationEventCallback_Pod {
    void* vtable_;
};
struct physx_PxPruningStructure_Pod {
    void* vtable_;
};
struct physx_PxControllerManager_Pod;
struct physx_PxObstacle_Pod {
    char structgen_pad0[8];
    void* mUserData;
    physx_PxExtendedVec3_Pod mPos;
    physx_PxQuat_Pod mRot;
};
struct physx_PxBoxObstacle_Pod {
    char structgen_pad0[56];
    physx_PxVec3_Pod mHalfExtents;
    char structgen_pad1[4];
};
struct physx_PxCapsuleObstacle_Pod {
    char structgen_pad0[56];
    float mHalfHeight;
    float mRadius;
};
struct physx_PxObstacleContext_Pod {
    void* vtable_;
};
struct physx_PxController_Pod;
struct physx_PxControllerBehaviorCallback_Pod;
struct physx_PxControllerState_Pod {
    physx_PxVec3_Pod deltaXP;
    char structgen_pad0[4];
    physx_PxShape_Pod* touchedShape;
    physx_PxRigidActor_Pod* touchedActor;
    uint32_t touchedObstacleHandle;
    uint32_t collisionFlags;
    bool standOnAnotherCCT;
    bool standOnObstacle;
    bool isMovingUp;
    char structgen_pad1[5];
};
struct physx_PxControllerStats_Pod {
    uint16_t nbIterations;
    uint16_t nbFullUpdates;
    uint16_t nbPartialUpdates;
    uint16_t nbTessellation;
};
struct physx_PxControllerHit_Pod {
    physx_PxController_Pod* controller;
    physx_PxExtendedVec3_Pod worldPos;
    physx_PxVec3_Pod worldNormal;
    physx_PxVec3_Pod dir;
    float length;
    char structgen_pad0[4];
};
struct physx_PxControllerShapeHit_Pod {
    char structgen_pad0[64];
    physx_PxShape_Pod* shape;
    physx_PxRigidActor_Pod* actor;
    uint32_t triangleIndex;
    char structgen_pad1[4];
};
struct physx_PxControllersHit_Pod {
    char structgen_pad0[64];
    physx_PxController_Pod* other;
};
struct physx_PxControllerObstacleHit_Pod {
    char structgen_pad0[64];
    void const* userData;
};
struct physx_PxUserControllerHitReport_Pod {
    void* vtable_;
};
struct physx_PxControllerFilterCallback_Pod {
    void* vtable_;
};
struct physx_PxControllerFilters_Pod {
    physx_PxFilterData_Pod const* mFilterData;
    physx_PxQueryFilterCallback_Pod* mFilterCallback;
    uint16_t mFilterFlags;
    char structgen_pad0[6];
    physx_PxControllerFilterCallback_Pod* mCCTFilterCallback;
};
struct physx_PxControllerDesc_Pod {
    void* vtable_;
    physx_PxExtendedVec3_Pod position;
    physx_PxVec3_Pod upDirection;
    float slopeLimit;
    float invisibleWallHeight;
    float maxJumpHeight;
    float contactOffset;
    float stepOffset;
    float density;
    float scaleCoeff;
    float volumeGrowth;
    physx_PxUserControllerHitReport_Pod* reportCallback;
    physx_PxControllerBehaviorCallback_Pod* behaviorCallback;
    int32_t nonWalkableMode;
    physx_PxMaterial_Pod* material;
    bool registerDeletionListener;
    uint8_t clientID;
    void* userData;
    int32_t mType;
};
struct physx_PxController_Pod {
    void* vtable_;
};
struct physx_PxBoxControllerDesc_Pod {
    void* vtable_;
    float halfHeight;
    float halfSideExtent;
    float halfForwardExtent;
};
struct physx_PxBoxController_Pod {
    void* vtable_;
};
struct physx_PxCapsuleControllerDesc_Pod {
    void* vtable_;
    float radius;
    float height;
    int32_t climbingMode;
};
struct physx_PxCapsuleController_Pod {
    void* vtable_;
};
struct physx_PxControllerBehaviorCallback_Pod {
    void* vtable_;
};
struct physx_PxControllerManager_Pod {
    void* vtable_;
};
struct physx_PxSDFBuilder_Pod;
struct physx_PxDim3_Pod {
    uint32_t x;
    uint32_t y;
    uint32_t z;
};
struct physx_PxSDFDesc_Pod {
    physx_PxBoundedData_Pod sdf;
    physx_PxDim3_Pod dims;
    physx_PxVec3_Pod meshLower;
    float spacing;
    uint32_t subgridSize;
    int32_t bitsPerSubgridPixel;
    physx_PxDim3_Pod sdfSubgrids3DTexBlockDim;
    physx_PxBoundedData_Pod sdfSubgrids;
    physx_PxBoundedData_Pod sdfStartSlots;
    float subgridsMinSdfValue;
    float subgridsMaxSdfValue;
    physx_PxBounds3_Pod sdfBounds;
    float narrowBandThicknessRelativeToSdfBoundsDiagonal;
    uint32_t numThreadsForSdfConstruction;
    physx_PxSimpleTriangleMesh_Pod baseMesh;
    physx_PxSDFBuilder_Pod* sdfBuilder;
};
struct physx_PxConvexMeshDesc_Pod {
    physx_PxBoundedData_Pod points;
    physx_PxBoundedData_Pod polygons;
    physx_PxBoundedData_Pod indices;
    uint16_t flags;
    uint16_t vertexLimit;
    uint16_t polygonLimit;
    uint16_t quantizedCount;
    physx_PxSDFDesc_Pod* sdfDesc;
};
struct physx_PxTriangleMeshDesc_Pod {
    char structgen_pad0[56];
    physx_PxSDFDesc_Pod* sdfDesc;
    float geomEpsilon;
    char structgen_pad1[4];
};
struct physx_PxTetrahedronMeshDesc_Pod {
    char structgen_pad0[16];
    physx_PxBoundedData_Pod points;
    physx_PxBoundedData_Pod tetrahedrons;
    uint16_t flags;
    uint16_t tetsPerElement;
    char structgen_pad1[4];
};
struct physx_PxDeformableVolumeSimulationDataDesc_Pod {
    physx_PxBoundedData_Pod vertexToTet;
};
struct physx_PxBVH33MidphaseDesc_Pod {
    float meshSizePerformanceTradeOff;
    int32_t meshCookingHint;
};
struct physx_PxBVH34MidphaseDesc_Pod {
    uint32_t numPrimsPerLeaf;
    int32_t buildStrategy;
    bool quantized;
    char structgen_pad0[3];
};
struct physx_PxMidphaseDesc_Pod {
    char structgen_pad0[16];
};
struct physx_PxBVHDesc_Pod {
    physx_PxBoundedData_Pod bounds;
    float enlargement;
    uint32_t numPrimsPerLeaf;
    int32_t buildStrategy;
    char structgen_pad0[4];
};
struct physx_PxCookingParams_Pod {
    float areaTestEpsilon;
    float planeTolerance;
    int32_t convexMeshCookingType;
    bool suppressTriangleMeshRemapTable;
    bool buildTriangleAdjacencies;
    bool buildGPUData;
    char structgen_pad0[1];
    physx_PxTolerancesScale_Pod scale;
    uint32_t meshPreprocessParams;
    float meshWeldTolerance;
    float meshAreaMinLimit;
    float meshEdgeLengthMaxLimit;
    physx_PxMidphaseDesc_Pod midphaseDesc;
    uint32_t gaussMapLimit;
    float maxWeightRatioInTet;
};
struct physx_PxDefaultMemoryOutputStream_Pod {
    void* vtable_;
    physx_PxAllocatorCallback_Pod* mAllocator;
    uint8_t* mData;
    uint64_t mSize;
    uint64_t mCapacity;
};
struct physx_PxDefaultMemoryInputData_Pod {
    void* vtable_;
    uint64_t mSize;
    uint8_t const* mData;
    uint64_t mPos;
};
struct physx_PxDefaultFileOutputStream_Pod {
    void* vtable_;
    void* mFile;
};
struct physx_PxDefaultFileInputData_Pod {
    void* vtable_;
    void* mFile;
    uint64_t mLength;
};
struct physx_PxDefaultAllocator_Pod {
    void* vtable_;
};
struct physx_PxJoint_Pod;
struct physx_PxRackAndPinionJoint_Pod;
struct physx_PxGearJoint_Pod;
struct physx_PxD6Joint_Pod;
struct physx_PxDistanceJoint_Pod;
struct physx_PxFixedJoint_Pod;
struct physx_PxPrismaticJoint_Pod;
struct physx_PxRevoluteJoint_Pod;
struct physx_PxSphericalJoint_Pod;
struct physx_PxJoint_Pod {
    void* vtable_;
    void* userData;
};
struct physx_PxSpring_Pod {
    float stiffness;
    float damping;
};
struct physx_PxDistanceJoint_Pod {
    void* vtable_;
};
struct physx_PxFixedJoint_Pod {
    void* vtable_;
};
struct physx_PxJointLimitParameters_Pod {
    float restitution;
    float bounceThreshold;
    float stiffness;
    float damping;
};
struct physx_PxJointLinearLimit_Pod {
    char structgen_pad0[16];
    float value;
};
struct physx_PxJointLinearLimitPair_Pod {
    char structgen_pad0[16];
    float upper;
    float lower;
};
struct physx_PxJointAngularLimitPair_Pod {
    char structgen_pad0[16];
    float upper;
    float lower;
};
struct physx_PxJointLimitCone_Pod {
    char structgen_pad0[16];
    float yAngle;
    float zAngle;
};
struct physx_PxJointLimitPyramid_Pod {
    char structgen_pad0[16];
    float yAngleMin;
    float yAngleMax;
    float zAngleMin;
    float zAngleMax;
};
struct physx_PxPrismaticJoint_Pod {
    void* vtable_;
};
struct physx_PxRevoluteJoint_Pod {
    void* vtable_;
};
struct physx_PxSphericalJoint_Pod {
    void* vtable_;
};
struct physx_PxD6JointDrive_Pod {
    char structgen_pad0[8];
    float forceLimit;
    uint32_t flags;
};
struct physx_PxD6Joint_Pod {
    void* vtable_;
};
struct physx_PxGearJoint_Pod {
    void* vtable_;
};
struct physx_PxRackAndPinionJoint_Pod {
    void* vtable_;
};
struct physx_PxGroupsMask_Pod {
    uint16_t bits0;
    uint16_t bits1;
    uint16_t bits2;
    uint16_t bits3;
};
struct physx_PxDefaultErrorCallback_Pod {
    void* vtable_;
};
struct physx_PxRigidActorExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxConvexCoreExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxMassProperties_Pod {
    physx_PxMat33_Pod inertiaTensor;
    physx_PxVec3_Pod centerOfMass;
    float mass;
};
struct physx_PxRigidBodyExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxShapeExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxMeshOverlapUtil_Pod {
    char structgen_pad0[1040];
};
struct physx_PxSerialization_Pod {
    char structgen_pad0[1];
};
struct physx_PxDefaultCpuDispatcher_Pod {
    void* vtable_;
};
struct physx_PxStringTableExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxBroadPhaseExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxSceneQueryExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxBatchQueryStatus_Pod {
    char structgen_pad0[1];
};
struct physx_PxBatchQueryExt_Pod {
    void* vtable_;
};
struct physx_PxCustomSceneQuerySystem_Pod {
    void* vtable_;
};
struct physx_PxCustomSceneQuerySystemAdapter_Pod {
    void* vtable_;
};
struct physx_PxSamplingExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxPoissonSampler_Pod {
    void* vtable_;
};
struct physx_PxTriangleMeshPoissonSampler_Pod {
    void* vtable_;
};
struct physx_PxTetrahedronMeshExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxGjkQuery_Pod {
    char structgen_pad0[1];
};
struct physx_PxCustomGeometryExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxDeformableSurfaceExt_Pod {
    char structgen_pad0[1];
};
struct physx_PxRepXObject_Pod {
    char const* typeName;
    void const* serializable;
    uint64_t id;
};
struct physx_PxRepXInstantiationArgs_Pod {
    char structgen_pad0[8];
    physx_PxCookingParams_Pod const* cooker;
    physx_PxStringTable_Pod* stringTable;
};
struct physx_XmlMemoryAllocator_Pod;
struct physx_XmlWriter_Pod;
struct physx_XmlReader_Pod;
struct physx_MemoryBuffer_Pod;
struct physx_PxRepXSerializer_Pod {
    void* vtable_;
};
struct physx_PxVehicleSimulationContext_Pod;
struct physx_PxVehicleComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleComponentSequence_Pod {
    char structgen_pad0[808];
};
struct physx_PxVehicleAxleDescription_Pod {
    uint32_t nbAxles;
    uint32_t nbWheelsPerAxle[20];
    uint32_t axleToWheelIds[20];
    uint32_t wheelIdsInAxleOrder[20];
    uint32_t nbWheels;
};
struct physx_PxVehicleFrame_Pod {
    int32_t lngAxis;
    int32_t latAxis;
    int32_t vrtAxis;
};
struct physx_PxVehicleScale_Pod {
    float scale;
};
struct physx_PxVehicleTireSlipParams_Pod {
    float minLatSlipDenominator;
    float minPassiveLongSlipDenominator;
    float minActiveLongSlipDenominator;
};
struct physx_PxVehicleTireAxisStickyParams_Pod {
    float thresholdSpeed;
    float thresholdTime;
    float damping;
};
struct physx_PxVehicleTireStickyParams_Pod {
    physx_PxVehicleTireAxisStickyParams_Pod stickyParams[2];
};
struct physx_PxVehiclePvdAttributeHandles_Pod;
struct physx_PxVehiclePvdContext_Pod {
    physx_PxVehiclePvdAttributeHandles_Pod const* attributeHandles;
    char structgen_pad0[8];
};
struct physx_PxVehicleSimulationContext_Pod {
    physx_PxVec3_Pod gravity;
    physx_PxVehicleFrame_Pod frame;
    physx_PxVehicleScale_Pod scale;
    physx_PxVehicleTireSlipParams_Pod tireSlipParams;
    physx_PxVehicleTireStickyParams_Pod tireStickyParams;
    float thresholdForwardSpeedForWheelAngleIntegration;
    char structgen_pad0[4];
    physx_PxVehiclePvdContext_Pod pvdContext;
    char structgen_pad1[8];
};
struct physx_PxVehiclePhysXSimulationContext_Pod {
    char structgen_pad0[96];
    physx_PxConvexMesh_Pod const* physxUnitCylinderSweepMesh;
    physx_PxScene_Pod const* physxScene;
    int32_t physxActorUpdateMode;
    float physxActorWakeCounterResetValue;
    float physxActorWakeCounterThreshold;
    char structgen_pad1[4];
};
struct physx_PxVehicleRoadGeometryState_Pod {
    physx_PxPlane_Pod plane;
    float friction;
    physx_PxVec3_Pod velocity;
    bool hitState;
    char structgen_pad0[3];
};
struct physx_PxVehicleRigidBodyState_Pod {
    physx_PxTransform_Pod pose;
    physx_PxVec3_Pod linearVelocity;
    physx_PxVec3_Pod angularVelocity;
    physx_PxVec3_Pod previousLinearVelocity;
    physx_PxVec3_Pod previousAngularVelocity;
    physx_PxVec3_Pod externalForce;
    physx_PxVec3_Pod externalTorque;
};
struct physx_PxVehiclePhysXRoadGeometryQueryState_Pod {
    physx_PxRigidActor_Pod* actor;
    physx_PxShape_Pod* shape;
    physx_PxMaterial_Pod* material;
    physx_PxVec3_Pod hitPosition;
    char structgen_pad0[4];
};
struct physx_PxVehiclePhysXActor_Pod {
    physx_PxRigidBody_Pod* rigidBody;
    physx_PxShape_Pod* wheelShapes[20];
};
struct physx_PxVehiclePhysXSteerState_Pod {
    float previousSteerCommand;
};
struct physx_PxVehicleVectorN_Pod {
    char structgen_pad0[96];
};
struct physx_PxVehicleMatrixNN_Pod {
    float mValues[23][23];
    uint32_t mSize;
};
struct physx_PxVehicleMatrixNNLUSolver_Pod {
    char structgen_pad0[2300];
};
struct physx_PxVehicleMatrixNGaussSeidelSolver_Pod {
    char structgen_pad0[1];
};
struct physx_PxVehicleMatrix33Solver_Pod {
    char structgen_pad0[1];
};
struct physx_PxVehicleCommandValueResponseTable_Pod {
    float commandValue;
    char structgen_pad0[516];
};
struct physx_PxVehicleCommandNonLinearResponseParams_Pod {
    float speedResponses[128];
    uint16_t nbSpeedResponses;
    uint16_t speedResponsesPerCommandValue[8];
    uint16_t nbSpeedResponsesPerCommandValue[8];
    char structgen_pad0[2];
    float commandValues[8];
    uint16_t nbCommandValues;
    char structgen_pad1[2];
};
struct physx_PxVehicleCommandResponseParams_Pod {
    physx_PxVehicleCommandNonLinearResponseParams_Pod nonlinearResponse;
    float wheelResponseMultipliers[20];
    float maxResponse;
};
struct physx_PxVehicleBrakeCommandResponseParams_Pod {
    char structgen_pad0[668];
};
struct physx_PxVehicleCommandState_Pod {
    float brakes[2];
    uint32_t nbBrakes;
    float throttle;
    float steer;
};
struct physx_PxVehicleDirectDriveTransmissionCommandState_Pod {
    char structgen_pad0[4];
};
struct physx_PxVehicleEngineDriveTransmissionCommandState_Pod {
    float clutch;
    uint32_t targetGear;
};
struct physx_PxVehicleTankDriveTransmissionCommandState_Pod {
    char structgen_pad0[8];
    float thrusts[2];
};
struct physx_PxVehicleDirectDriveThrottleCommandResponseParams_Pod {
    char structgen_pad0[668];
};
struct physx_PxVehicleClutchCommandResponseParams_Pod {
    float maxResponse;
};
struct physx_PxVehicleClutchParams_Pod {
    int32_t accuracyMode;
    uint32_t estimateIterations;
};
struct physx_PxVehicleEngineParams_Pod {
    char structgen_pad0[68];
    float moi;
    float peakTorque;
    float idleOmega;
    float maxOmega;
    float dampingRateFullThrottle;
    float dampingRateZeroThrottleClutchEngaged;
    float dampingRateZeroThrottleClutchDisengaged;
};
struct physx_PxVehicleGearboxParams_Pod {
    uint32_t neutralGear;
    float ratios[32];
    float finalRatio;
    uint32_t nbRatios;
    float switchTime;
};
struct physx_PxVehicleAutoboxParams_Pod {
    float upRatios[32];
    float downRatios[32];
    float latency;
};
struct physx_PxVehicleFourWheelDriveDifferentialLegacyParams_Pod {
    uint32_t frontWheelIds[2];
    uint32_t rearWheelIds[2];
    float frontRearSplit;
    float frontNegPosSplit;
    float rearNegPosSplit;
    float centerBias;
    float frontBias;
    float rearBias;
    char structgen_pad0[4];
};
struct physx_PxVehicleMultiWheelDriveDifferentialParams_Pod {
    float torqueRatios[20];
    float aveWheelSpeedRatios[20];
};
struct physx_PxVehicleFourWheelDriveDifferentialParams_Pod {
    char structgen_pad0[160];
    uint32_t frontWheelIds[2];
    uint32_t rearWheelIds[2];
    float frontBias;
    float frontTarget;
    float rearBias;
    float rearTarget;
    float centerBias;
    float centerTarget;
    float rate;
};
struct physx_PxVehicleTankDriveDifferentialParams_Pod {
    char structgen_pad0[160];
    uint32_t nbTracks;
    uint32_t thrustIdPerTrack[20];
    uint32_t nbWheelsPerTrack[20];
    uint32_t trackToWheelIds[20];
    uint32_t wheelIdsInTrackOrder[20];
};
struct physx_PxVehicleClutchCommandResponseState_Pod {
    float normalisedCommandResponse;
    float commandResponse;
};
struct physx_PxVehicleEngineDriveThrottleCommandResponseState_Pod {
    float commandResponse;
};
struct physx_PxVehicleEngineState_Pod {
    float rotationSpeed;
};
struct physx_PxVehicleGearboxState_Pod {
    uint32_t currentGear;
    uint32_t targetGear;
    float gearSwitchTime;
};
struct physx_PxVehicleAutoboxState_Pod {
    float timeSinceLastShift;
    bool activeAutoboxGearShift;
    char structgen_pad0[3];
};
struct physx_PxVehicleDifferentialState_Pod {
    uint32_t connectedWheels[20];
    uint32_t nbConnectedWheels;
    float torqueRatiosAllWheels[20];
    float aveWheelSpeedContributionAllWheels[20];
};
struct physx_PxVehicleWheelConstraintGroupState_Pod {
    uint32_t nbGroups;
    uint32_t nbWheelsPerGroup[20];
    uint32_t groupToWheelIds[20];
    uint32_t wheelIdsInGroupOrder[20];
    float wheelMultipliersInGroupOrder[20];
    uint32_t nbWheelsInGroups;
};
struct physx_PxVehicleClutchSlipState_Pod {
    float clutchSlip;
};
struct physx_PxVehicleWheelRigidBody1dState_Pod;
struct physx_PxVehicleWheelActuationState_Pod;
struct physx_PxVehicleWheelParams_Pod;
struct physx_PxVehicleTireForce_Pod;
struct physx_PxVehicleSteerCommandResponseParams_Pod {
    char structgen_pad0[668];
};
struct physx_PxVehicleAckermannParams_Pod {
    uint32_t wheelIds[2];
    float wheelBase;
    float trackWidth;
    float strength;
};
struct physx_PxVehicleWheelActuationState_Pod {
    bool isBrakeApplied;
    bool isDriveApplied;
};
struct physx_PxVehicleWheelRigidBody1dState_Pod {
    float rotationSpeed;
    float correctedRotationSpeed;
    float rotationAngle;
};
struct physx_PxVehicleWheelLocalPose_Pod {
    physx_PxTransform_Pod localPose;
};
struct physx_PxVehicleWheelParams_Pod {
    float radius;
    float halfWidth;
    float mass;
    float moi;
    float dampingRate;
};
struct physx_PxVehicleTireDirectionState_Pod {
    physx_PxVec3_Pod directions[2];
};
struct physx_PxVehicleTireSpeedState_Pod {
    float speedStates[2];
};
struct physx_PxVehicleTireSlipState_Pod {
    float slips[2];
};
struct physx_PxVehicleTireGripState_Pod {
    float load;
    float friction;
};
struct physx_PxVehicleTireCamberAngleState_Pod {
    float camberAngle;
};
struct physx_PxVehicleTireStickyState_Pod {
    float lowSpeedTime[2];
    bool activeStatus[2];
    char structgen_pad0[2];
};
struct physx_PxVehicleTireForce_Pod {
    physx_PxVec3_Pod forces[2];
    physx_PxVec3_Pod torques[2];
    float aligningMoment;
    float wheelTorque;
};
struct physx_PxVehicleDirectDriveCommandResponseComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleDirectDriveActuationStateComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleDirectDrivetrainComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleEngineDriveCommandResponseComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleMultiWheelDriveDifferentialStateComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleFourWheelDriveDifferentialStateComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleTankDriveDifferentialStateComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleLegacyFourWheelDriveDifferentialStateComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleEngineDriveActuationStateComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleEngineDrivetrainComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleRigidBodyParams_Pod;
struct physx_PxVehicleSuspensionParams_Pod;
struct physx_PxVehiclePhysXRigidActorParams_Pod {
    char structgen_pad0[8];
    char const* physxActorName;
};
struct physx_PxTransform_Pod;
struct physx_PxVehiclePhysXRigidActorShapeParams_Pod {
    char structgen_pad0[24];
    uint8_t flags;
    char structgen_pad1[3];
    physx_PxFilterData_Pod simulationFilterData;
    physx_PxFilterData_Pod queryFilterData;
    char structgen_pad2[4];
};
struct physx_PxVehiclePhysXWheelParams_Pod {
    char structgen_pad0[8];
    physx_PxVehicleWheelParams_Pod const* wheelParams;
};
struct physx_PxVehiclePhysXWheelShapeParams_Pod {
    char structgen_pad0[8];
    uint8_t flags;
    char structgen_pad1[3];
    physx_PxFilterData_Pod simulationFilterData;
    physx_PxFilterData_Pod queryFilterData;
    char structgen_pad2[4];
};
struct physx_PxVehiclePhysXConstraints_Pod;
struct physx_PxVehiclePhysXActorBeginComponent_Pod {
    void* vtable_;
};
struct physx_PxVehiclePhysXActorEndComponent_Pod {
    void* vtable_;
};
struct physx_PxVehiclePhysXSuspensionLimitConstraintParams_Pod {
    float restitution;
    int32_t directionForSuspensionLimitConstraint;
};
struct physx_PxVehiclePhysXConstraintState_Pod {
    bool tireActiveStatus[2];
    char structgen_pad0[2];
    physx_PxVec3_Pod tireLinears[2];
    physx_PxVec3_Pod tireAngulars[2];
    float tireDamping[2];
    bool suspActiveStatus;
    char structgen_pad1[3];
    physx_PxVec3_Pod suspLinear;
    physx_PxVec3_Pod suspAngular;
    float suspGeometricError;
    float restitution;
};
struct physx_PxVehicleConstraintConnector_Pod {
    void* vtable_;
    physx_PxVehiclePhysXConstraintState_Pod* mVehicleConstraintState;
};
struct physx_PxVehiclePhysXConstraints_Pod {
    physx_PxVehiclePhysXConstraintState_Pod constraintStates[20];
    physx_PxConstraint_Pod* constraints[5];
    physx_PxVehicleConstraintConnector_Pod* constraintConnectors[5];
};
struct physx_PxVehicleSuspensionState_Pod;
struct physx_PxVehicleSuspensionComplianceState_Pod;
struct physx_PxVehicleSuspensionParams_Pod {
    physx_PxTransform_Pod suspensionAttachment;
    physx_PxVec3_Pod suspensionTravelDir;
    float suspensionTravelDist;
    physx_PxTransform_Pod wheelAttachment;
};
struct physx_PxVehicleSuspensionStateCalculationParams_Pod {
    int32_t suspensionJounceCalculationType;
    bool limitSuspensionExpansionVelocity;
    char structgen_pad0[3];
};
struct physx_PxVehicleSuspensionComplianceParams_Pod {
    char structgen_pad0[160];
};
struct physx_PxVehicleSuspensionForceParams_Pod {
    float stiffness;
    float damping;
    float sprungMass;
};
struct physx_PxVehicleSuspensionForceLegacyParams_Pod {
    float stiffness;
    float damping;
    float restDistance;
    float sprungMass;
};
struct physx_PxVehicleAntiRollForceParams_Pod {
    uint32_t wheel0;
    uint32_t wheel1;
    float stiffness;
};
struct physx_PxVehicleSuspensionState_Pod {
    float jounce;
    float jounceSpeed;
    float separation;
};
struct physx_PxVehicleSuspensionComplianceState_Pod {
    float toe;
    float camber;
    physx_PxVec3_Pod tireForceAppPoint;
    physx_PxVec3_Pod suspForceAppPoint;
};
struct physx_PxVehicleSuspensionForce_Pod {
    physx_PxVec3_Pod force;
    physx_PxVec3_Pod torque;
    float normalForce;
};
struct physx_PxVehicleAntiRollTorque_Pod {
    physx_PxVec3_Pod antiRollTorque;
};
struct physx_PxVehiclePhysXConstraintComponent_Pod {
    void* vtable_;
};
struct physx_PxVehiclePhysXRoadGeometryQueryParams_Pod {
    physx_PxQueryFilterData_Pod defaultFilterData;
    char structgen_pad0[4];
    physx_PxQueryFilterData_Pod* filterDataEntries;
    physx_PxQueryFilterCallback_Pod* filterCallback;
    int32_t roadGeometryQueryType;
    char structgen_pad1[4];
};
struct physx_PxVehiclePhysXMaterialFriction_Pod {
    physx_PxMaterial_Pod const* material;
    float friction;
    char structgen_pad0[4];
};
struct physx_PxVehiclePhysXMaterialFrictionParams_Pod {
    physx_PxVehiclePhysXMaterialFriction_Pod* materialFrictions;
    uint32_t nbMaterialFrictions;
    float defaultFriction;
};
struct physx_PxVehiclePhysXRoadGeometrySceneQueryComponent_Pod {
    void* vtable_;
};
struct physx_PxVehiclePvdObjectHandles_Pod;
struct physx_PxVehicleTireForceParams_Pod {
    float latStiffX;
    float latStiffY;
    float longStiff;
    float camberStiff;
    float frictionVsSlip[3][2];
    float restLoad;
    float loadFilter[2][2];
};
struct physx_PxVehiclePVDComponent_Pod {
    void* vtable_;
    bool firstTime;
};
struct physx_PxVehicleRigidBodyParams_Pod {
    float mass;
    physx_PxVec3_Pod moi;
};
struct physx_PxVehicleRigidBodyComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleSuspensionComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleLegacySuspensionComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleTireComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleLegacyTireComponent_Pod {
    void* vtable_;
};
struct physx_PxVehicleWheelComponent_Pod {
    void* vtable_;
};
struct physx_PxPvdTransport_Pod;
struct physx_PxPvd_Pod {
    void* vtable_;
};
struct physx_PxPvdTransport_Pod {
    void* vtable_;
};
