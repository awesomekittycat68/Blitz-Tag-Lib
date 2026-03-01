#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CreatorCodes_CreatorCodeStatus.hpp"
#include "Member.hpp"

namespace GlobalNamespace {
    struct CreatorCodes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CreatorCodes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_CODE_LENGTH = 10;
        static constexpr const char* PLAYER_PREF_KEY = "CreatorCodes_Store";
        static constexpr int DAYS_TO_STORE_CODE = 14;
        void add_InitializedEvent(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_InitializedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_InitializedEvent(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_InitializedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnCreatorCodeChangedEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCreatorCodeChangedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCreatorCodeChangedEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCreatorCodeChangedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnCreatorCodeFailureEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCreatorCodeFailureEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCreatorCodeFailureEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCreatorCodeFailureEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnCreatorCodeValidEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCreatorCodeValidEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnCreatorCodeValidEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCreatorCodeValidEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::CreatorCodes_CreatorCodeStatus>* GetCreatorCodeStatus() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*> _field = GetClass().GetField(O("creatorCodeStatus"));
            return _field.Get();
        }
        static ::GlobalNamespace::CreatorCodes_CreatorCodesData* GetData() {
            static BNM::Field<::GlobalNamespace::CreatorCodes_CreatorCodesData*> _field = GetClass().GetField(O("data"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetInitializedEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("InitializedEvent"));
            return _field.Get();
        }
        static bool GetIntialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Intialized"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnCreatorCodeChangedEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnCreatorCodeChangedEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnCreatorCodeFailureEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnCreatorCodeFailureEvent"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>* GetOnCreatorCodeValidEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>*> _field = GetClass().GetField(O("OnCreatorCodeValidEvent"));
            return _field.Get();
        }
        static ::GlobalNamespace::Member GetSupportedMember() {
            static BNM::Field<::GlobalNamespace::Member> _field = GetClass().GetField(O("supportedMember"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusManager_MemberCode*>* GetValidatedCreatorCode() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusManager_MemberCode*>*> _field = GetClass().GetField(O("ValidatedCreatorCode"));
            return _field.Get();
        }
        static void SetCreatorCodeStatus(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::CreatorCodes_CreatorCodeStatus>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::CreatorCodes_CreatorCodeStatus>*> _field = GetClass().GetField(O("creatorCodeStatus"));
            _field.Set(value);
        }
        static void SetData(::GlobalNamespace::CreatorCodes_CreatorCodesData* value) {
            static BNM::Field<::GlobalNamespace::CreatorCodes_CreatorCodesData*> _field = GetClass().GetField(O("data"));
            _field.Set(value);
        }
        static void SetInitializedEvent(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("InitializedEvent"));
            _field.Set(value);
        }
        static void SetIntialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Intialized"));
            _field.Set(value);
        }
        static void SetOnCreatorCodeChangedEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnCreatorCodeChangedEvent"));
            _field.Set(value);
        }
        static void SetOnCreatorCodeFailureEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnCreatorCodeFailureEvent"));
            _field.Set(value);
        }
        static void SetOnCreatorCodeValidEvent(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>*> _field = GetClass().GetField(O("OnCreatorCodeValidEvent"));
            _field.Set(value);
        }
        static void SetSupportedMember(::GlobalNamespace::Member value) {
            static BNM::Field<::GlobalNamespace::Member> _field = GetClass().GetField(O("supportedMember"));
            _field.Set(value);
        }
        static void SetValidatedCreatorCode(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusManager_MemberCode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusManager_MemberCode*>*> _field = GetClass().GetField(O("ValidatedCreatorCode"));
            _field.Set(value);
        }
        static void add_InitializedEvent_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_InitializedEvent"), {"value"});
            _m.Call(value);
        }
        static void add_OnCreatorCodeChangedEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCreatorCodeChangedEvent"), {"value"});
            _m.Call(value);
        }
        static void add_OnCreatorCodeFailureEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCreatorCodeFailureEvent"), {"value"});
            _m.Call(value);
        }
        static void add_OnCreatorCodeValidEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnCreatorCodeValidEvent"), {"value"});
            _m.Call(value);
        }
        static void AppendKey(::BNM::Structures::Mono::String* id, ::BNM::Structures::Mono::String* input) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AppendKey"), {"id", "input"});
            _m.Call(id, input);
        }
        static void* CheckValidationCoroutineJIT(::BNM::Structures::Mono::String* terminalId, ::BNM::Structures::Mono::String* code, ::BNM::Structures::Mono::Array<::GlobalNamespace::NexusGroupId*>* group) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CheckValidationCoroutineJIT"), {"terminalId", "code", "group"});
            return _m.Call(terminalId, code, group);
        }
        static void DeleteCharacter(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeleteCharacter"), {"id"});
            _m.Call(id);
        }
        static ::BNM::Structures::Mono::String* getCurrentCreatorCode(::BNM::Structures::Mono::String* id) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("getCurrentCreatorCode"), {"id"});
            return _m.Call(id);
        }
        static ::GlobalNamespace::CreatorCodes_CreatorCodeStatus getCurrentCreatorCodeStatus(::BNM::Structures::Mono::String* id) {
            static BNM::Method<::GlobalNamespace::CreatorCodes_CreatorCodeStatus> _m = GetClass().GetMethod(O("getCurrentCreatorCodeStatus"), {"id"});
            return _m.Call(id);
        }
        static void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.Call();
        }
        static void LoadData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadData"));
            _m.Call();
        }
        static void remove_InitializedEvent_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_InitializedEvent"), {"value"});
            _m.Call(value);
        }
        static void remove_OnCreatorCodeChangedEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCreatorCodeChangedEvent"), {"value"});
            _m.Call(value);
        }
        static void remove_OnCreatorCodeFailureEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCreatorCodeFailureEvent"), {"value"});
            _m.Call(value);
        }
        static void remove_OnCreatorCodeValidEvent_1(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*, ::GlobalNamespace::NexusGroupId*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnCreatorCodeValidEvent"), {"value"});
            _m.Call(value);
        }
        static void ResetCreatorCode(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetCreatorCode"), {"id"});
            _m.Call(id);
        }
        static void SaveData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveData"));
            _m.Call();
        }
    };
}
