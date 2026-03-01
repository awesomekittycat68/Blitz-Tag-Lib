#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FriendingManager_FriendStationState.hpp"
#include "GTZone.hpp"

namespace GlobalNamespace {
    struct FriendingManager_FriendStationData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendingManager").GetInnerClass("FriendStationData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActorNumberA() {
            static BNM::Field<int> _field = GetClass().GetField(O("actorNumberA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetActorNumberB() {
            static BNM::Field<int> _field = GetClass().GetField(O("actorNumberB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgressBarStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("progressBarStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendingManager_FriendStationState GetState() {
            static BNM::Field<::GlobalNamespace::FriendingManager_FriendStationState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActorNumberA(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actorNumberA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActorNumberB(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actorNumberB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressBarStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("progressBarStartTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::FriendingManager_FriendStationState value) {
            static BNM::Field<::GlobalNamespace::FriendingManager_FriendStationState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("zone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
