#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BuildSafe {
    struct ObjectFactory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BuildSafe", "ObjectFactory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_componentWasAdded(::BNM::Structures::Mono::Action<::Component*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_componentWasAdded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_componentWasAdded(::BNM::Structures::Mono::Action<::Component*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_componentWasAdded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static void add_componentWasAdded_1(::BNM::Structures::Mono::Action<::Component*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_componentWasAdded"), {"value"});
            _m.Call(value);
        }
        static void remove_componentWasAdded_1(::BNM::Structures::Mono::Action<::Component*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_componentWasAdded"), {"value"});
            _m.Call(value);
        }
    };
}
