#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayerPrefFlags_Flag.hpp"

namespace GlobalNamespace {
    struct PlayerPrefFlags : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerPrefFlags");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int defaultValue = 5;
        static ::BNM::Structures::Mono::Action<::GlobalNamespace::PlayerPrefFlags_Flag, bool>* GetOnFlagChange() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::PlayerPrefFlags_Flag, bool>*> _field = GetClass().GetField(O("OnFlagChange"));
            return _field.Get();
        }
        static void SetOnFlagChange(::BNM::Structures::Mono::Action<::GlobalNamespace::PlayerPrefFlags_Flag, bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::PlayerPrefFlags_Flag, bool>*> _field = GetClass().GetField(O("OnFlagChange"));
            _field.Set(value);
        }
        static bool Check(::GlobalNamespace::PlayerPrefFlags_Flag flag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Check"), {"flag"});
            return _m.Call(flag);
        }
        static bool Flip(::GlobalNamespace::PlayerPrefFlags_Flag flag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Flip"), {"flag"});
            return _m.Call(flag);
        }
        static void Set(::GlobalNamespace::PlayerPrefFlags_Flag flag, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"flag", "value"});
            _m.Call(flag, value);
        }
        static void Touch(::GlobalNamespace::PlayerPrefFlags_Flag flag) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Touch"), {"flag"});
            _m.Call(flag);
        }
        static void TouchIf(::GlobalNamespace::PlayerPrefFlags_Flag flag, bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TouchIf"), {"flag", "value"});
            _m.Call(flag, value);
        }
    };
}
