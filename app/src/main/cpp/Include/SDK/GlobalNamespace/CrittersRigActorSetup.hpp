#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersRigActorSetup_RigActor.hpp"

namespace GlobalNamespace {
    struct CrittersRigActorSetup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersRigActorSetup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetRigActorData() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("rigActorData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersRigActorSetup_RigActor>* GetRigActors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersRigActorSetup_RigActor>*> _field = GetClass().GetField(O("rigActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("myRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigActorData(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("rigActorData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigActors(::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersRigActorSetup_RigActor>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CrittersRigActorSetup_RigActor>*> _field = GetClass().GetField(O("rigActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckUpdate(::BNM::IL2CPP::Il2CppObject*& refActorData, bool forceCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckUpdate"), {"refActorData", "forceCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&refActorData, forceCheck);
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
        ::GlobalNamespace::CrittersActor* RefreshActorForIndex(int index) {
            static BNM::Method<::GlobalNamespace::CrittersActor*> _m = GetClass().GetMethod(O("RefreshActorForIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
    };
}
