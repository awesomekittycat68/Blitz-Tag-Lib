#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaPawn : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaPawn");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_PAWNS = 10;
        int GetActiveCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActiveCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>* GetAllPawns() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>*> _method = GetClass().GetMethod(O("get_AllPawns"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XformNode* GetBody() {
            static BNM::Method<::GlobalNamespace::XformNode*> _method = GetClass().GetMethod(O("get_body"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XformNode* GetHandLeft() {
            static BNM::Method<::GlobalNamespace::XformNode*> _method = GetClass().GetMethod(O("get_handLeft"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XformNode* GetHandRight() {
            static BNM::Method<::GlobalNamespace::XformNode*> _method = GetClass().GetMethod(O("get_handRight"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XformNode* GetHead() {
            static BNM::Method<::GlobalNamespace::XformNode*> _method = GetClass().GetMethod(O("get_head"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_rig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetShaderData() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _method = GetClass().GetMethod(O("get_ShaderData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetTransform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_transform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::ZoneEntityBSP* GetZoneEntity() {
            static BNM::Method<::GlobalNamespace::ZoneEntityBSP*> _method = GetClass().GetMethod(O("get_zoneEntity"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XformNode* GetBodyXform() {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_bodyXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetGPawnActiveCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_gPawnActiveCount"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>* GetGPawns() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>*> _field = GetClass().GetField(O("_gPawns"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetGShaderData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("_gShaderData"));
            return _field.Get();
        }
        ::Transform* GetHandLeft_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_handLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XformNode* GetHandLeftXform() {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_handLeftXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHandRight_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_handRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XformNode* GetHandRightXform() {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_handRightXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHead_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XformNode* GetHeadXform() {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_headXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetId() {
            static BNM::Field<int> _field = GetClass().GetField(O("_id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInvalid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_invalid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig_f() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTransform_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_transform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ZoneEntityBSP* GetZoneEntity_f() {
            static BNM::Field<::GlobalNamespace::ZoneEntityBSP*> _field = GetClass().GetField(O("_zoneEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBodyXform(::GlobalNamespace::XformNode* value) {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_bodyXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGPawnActiveCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_gPawnActiveCount"));
            _field.Set(value);
        }
        static void SetGPawns(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>*> _field = GetClass().GetField(O("_gPawns"));
            _field.Set(value);
        }
        static void SetGShaderData(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("_gShaderData"));
            _field.Set(value);
        }
        void SetHandLeft(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_handLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandLeftXform(::GlobalNamespace::XformNode* value) {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_handLeftXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandRight(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_handRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandRightXform(::GlobalNamespace::XformNode* value) {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_handRightXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHead(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeadXform(::GlobalNamespace::XformNode* value) {
            static BNM::Field<::GlobalNamespace::XformNode*> _field = GetClass().GetField(O("_headXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInvalid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_invalid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_transform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneEntity(::GlobalNamespace::ZoneEntityBSP* value) {
            static BNM::Field<::GlobalNamespace::ZoneEntityBSP*> _field = GetClass().GetField(O("_zoneEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanRun() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanRun"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int ComparePawns(::GlobalNamespace::GorillaPawn* x, ::GlobalNamespace::GorillaPawn* y) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComparePawns"), {"x", "y"});
            return _m.Call(x, y);
        }
        static int get_ActiveCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActiveCount"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>* get_AllPawns() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPawn*>*> _m = GetClass().GetMethod(O("get_AllPawns"));
            return _m.Call();
        }
        ::GlobalNamespace::XformNode* get_body() {
            static BNM::Method<::GlobalNamespace::XformNode*> _m = GetClass().GetMethod(O("get_body"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::XformNode* get_handLeft() {
            static BNM::Method<::GlobalNamespace::XformNode*> _m = GetClass().GetMethod(O("get_handLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::XformNode* get_handRight() {
            static BNM::Method<::GlobalNamespace::XformNode*> _m = GetClass().GetMethod(O("get_handRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::XformNode* get_head() {
            static BNM::Method<::GlobalNamespace::XformNode*> _m = GetClass().GetMethod(O("get_head"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_rig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_rig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* get_ShaderData() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _m = GetClass().GetMethod(O("get_ShaderData"));
            return _m.Call();
        }
        ::Transform* get_transform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_transform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ZoneEntityBSP* get_zoneEntity() {
            static BNM::Method<::GlobalNamespace::ZoneEntityBSP*> _m = GetClass().GetMethod(O("get_zoneEntity"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup(bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(force);
        }
        static void SyncPawnData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SyncPawnData"));
            _m.Call();
        }
    };
}
