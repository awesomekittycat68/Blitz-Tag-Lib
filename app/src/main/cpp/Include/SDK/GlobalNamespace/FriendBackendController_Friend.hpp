#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FriendBackendController_Friend : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendBackendController").GetInnerClass("Friend");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FriendBackendController_FriendPresence* GetPresence() {
            static BNM::Method<::GlobalNamespace::FriendBackendController_FriendPresence*> _method = GetClass().GetMethod(O("get_Presence"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPresence(::GlobalNamespace::FriendBackendController_FriendPresence* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Presence"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* get_Created() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Created"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::FriendBackendController_FriendPresence* get_Presence() {
            static BNM::Method<::GlobalNamespace::FriendBackendController_FriendPresence*> _m = GetClass().GetMethod(O("get_Presence"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_Created(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Created"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Presence(::GlobalNamespace::FriendBackendController_FriendPresence* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Presence"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
