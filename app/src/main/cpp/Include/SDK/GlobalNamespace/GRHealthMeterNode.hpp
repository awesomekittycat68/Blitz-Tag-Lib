#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRHealthMeterNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRHealthMeterNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsEmpty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetShowEmpty() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("showEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetShowFull() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("showFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsEmpty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowEmpty(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("showEmpty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowFull(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("showFull"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmpty(bool empty) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEmpty"), {"empty"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(empty);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
