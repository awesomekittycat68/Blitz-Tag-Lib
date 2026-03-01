#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct WhackAMoleManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "WhackAMoleManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::WhackAMoleManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts::WhackAMoleManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        void* GetAllGames() {
            static BNM::Field<void*> _field = GetClass().GetField(O("allGames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts::WhackAMoleManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts::WhackAMoleManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void SetAllGames(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("allGames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts::WhackAMoleManager* value) {
            static BNM::Field<::GorillaTagScripts::WhackAMoleManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
        void Register(::GorillaTagScripts::WhackAMole* whackAMole) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"whackAMole"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(whackAMole);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Unregister(::GorillaTagScripts::WhackAMole* whackAMole) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"whackAMole"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(whackAMole);
        }
    };
}
