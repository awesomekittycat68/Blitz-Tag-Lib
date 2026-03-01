#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveForcedLeaveRoomVolume : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveForcedLeaveRoomVolume");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaTagCompetitiveManager* GetCompetitiveManager() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager*> _field = GetClass().GetField(O("CompetitiveManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetVolumeCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("VolumeCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCompetitiveManager(::GlobalNamespace::GorillaTagCompetitiveManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager*> _field = GetClass().GetField(O("CompetitiveManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("VolumeCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool ContainsPoint(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ContainsPoint"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
