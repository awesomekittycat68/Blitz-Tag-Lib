#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MagicCauldron_IngrediantFXContext : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MagicCauldron").GetInnerClass("IngrediantFXContext");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MagicCauldron_IngrediantFXContext_Callback* GetFxCallBack() {
            static BNM::Field<::GlobalNamespace::MagicCauldron_IngrediantFXContext_Callback*> _field = GetClass().GetField(O("fxCallBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FXSystemSettings* GetPlayerSettings() {
            static BNM::Field<::GlobalNamespace::FXSystemSettings*> _field = GetClass().GetField(O("playerSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFxCallBack(::GlobalNamespace::MagicCauldron_IngrediantFXContext_Callback* value) {
            static BNM::Field<::GlobalNamespace::MagicCauldron_IngrediantFXContext_Callback*> _field = GetClass().GetField(O("fxCallBack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerSettings(::GlobalNamespace::FXSystemSettings* value) {
            static BNM::Field<::GlobalNamespace::FXSystemSettings*> _field = GetClass().GetField(O("playerSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
