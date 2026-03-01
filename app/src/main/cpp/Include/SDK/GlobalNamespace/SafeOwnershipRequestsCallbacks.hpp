#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SafeOwnershipRequestsCallbacks : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SafeOwnershipRequestsCallbacks");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RequestableOwnershipGuard* GetRequestableOwnershipGuard() {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("_requestableOwnershipGuard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRequestableOwnershipGuard(::GlobalNamespace::RequestableOwnershipGuard* value) {
            static BNM::Field<::GlobalNamespace::RequestableOwnershipGuard*> _field = GetClass().GetField(O("_requestableOwnershipGuard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
