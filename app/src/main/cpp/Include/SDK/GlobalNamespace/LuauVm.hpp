#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"
#include "../Photon_Pun/MonoBehaviourPunCallbacks.hpp"

namespace GlobalNamespace {
    struct LuauVm : ::Photon_Pun::MonoBehaviourPunCallbacks {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LuauVm");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static float GetCallCount() {
            static BNM::Field<float> _field = GetClass().GetField(O("callCount"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, float>* GetCallTimers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("callTimers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<void*>* GetClassBuilders() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("ClassBuilders"));
            return _field.Get();
        }
        static void* GetEventQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("eventQueue"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<void*>* GetHandles() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("Handles"));
            return _field.Get();
        }
        static void* GetLocalEventQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("localEventQueue"));
            return _field.Get();
        }
        static void* GetTouchEventsQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("touchEventsQueue"));
            return _field.Get();
        }
        static void SetCallCount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("callCount"));
            _field.Set(value);
        }
        static void SetCallTimers(::BNM::Structures::Mono::Dictionary<int, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, float>*> _field = GetClass().GetField(O("callTimers"));
            _field.Set(value);
        }
        static void SetClassBuilders(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("ClassBuilders"));
            _field.Set(value);
        }
        static void SetEventQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("eventQueue"));
            _field.Set(value);
        }
        static void SetHandles(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("Handles"));
            _field.Set(value);
        }
        static void SetLocalEventQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("localEventQueue"));
            _field.Set(value);
        }
        static void SetTouchEventsQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("touchEventsQueue"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEvent(::ExitGames_Client_Photon::EventData* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEvent"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        static void ProcessEvents() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessEvents"));
            _m.Call();
        }
        static int SendEvent(::GlobalNamespace::lua_State* L, ::BNM::Structures::Mono::Array<void*>* args, bool useTable) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SendEvent"), {"L", "args", "useTable"});
            return _m.Call(L, args, useTable);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
