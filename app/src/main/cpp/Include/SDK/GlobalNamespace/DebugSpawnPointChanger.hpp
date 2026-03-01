#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DebugSpawnPointChanger_GeoTriggersGroup.hpp"

namespace GlobalNamespace {
    struct DebugSpawnPointChanger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DebugSpawnPointChanger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetLastLocationIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastLocationIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>* GetLevelTriggers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>*> _field = GetClass().GetField(O("levelTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastLocationIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastLocationIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelTriggers(::BNM::Structures::Mono::Array<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::DebugSpawnPointChanger_GeoTriggersGroup>*> _field = GetClass().GetField(O("levelTriggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AttachSpawnPoint(::GlobalNamespace::VRRig* rig, ::BNM::Structures::Mono::Array<::Transform*>* spawnPts, int locationIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachSpawnPoint"), {"rig", "spawnPts", "locationIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, spawnPts, locationIndex);
        }
        void ChangePoint(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangePoint"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetPlausibleJumpLocation() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("GetPlausibleJumpLocation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void JumpTo(int canJumpIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("JumpTo"), {"canJumpIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(canJumpIndex);
        }
        void SetLastLocation(::BNM::Structures::Mono::String* levelName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLastLocation"), {"levelName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(levelName);
        }
    };
}
