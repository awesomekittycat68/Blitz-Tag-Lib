#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Pun/MonoBehaviourPun.hpp"

namespace Photon_Pun_UtilityScripts {
    struct OnClickDestroy : ::Photon_Pun::MonoBehaviourPun {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "OnClickDestroy");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetButton() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDestroyByRpc() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DestroyByRpc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetModifierKey() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ModifierKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButton(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Button"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDestroyByRpc(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DestroyByRpc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModifierKey(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ModifierKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* DestroyRpc() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DestroyRpc"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
