#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FortuneResults_FortuneCategory.hpp"
#include "FortuneResults_FortuneResult.hpp"

namespace GlobalNamespace {
    struct FortuneResults : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FortuneResults");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneResults_FortuneCategory>* GetFortuneResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneResults_FortuneCategory>*> _field = GetClass().GetField(O("fortuneResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTotalChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("totalChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFortuneResults(::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneResults_FortuneCategory>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FortuneResults_FortuneCategory>*> _field = GetClass().GetField(O("fortuneResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("totalChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::FortuneResults_FortuneResult GetResult() {
            static BNM::Method<::GlobalNamespace::FortuneResults_FortuneResult> _m = GetClass().GetMethod(O("GetResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetResultText(::GlobalNamespace::FortuneResults_FortuneResult result) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetResultText"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
