#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct IDCardScanner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "IDCardScanner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerCardSwipe"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerCardSwipe"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnCardSwiped() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCardSwiped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCardSwipedByPlayer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCardSwipedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnFailed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::IDCardScanner_CardSwipeEvent* GetOnPlayerCardSwipe() {
            static BNM::Field<::GlobalNamespace::IDCardScanner_CardSwipeEvent*> _field = GetClass().GetField(O("OnPlayerCardSwipe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnSucceeded() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onSucceeded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequireAuthority() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireAuthority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRequireSpecificPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireSpecificPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetRestrictToPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("restrictToPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnCardSwiped(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onCardSwiped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCardSwipedByPlayer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCardSwipedByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFailed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPlayerCardSwipe(::GlobalNamespace::IDCardScanner_CardSwipeEvent* value) {
            static BNM::Field<::GlobalNamespace::IDCardScanner_CardSwipeEvent*> _field = GetClass().GetField(O("OnPlayerCardSwipe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSucceeded(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onSucceeded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequireAuthority(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireAuthority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequireSpecificPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("requireSpecificPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictToPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("restrictToPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnPlayerCardSwipe_1(::GlobalNamespace::IDCardScanner_CardSwipeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnPlayerCardSwipe"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void remove_OnPlayerCardSwipe_1(::GlobalNamespace::IDCardScanner_CardSwipeEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnPlayerCardSwipe"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
