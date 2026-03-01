#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDDefaultSession : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDDefaultSession");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetPermissions() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _method = GetClass().GetMethod(O("get_Permissions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPermissions(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Permissions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* get_AgeStatus() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_AgeStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* get_Permissions() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("get_Permissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_AgeStatus(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AgeStatus"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Permissions(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Permissions"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
