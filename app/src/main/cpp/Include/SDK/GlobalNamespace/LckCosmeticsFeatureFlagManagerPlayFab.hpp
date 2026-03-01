#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LckCosmeticsFeatureFlagManagerPlayFab : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckCosmeticsFeatureFlagManagerPlayFab");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* TitleDataKey = "EnableLckCosmetics";
        static constexpr int MaxRetries = 2;
        static constexpr int RetryDelayMilliseconds = 5000;
        void* GetInitializationTask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_initializationTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_lock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInitializationTask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_initializationTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* GetEnabledStateWithRetryAsync() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetEnabledStateWithRetryAsync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* IsEnabledAsync() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("IsEnabledAsync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
