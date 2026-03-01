#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LCKSocialCameraFollower : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LCKSocialCameraFollower");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetCameraVisualsRoot() {
            static BNM::Method<::GameObject*> _method = GetClass().GetMethod(O("get_CameraVisualsRoot"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetScaleTransform() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_ScaleTransform"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetVisualObjects() {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _method = GetClass().GetMethod(O("get_VisualObjects"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetCameraVisualsRoot_f() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_cameraVisualsRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetScaleTransform_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_scaleTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetVisualObjects_f() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("_visualObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsParentedToRig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isParentedToRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMGtCameraVisuals() {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_gtCameraVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LckSocialCamera* GetMNetworkController() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera*> _field = GetClass().GetField(O("m_networkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetMRigContainer() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("m_rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMTransformToFollow() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_transformToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCameraVisualsRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_cameraVisualsRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_scaleTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisualObjects(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("_visualObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsParentedToRig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isParentedToRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMGtCameraVisuals(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_gtCameraVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMNetworkController(::GlobalNamespace::LckSocialCamera* value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera*> _field = GetClass().GetField(O("m_networkController"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMRigContainer(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("m_rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTransformToFollow(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_transformToFollow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GameObject* get_CameraVisualsRoot() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("get_CameraVisualsRoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_ScaleTransform() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_ScaleTransform"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* get_VisualObjects() {
            static BNM::Method<::BNM::Structures::Mono::List<::GameObject*>*> _m = GetClass().GetMethod(O("get_VisualObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PostRigEnable(::GlobalNamespace::RigContainer* _) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostRigEnable"), {"_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_);
        }
        void PreRigDisable(::GlobalNamespace::RigContainer* _) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreRigDisable"), {"_"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(_);
        }
        void RemoveNetworkController(::GlobalNamespace::LckSocialCamera* networkController) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveNetworkController"), {"networkController"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(networkController);
        }
        void SetNetworkController(::GlobalNamespace::LckSocialCamera* networkController) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNetworkController"), {"networkController"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(networkController);
        }
        void SetParentNull() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParentNull"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetParentToRig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParentToRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
