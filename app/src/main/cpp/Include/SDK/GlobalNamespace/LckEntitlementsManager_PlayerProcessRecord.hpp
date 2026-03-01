#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LckEntitlementsManager_PlayerProcessRecord : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckEntitlementsManager").GetInnerClass("PlayerProcessRecord");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAttemptCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("AttemptCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastSeenTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("LastSeenTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeoutUntilTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("TimeoutUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttemptCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("AttemptCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastSeenTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LastSeenTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeoutUntilTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("TimeoutUntilTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
