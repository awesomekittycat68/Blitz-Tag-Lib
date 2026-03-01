#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CjLib {
    struct PrimitiveMeshFactory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CjLib", "PrimitiveMeshFactory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* GetSBoxFlatShadedMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_boxFlatShadedMesh"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSBoxSolidColorMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_boxSolidColorMesh"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSBoxWireframeMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_boxWireframeMesh"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsule2dFlatShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsule2dFlatShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsule2dSolidColorMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsule2dSolidColorMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsule2dWireframeMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsule2dWireframeMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsuleFlatShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleFlatShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsuleSmoothShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleSmoothShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsuleSolidColorMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleSolidColorMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCapsuleWireframeMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleWireframeMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCircleFlatShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_circleFlatShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCircleSolidColorMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_circleSolidColorMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCircleWireframeMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_circleWireframeMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSConeFlatShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneFlatShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSConeSmoothhadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneSmoothhadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSConeSolidColorMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneSolidColorMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSConeWireframeMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneWireframeMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCylinderFlatShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderFlatShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCylinderSmoothShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderSmoothShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCylinderSolidColorMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderSolidColorMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSCylinderWireframeMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderWireframeMeshPool"));
            return _field.Get();
        }
        static int GetSIPooledMesh() {
            static BNM::Field<int> _field = GetClass().GetField(O("s_iPooledMesh"));
            return _field.Get();
        }
        static int GetSLastDrawLineFrame() {
            static BNM::Field<int> _field = GetClass().GetField(O("s_lastDrawLineFrame"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSLineMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_lineMeshPool"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSRectFlatShadedMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_rectFlatShadedMesh"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSRectSolidColorMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_rectSolidColorMesh"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSRectWireframeMesh() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_rectWireframeMesh"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSSphereFlatShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereFlatShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSSphereSmoothShadedMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereSmoothShadedMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSSphereSolidColorMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereSolidColorMeshPool"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* GetSSphereWireframeMeshPool() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereWireframeMeshPool"));
            return _field.Get();
        }
        static void SetSBoxFlatShadedMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_boxFlatShadedMesh"));
            _field.Set(value);
        }
        static void SetSBoxSolidColorMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_boxSolidColorMesh"));
            _field.Set(value);
        }
        static void SetSBoxWireframeMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_boxWireframeMesh"));
            _field.Set(value);
        }
        static void SetSCapsule2dFlatShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsule2dFlatShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSCapsule2dSolidColorMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsule2dSolidColorMeshPool"));
            _field.Set(value);
        }
        static void SetSCapsule2dWireframeMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsule2dWireframeMeshPool"));
            _field.Set(value);
        }
        static void SetSCapsuleFlatShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleFlatShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSCapsuleSmoothShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleSmoothShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSCapsuleSolidColorMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleSolidColorMeshPool"));
            _field.Set(value);
        }
        static void SetSCapsuleWireframeMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_capsuleWireframeMeshPool"));
            _field.Set(value);
        }
        static void SetSCircleFlatShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_circleFlatShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSCircleSolidColorMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_circleSolidColorMeshPool"));
            _field.Set(value);
        }
        static void SetSCircleWireframeMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_circleWireframeMeshPool"));
            _field.Set(value);
        }
        static void SetSConeFlatShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneFlatShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSConeSmoothhadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneSmoothhadedMeshPool"));
            _field.Set(value);
        }
        static void SetSConeSolidColorMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneSolidColorMeshPool"));
            _field.Set(value);
        }
        static void SetSConeWireframeMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_coneWireframeMeshPool"));
            _field.Set(value);
        }
        static void SetSCylinderFlatShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderFlatShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSCylinderSmoothShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderSmoothShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSCylinderSolidColorMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderSolidColorMeshPool"));
            _field.Set(value);
        }
        static void SetSCylinderWireframeMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_cylinderWireframeMeshPool"));
            _field.Set(value);
        }
        static void SetSIPooledMesh(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("s_iPooledMesh"));
            _field.Set(value);
        }
        static void SetSLastDrawLineFrame(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("s_lastDrawLineFrame"));
            _field.Set(value);
        }
        static void SetSLineMeshPool(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_lineMeshPool"));
            _field.Set(value);
        }
        static void SetSRectFlatShadedMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_rectFlatShadedMesh"));
            _field.Set(value);
        }
        static void SetSRectSolidColorMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_rectSolidColorMesh"));
            _field.Set(value);
        }
        static void SetSRectWireframeMesh(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("s_rectWireframeMesh"));
            _field.Set(value);
        }
        static void SetSSphereFlatShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereFlatShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSSphereSmoothShadedMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereSmoothShadedMeshPool"));
            _field.Set(value);
        }
        static void SetSSphereSolidColorMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereSolidColorMeshPool"));
            _field.Set(value);
        }
        static void SetSSphereWireframeMeshPool(::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("s_sphereWireframeMeshPool"));
            _field.Set(value);
        }
        static ::BNM::IL2CPP::Il2CppObject* BoxFlatShaded() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("BoxFlatShaded"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* BoxSolidColor() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("BoxSolidColor"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* BoxWireframe() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("BoxWireframe"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* Capsule2DFlatShaded(int capSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Capsule2DFlatShaded"), {"capSegments"});
            return _m.Call(capSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* Capsule2DSolidColor(int capSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Capsule2DSolidColor"), {"capSegments"});
            return _m.Call(capSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* Capsule2DWireframe(int capSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Capsule2DWireframe"), {"capSegments"});
            return _m.Call(capSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CapsuleFlatShaded(int latSegmentsPerCap, int longSegmentsPerCap, bool caps, bool topCapOnly, bool sides) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CapsuleFlatShaded"), {"latSegmentsPerCap", "longSegmentsPerCap", "caps", "topCapOnly", "sides"});
            return _m.Call(latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
        }
        static ::BNM::IL2CPP::Il2CppObject* CapsuleSmoothShaded(int latSegmentsPerCap, int longSegmentsPerCap, bool caps, bool topCapOnly, bool sides) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CapsuleSmoothShaded"), {"latSegmentsPerCap", "longSegmentsPerCap", "caps", "topCapOnly", "sides"});
            return _m.Call(latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
        }
        static ::BNM::IL2CPP::Il2CppObject* CapsuleSolidColor(int latSegmentsPerCap, int longSegmentsPerCap, bool caps, bool topCapOnly, bool sides) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CapsuleSolidColor"), {"latSegmentsPerCap", "longSegmentsPerCap", "caps", "topCapOnly", "sides"});
            return _m.Call(latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
        }
        static ::BNM::IL2CPP::Il2CppObject* CapsuleWireframe(int latSegmentsPerCap, int longSegmentsPerCap, bool caps, bool topCapOnly, bool sides) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CapsuleWireframe"), {"latSegmentsPerCap", "longSegmentsPerCap", "caps", "topCapOnly", "sides"});
            return _m.Call(latSegmentsPerCap, longSegmentsPerCap, caps, topCapOnly, sides);
        }
        static ::BNM::IL2CPP::Il2CppObject* CircleFlatShaded(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CircleFlatShaded"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CircleSolidColor(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CircleSolidColor"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CircleWireframe(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CircleWireframe"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* ConeFlatShaded(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ConeFlatShaded"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* ConeSmoothShaded(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ConeSmoothShaded"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* ConeSolidColor(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ConeSolidColor"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* ConeWireframe(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ConeWireframe"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CylinderFlatShaded(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CylinderFlatShaded"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CylinderSmoothShaded(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CylinderSmoothShaded"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CylinderSolidColor(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CylinderSolidColor"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* CylinderWireframe(int numSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CylinderWireframe"), {"numSegments"});
            return _m.Call(numSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* GetPooledLineMesh() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("GetPooledLineMesh"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* Line(::BNM::Structures::Unity::Vector3 v0, ::BNM::Structures::Unity::Vector3 v1) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Line"), {"v0", "v1"});
            return _m.Call(v0, v1);
        }
        static ::BNM::IL2CPP::Il2CppObject* Lines(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* aVert) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("Lines"), {"aVert"});
            return _m.Call(aVert);
        }
        static ::BNM::IL2CPP::Il2CppObject* LineStrip(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector3>* aVert) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("LineStrip"), {"aVert"});
            return _m.Call(aVert);
        }
        static ::BNM::IL2CPP::Il2CppObject* RectFlatShaded() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RectFlatShaded"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* RectSolidColor() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RectSolidColor"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* RectWireframe() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RectWireframe"));
            return _m.Call();
        }
        static ::BNM::IL2CPP::Il2CppObject* SphereFlatShaded(int latSegments, int longSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SphereFlatShaded"), {"latSegments", "longSegments"});
            return _m.Call(latSegments, longSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* SphereSmoothShaded(int latSegments, int longSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SphereSmoothShaded"), {"latSegments", "longSegments"});
            return _m.Call(latSegments, longSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* SphereSolidColor(int latSegments, int longSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SphereSolidColor"), {"latSegments", "longSegments"});
            return _m.Call(latSegments, longSegments);
        }
        static ::BNM::IL2CPP::Il2CppObject* SphereWireframe(int latSegments, int longSegments) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SphereWireframe"), {"latSegments", "longSegments"});
            return _m.Call(latSegments, longSegments);
        }
    };
}
