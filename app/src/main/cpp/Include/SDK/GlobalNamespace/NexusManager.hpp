#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Member.hpp"
#include "NexusManager_Environment.hpp"

namespace GlobalNamespace {
    struct NexusManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NexusManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::NexusManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::NexusManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* ENV_PRODUCTION = "production";
        static constexpr const char* ENV_SANDBOX = "sandbox";
        static constexpr const char* ENV_PRODUCTION_API_KEY = "nexus_pk_4c18dcb1531846c7abad4cb00c5242bb";
        static constexpr const char* ENV_SANDBOX_API_KEY = "nexus_pk_ba155a8c229740489d214f024e25f25c";
        ::GlobalNamespace::NexusManager_Environment GetCurrentEnvironment() {
            static BNM::Method<::GlobalNamespace::NexusManager_Environment> _method = GetClass().GetMethod(O("get_CurrentEnvironment"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::NexusManager_Environment GetEnvironment() {
            static BNM::Field<::GlobalNamespace::NexusManager_Environment> _field = GetClass().GetField(O("environment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::NexusManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::NexusManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::Member>* GetValidatedMembers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::Member>*> _field = GetClass().GetField(O("validatedMembers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnvironment(::GlobalNamespace::NexusManager_Environment value) {
            static BNM::Field<::GlobalNamespace::NexusManager_Environment> _field = GetClass().GetField(O("environment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::NexusManager* value) {
            static BNM::Field<::GlobalNamespace::NexusManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetValidatedMembers(::BNM::Structures::Mono::Array<::GlobalNamespace::Member>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::Member>*> _field = GetClass().GetField(O("validatedMembers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::NexusManager_Environment get_CurrentEnvironment() {
            static BNM::Method<::GlobalNamespace::NexusManager_Environment> _m = GetClass().GetMethod(O("get_CurrentEnvironment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* VerifyCreatorCode(::BNM::Structures::Mono::String* terminalId, ::BNM::Structures::Mono::String* code, ::GlobalNamespace::NexusGroupId* id) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("VerifyCreatorCode"), {"terminalId", "code", "id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(terminalId, code, id);
        }
        void* VerifyCreatorCodeJIT(::BNM::Structures::Mono::String* memberCode, ::BNM::Structures::Mono::String* groupCode) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("VerifyCreatorCodeJIT"), {"memberCode", "groupCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(memberCode, groupCode);
        }
    };
}
