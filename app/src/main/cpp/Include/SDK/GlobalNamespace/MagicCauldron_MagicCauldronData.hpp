#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MagicCauldron_CauldronState.hpp"

namespace GlobalNamespace {
    struct MagicCauldron_MagicCauldronData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicCauldron").GetInnerClass("MagicCauldronData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentRecipeIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentRecipeIndex"));
            return _method.Call();
        }
        void SetCurrentRecipeIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentRecipeIndex"));
            _method.Call(value);
        }
        ::GlobalNamespace::MagicCauldron_CauldronState GetCurrentState() {
            static BNM::Method<::GlobalNamespace::MagicCauldron_CauldronState> _method = GetClass().GetMethod(O("get_CurrentState"));
            return _method.Call();
        }
        void SetCurrentState(::GlobalNamespace::MagicCauldron_CauldronState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentState"));
            _method.Call(value);
        }
        float GetCurrentStateElapsedTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_CurrentStateElapsedTime"));
            return _method.Call();
        }
        void SetCurrentStateElapsedTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentStateElapsedTime"));
            _method.Call(value);
        }
        int GetIngredientIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_IngredientIndex"));
            return _method.Call();
        }
        void SetIngredientIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IngredientIndex"));
            _method.Call(value);
        }
        int get_CurrentRecipeIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentRecipeIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::MagicCauldron_CauldronState get_CurrentState() {
            static BNM::Method<::GlobalNamespace::MagicCauldron_CauldronState> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_CurrentStateElapsedTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_CurrentStateElapsedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_IngredientIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_IngredientIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_CurrentRecipeIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentRecipeIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentState(::GlobalNamespace::MagicCauldron_CauldronState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentStateElapsedTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentStateElapsedTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IngredientIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IngredientIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
