#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename $name$j__TPar, typename $forRoom$j__TPar, typename $forTroop$j__TPar>
    struct $$f__AnonymousType1$3 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "<>f__AnonymousType1`3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        <forRoom>j__TPar GetForRoom() {
            static BNM::Method<<forRoom>j__TPar> _method = GetClass().GetMethod(O("get_forRoom"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        <forTroop>j__TPar GetForTroop() {
            static BNM::Method<<forTroop>j__TPar> _method = GetClass().GetMethod(O("get_forTroop"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        <name>j__TPar GetName() {
            static BNM::Method<<name>j__TPar> _method = GetClass().GetMethod(O("get_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        <forRoom>j__TPar get_forRoom() {
            static BNM::Method<<forRoom>j__TPar> _m = GetClass().GetMethod(O("get_forRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        <forTroop>j__TPar get_forTroop() {
            static BNM::Method<<forTroop>j__TPar> _m = GetClass().GetMethod(O("get_forTroop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        <name>j__TPar get_name() {
            static BNM::Method<<name>j__TPar> _m = GetClass().GetMethod(O("get_name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
