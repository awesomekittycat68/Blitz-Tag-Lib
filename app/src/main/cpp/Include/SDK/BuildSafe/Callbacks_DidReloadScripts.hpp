#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct Callbacks_DidReloadScripts : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "Callbacks").GetInnerClass("DidReloadScripts");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActiveOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("activeOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("activeOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
