#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Cosmetics {
    struct CreatorCodeTerminal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Cosmetics", "CreatorCodeTerminal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* GetNexusGroups() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>*> _method = GetClass().GetMethod(O("get_NexusGroups"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetTerminalId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_TerminalId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::TMP_Text* GetCreatorCodeField() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCreatorCodeTitle() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* GetNexusGroups_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>*> _field = GetClass().GetField(O("nexusGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetTermId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("termId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCreatorCodeField(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatorCodeTitle(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNexusGroups(::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>*> _field = GetClass().GetField(O("nexusGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTermId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("termId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatorCodeDelete() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatorCodeDelete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreatorCodeInput(::BNM::Structures::Mono::String* character) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatorCodeInput"), {"character"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(character);
        }
        void CreatorCodeInvalid(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatorCodeInvalid"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* get_NexusGroups() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>*> _m = GetClass().GetMethod(O("get_NexusGroups"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_TerminalId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_TerminalId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetCreatorCode(::BNM::Structures::Mono::String*& code, ::GlobalNamespace::NexusGroupId*& groups) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetCreatorCode"), {"code", "groups"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&code, &groups);
        }
        void HookupToCreatorCodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HookupToCreatorCodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreatorCodeChanged(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeChanged"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void OnCreatorCodeFailure(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeFailure"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void OnCreatorCodesInitialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodesInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreatorCodeValid(::BNM::Structures::Mono::String* id, ::BNM::Structures::Mono::String* s, ::GlobalNamespace::NexusGroupId* ngid) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeValid"), {"id", "s", "ngid"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, s, ngid);
        }
        void OnCreatorCodeValidating(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatorCodeValidating"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTerminalMessage(::BNM::Structures::Mono::String* termId, ::BNM::Structures::Mono::String* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTerminalMessage"), {"termId", "msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(termId, msg);
        }
        void UnhookFromCreatorCodes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnhookFromCreatorCodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
