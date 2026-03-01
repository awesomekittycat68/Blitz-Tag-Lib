#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    struct PlayFabDeviceUtil_$$c__DisplayClass9_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabDeviceUtil").GetInnerClass("<>c__DisplayClass9_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetInstanceApi() {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceApi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabApiSettings* GetSettings() {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInstanceApi(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("instanceApi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSettings(::PlayFab::PlayFabApiSettings* value) {
            static BNM::Field<::PlayFab::PlayFabApiSettings*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
