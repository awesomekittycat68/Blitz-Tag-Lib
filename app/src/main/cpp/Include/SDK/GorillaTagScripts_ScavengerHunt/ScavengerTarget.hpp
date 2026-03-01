#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_ScavengerHunt {
    struct ScavengerTarget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.ScavengerHunt", "ScavengerTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTagScripts_ScavengerHunt::ScavengerManager* GetManager() {
            static BNM::Field<::GorillaTagScripts_ScavengerHunt::ScavengerManager*> _field = GetClass().GetField(O("_manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHuntName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("HuntName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetTargetCollected() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetTargetCollectedArg() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollectedArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTargetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TargetName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetManager(::GorillaTagScripts_ScavengerHunt::ScavengerManager* value) {
            static BNM::Field<::GorillaTagScripts_ScavengerHunt::ScavengerManager*> _field = GetClass().GetField(O("_manager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("HuntName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetCollected(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetCollectedArg(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("TargetCollectedArg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("TargetName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanBeGrabbed"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabber);
        }
        void Collect() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Collect"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ConnectToScavengerManager() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ConnectToScavengerManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool MomentaryGrabOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MomentaryGrabOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnGrabbed(::GlobalNamespace::GorillaGrabber* grabber, ::Transform*& grabbedTransform, ::BNM::Structures::Unity::Vector3& localGrabbedPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbed"), {"grabber", "grabbedTransform", "localGrabbedPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabber, &grabbedTransform, &localGrabbedPosition);
        }
        void OnGrabReleased(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabReleased"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabber);
        }
    };
}
