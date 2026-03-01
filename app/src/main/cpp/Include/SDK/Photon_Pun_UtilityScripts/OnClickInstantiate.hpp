#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OnClickInstantiate_InstantiateOption.hpp"

namespace Photon_Pun_UtilityScripts {
    struct OnClickInstantiate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "OnClickInstantiate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetButton() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun_UtilityScripts::OnClickInstantiate_InstantiateOption GetInstantiateType() {
            static BNM::Field<::Photon_Pun_UtilityScripts::OnClickInstantiate_InstantiateOption> _field = GetClass().GetField(O("InstantiateType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetModifierKey() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ModifierKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPrefab() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Prefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButton(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstantiateType(::Photon_Pun_UtilityScripts::OnClickInstantiate_InstantiateOption value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::OnClickInstantiate_InstantiateOption> _field = GetClass().GetField(O("InstantiateType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModifierKey(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ModifierKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrefab(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Prefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
