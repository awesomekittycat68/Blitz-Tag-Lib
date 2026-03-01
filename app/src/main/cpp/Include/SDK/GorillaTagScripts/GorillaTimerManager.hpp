#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct GorillaTimerManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaTimerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::GorillaTimerManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts::GorillaTimerManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTagScripts::GorillaTimer*>* GetAllTimers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::GorillaTimer*>*> _field = GetClass().GetField(O("allTimers"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GorillaTagScripts::GorillaTimerManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts::GorillaTimerManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllTimers(::BNM::Structures::Mono::List<::GorillaTagScripts::GorillaTimer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::GorillaTimer*>*> _field = GetClass().GetField(O("allTimers"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts::GorillaTimerManager* value) {
            static BNM::Field<::GorillaTagScripts::GorillaTimerManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        static void RegisterGorillaTimer(::GorillaTagScripts::GorillaTimer* gTimer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterGorillaTimer"), {"gTimer"});
            _m.Call(gTimer);
        }
        static void SetInstance_1(::GorillaTagScripts::GorillaTimerManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void UnregisterGorillaTimer(::GorillaTagScripts::GorillaTimer* gTimer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterGorillaTimer"), {"gTimer"});
            _m.Call(gTimer);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
