#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VotingCard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VotingCard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetCard() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_card"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsVisible() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOffPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_offPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOnPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_onPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivationTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCard(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_card"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsVisible(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_offPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_onPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("activationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* DoActivate() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DoActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void MoveToOffPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToOffPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void MoveToOnPosition() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveToOnPosition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetVisible(bool showVote, bool instant) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVisible"), {"showVote", "instant"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showVote, instant);
        }
    };
}
