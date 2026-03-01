#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/GorillaATMKeyBindings.hpp"
#include "../GorillaNetworking/GorillaKeyboardBindings.hpp"
#include "../GorillaTagScripts_Builder/SharedBlocksKeyboardBindings.hpp"

namespace GlobalNamespace {
    struct GameEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* GetFunctionSelectTextChangedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionSelectTextChangedEvent"));
            return _field.Get();
        }
        static void* GetFunctionTextMaterialsEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionTextMaterialsEvent"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetLanguageEvent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("LanguageEvent"));
            return _field.Get();
        }
        static void* GetOnGorrillaATMKeyButtonPressedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGorrillaATMKeyButtonPressedEvent"));
            return _field.Get();
        }
        static void* GetOnGorrillaKeyboardButtonPressedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGorrillaKeyboardButtonPressedEvent"));
            return _field.Get();
        }
        static void* GetOnSharedBlocksKeyboardButtonPressedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSharedBlocksKeyboardButtonPressedEvent"));
            return _field.Get();
        }
        static void* GetScoreboardMaterialsEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScoreboardMaterialsEvent"));
            return _field.Get();
        }
        static void* GetScoreboardTextChangedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScoreboardTextChangedEvent"));
            return _field.Get();
        }
        static void* GetScreenTextChangedEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScreenTextChangedEvent"));
            return _field.Get();
        }
        static void* GetScreenTextMaterialsEvent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScreenTextMaterialsEvent"));
            return _field.Get();
        }
        static void SetFunctionSelectTextChangedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionSelectTextChangedEvent"));
            _field.Set(value);
        }
        static void SetFunctionTextMaterialsEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("FunctionTextMaterialsEvent"));
            _field.Set(value);
        }
        static void SetLanguageEvent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("LanguageEvent"));
            _field.Set(value);
        }
        static void SetOnGorrillaATMKeyButtonPressedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGorrillaATMKeyButtonPressedEvent"));
            _field.Set(value);
        }
        static void SetOnGorrillaKeyboardButtonPressedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnGorrillaKeyboardButtonPressedEvent"));
            _field.Set(value);
        }
        static void SetOnSharedBlocksKeyboardButtonPressedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSharedBlocksKeyboardButtonPressedEvent"));
            _field.Set(value);
        }
        static void SetScoreboardMaterialsEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScoreboardMaterialsEvent"));
            _field.Set(value);
        }
        static void SetScoreboardTextChangedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScoreboardTextChangedEvent"));
            _field.Set(value);
        }
        static void SetScreenTextChangedEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScreenTextChangedEvent"));
            _field.Set(value);
        }
        static void SetScreenTextMaterialsEvent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ScreenTextMaterialsEvent"));
            _field.Set(value);
        }
    };
}
