#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"
#include "../Photon_Pun/RpcTarget.hpp"

namespace Photon_Pun_UtilityScripts {
    struct OnClickRpc : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "OnClickRpc");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetButton() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsFlashing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFlashing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetModifierKey() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ModifierKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetOriginalColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("originalColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetOriginalMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("originalMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::RpcTarget GetTarget() {
            static BNM::Field<::Photon_Pun::RpcTarget> _field = GetClass().GetField(O("Target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButton(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsFlashing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isFlashing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModifierKey(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ModifierKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("originalColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("originalMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Photon_Pun::RpcTarget value) {
            static BNM::Field<::Photon_Pun::RpcTarget> _field = GetClass().GetField(O("Target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* ClickFlash() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ClickFlash"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ClickRpc() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClickRpc"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
