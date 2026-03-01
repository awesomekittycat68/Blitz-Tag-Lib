#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SnapJointType.hpp"

namespace GlobalNamespace {
    struct SuperInfectionSnapPointManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SuperInfectionSnapPointManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SnapJointType, ::GlobalNamespace::SuperInfectionSnapPoint*>* GetSnapPointDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SnapJointType, ::GlobalNamespace::SuperInfectionSnapPoint*>*> _field = GetClass().GetField(O("snapPointDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>* GetSnapPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>*> _field = GetClass().GetField(O("SnapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSnapPointDict(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SnapJointType, ::GlobalNamespace::SuperInfectionSnapPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::SnapJointType, ::GlobalNamespace::SuperInfectionSnapPoint*>*> _field = GetClass().GetField(O("snapPointDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapPoints(::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SuperInfectionSnapPoint*>*> _field = GetClass().GetField(O("SnapPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DropAllSnappedAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropAllSnappedAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::SuperInfectionSnapPoint* FindSnapPoint(::GlobalNamespace::SnapJointType jointType) {
            static BNM::Method<::GlobalNamespace::SuperInfectionSnapPoint*> _m = GetClass().GetMethod(O("FindSnapPoint"), {"jointType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(jointType);
        }
        static ::GlobalNamespace::SuperInfectionSnapPoint* FindSnapPoint(::GlobalNamespace::GamePlayer* player, ::GlobalNamespace::SnapJointType jointType) {
            static BNM::Method<::GlobalNamespace::SuperInfectionSnapPoint*> _m = GetClass().GetMethod(O("FindSnapPoint"), {"player", "jointType"});
            return _m.Call(player, jointType);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
