#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Public {
    struct ScreenTimeTracker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Public", "ScreenTimeTracker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* eventNamespace = "com.playfab.events.sessions";
        static constexpr int maxBatchSizeInEvents = 10;
        ::PlayFab_EventsModels::EntityKey* GetEntityKey() {
            static BNM::Field<::PlayFab_EventsModels::EntityKey*> _field = GetClass().GetField(O("entityKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab::PlayFabEventsInstanceAPI* GetEventApi() {
            static BNM::Field<::PlayFab::PlayFabEventsInstanceAPI*> _field = GetClass().GetField(O("eventApi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEventsRequests() {
            static BNM::Field<void*> _field = GetClass().GetField(O("eventsRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFocusId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("focusId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFocusOffDateTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("focusOffDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFocusOnDateTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("focusOnDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGameSessionID() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gameSessionID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialFocus() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialFocus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSending() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntityKey(::PlayFab_EventsModels::EntityKey* value) {
            static BNM::Field<::PlayFab_EventsModels::EntityKey*> _field = GetClass().GetField(O("entityKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventApi(::PlayFab::PlayFabEventsInstanceAPI* value) {
            static BNM::Field<::PlayFab::PlayFabEventsInstanceAPI*> _field = GetClass().GetField(O("eventApi"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventsRequests(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("eventsRequests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFocusId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("focusId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFocusOffDateTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("focusOffDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFocusOnDateTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("focusOnDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameSessionID(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gameSessionID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialFocus(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialFocus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSending(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClientSessionStart(::BNM::Structures::Mono::String* entityId, ::BNM::Structures::Mono::String* entityType, ::BNM::Structures::Mono::String* playFabUserId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClientSessionStart"), {"entityId", "entityType", "playFabUserId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entityId, entityType, playFabUserId);
        }
        void EventSentErrorCallback(::PlayFab::PlayFabError* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EventSentErrorCallback"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void EventSentSuccessfulCallback(::PlayFab_EventsModels::WriteEventsResponse* response) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EventSentSuccessfulCallback"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(response);
        }
        void OnApplicationFocus(bool isFocused) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationFocus"), {"isFocused"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isFocused);
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Send() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Send"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
