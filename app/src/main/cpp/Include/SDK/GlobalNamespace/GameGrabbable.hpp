#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameGrab.hpp"

namespace GlobalNamespace {
    struct GameGrabbable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameGrabbable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetGRABPALM() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("GRAB_PALM"));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetGRABUP() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("GRAB_UP"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>* GetSnapGrabPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*> _field = GetClass().GetField(O("snapGrabPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapGrabPoints(::BNM::Structures::Mono::List<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameGrabbable_SnapGrabPoints*>*> _field = GetClass().GetField(O("snapGrabPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool GetBestGrabPoint(::BNM::Structures::Unity::Vector3 handPos, ::BNM::Structures::Unity::Quaternion handRot, int handIndex, ::GlobalNamespace::GameGrab& grab) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetBestGrabPoint"), {"handPos", "handRot", "handIndex", "grab"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(handPos, handRot, handIndex, &grab);
        }
    };
}
