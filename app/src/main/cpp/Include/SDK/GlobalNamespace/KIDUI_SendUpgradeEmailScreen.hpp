#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct KIDUI_SendUpgradeEmailScreen : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_SendUpgradeEmailScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::KIDUI_AnimatedEllipsis* GetAnimatedEllipsis() {
            static BNM::Field<::GlobalNamespace::KIDUI_AnimatedEllipsis*> _field = GetClass().GetField(O("_animatedEllipsis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MessageScreen* GetErrorScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_MessageScreen*> _field = GetClass().GetField(O("_errorScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MainScreen* GetMainScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MessageScreen* GetSuccessScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_MessageScreen*> _field = GetClass().GetField(O("_successScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnimatedEllipsis(::GlobalNamespace::KIDUI_AnimatedEllipsis* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_AnimatedEllipsis*> _field = GetClass().GetField(O("_animatedEllipsis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorScreen(::GlobalNamespace::KIDUI_MessageScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MessageScreen*> _field = GetClass().GetField(O("_errorScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainScreen(::GlobalNamespace::KIDUI_MainScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessScreen(::GlobalNamespace::KIDUI_MessageScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MessageScreen*> _field = GetClass().GetField(O("_successScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnCancel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCancel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFailure(::BNM::Structures::Mono::String* errorMessage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFailure"), {"errorMessage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorMessage);
        }
        void OnSuccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* SendUpgradeEmail(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* requestedPermissions) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("SendUpgradeEmail"), {"requestedPermissions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(requestedPermissions);
        }
    };
}
