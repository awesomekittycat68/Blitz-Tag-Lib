#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDManager_$$c__DisplayClass101_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDManager").GetInnerClass("<>c__DisplayClass101_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetState() {
            static BNM::Field<int> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
