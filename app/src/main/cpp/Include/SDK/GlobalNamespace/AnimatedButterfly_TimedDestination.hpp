#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AnimatedButterfly_TimedDestination : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnimatedButterfly").GetInnerClass("TimedDestination");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetDestination() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSyncEndTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("syncEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSyncTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("syncTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDestination(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("destination"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncEndTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("syncEndTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("syncTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
