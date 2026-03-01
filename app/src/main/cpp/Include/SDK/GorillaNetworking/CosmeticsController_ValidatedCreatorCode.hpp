#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct CosmeticsController_ValidatedCreatorCode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController").GetInnerClass("ValidatedCreatorCode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetGroupId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_groupId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGroupId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_groupId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetMemberCode() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_memberCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMemberCode(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_memberCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTerminalId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_terminalId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTerminalId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_terminalId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* get_groupId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_groupId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_memberCode() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_memberCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_terminalId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_terminalId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_groupId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_groupId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_memberCode(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_memberCode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_terminalId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_terminalId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
