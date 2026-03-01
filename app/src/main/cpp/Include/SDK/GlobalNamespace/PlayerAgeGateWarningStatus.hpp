#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EImageVisibility.hpp"
#include "WarningButtonResult.hpp"

namespace GlobalNamespace {
    struct PlayerAgeGateWarningStatus : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerAgeGateWarningStatus");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBody() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("body"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetHeader() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("header"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WarningButtonResult GetLeftButtonResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("leftButtonResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeftButtonText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WarningButtonResult GetNoWarningResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("noWarningResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnLeftButtonPressedAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onLeftButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnRightButtonPressedAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onRightButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::WarningButtonResult GetRightButtonResult() {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("rightButtonResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRightButtonText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EImageVisibility GetShowImage() {
            static BNM::Field<::GlobalNamespace::EImageVisibility> _field = GetClass().GetField(O("showImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBody(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("body"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeader(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("header"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftButtonResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("leftButtonResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftButtonText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("leftButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoWarningResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("noWarningResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLeftButtonPressedAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onLeftButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnRightButtonPressedAction(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onRightButtonPressedAction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightButtonResult(::GlobalNamespace::WarningButtonResult value) {
            static BNM::Field<::GlobalNamespace::WarningButtonResult> _field = GetClass().GetField(O("rightButtonResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightButtonText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("rightButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowImage(::GlobalNamespace::EImageVisibility value) {
            static BNM::Field<::GlobalNamespace::EImageVisibility> _field = GetClass().GetField(O("showImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
