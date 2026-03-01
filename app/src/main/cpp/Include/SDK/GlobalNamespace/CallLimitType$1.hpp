#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FXType.hpp"

namespace GlobalNamespace {
    template <typename T>
    struct CallLimitType$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CallLimitType`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T GetCallLimitSettings() {
            static BNM::Field<T> _field = GetClass().GetField(O("CallLimitSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FXType GetKey() {
            static BNM::Field<::GlobalNamespace::FXType> _field = GetClass().GetField(O("Key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseNetWorkTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseNetWorkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallLimitSettings(T value) {
            static BNM::Field<T> _field = GetClass().GetField(O("CallLimitSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKey(::GlobalNamespace::FXType value) {
            static BNM::Field<::GlobalNamespace::FXType> _field = GetClass().GetField(O("Key"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseNetWorkTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseNetWorkTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
