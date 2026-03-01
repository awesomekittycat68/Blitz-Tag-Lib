#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaWrappedSerializer.hpp"
#include "PhotonMessageInfoWrapped.hpp"

namespace GlobalNamespace {
    struct VrrigReliableSerializer : ::GlobalNamespace::GorillaWrappedSerializer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VrrigReliableSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnBeforeDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFailedSpawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailedSpawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool OnSpawnSetupCheck(::GlobalNamespace::PhotonMessageInfoWrapped wrappedInfo, ::GameObject*& outTargetObject, ::BNM::MonoType*& outTargetType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnSpawnSetupCheck"), {"wrappedInfo", "outTargetObject", "outTargetType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(wrappedInfo, &outTargetObject, &outTargetType);
        }
        void OnSuccesfullySpawned(::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccesfullySpawned"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
    };
}
