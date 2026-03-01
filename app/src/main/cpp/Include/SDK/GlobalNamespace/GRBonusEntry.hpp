#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRAttributeType.hpp"
#include "GRBonusEntry_GRBonusType.hpp"

namespace GlobalNamespace {
    struct GRBonusEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRBonusEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GRAttributeType GetAttributeType() {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("attributeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBonusEntry_GRBonusType GetBonusType() {
            static BNM::Field<::GlobalNamespace::GRBonusEntry_GRBonusType> _field = GetClass().GetField(O("bonusType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBonusValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("bonusValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Func<int, ::GlobalNamespace::GRBonusEntry*, int>* GetCustomBonus() {
            static BNM::Field<::BNM::Structures::Mono::Func<int, ::GlobalNamespace::GRBonusEntry*, int>*> _field = GetClass().GetField(O("customBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetIdCounter() {
            static BNM::Field<int> _field = GetClass().GetField(O("idCounter"));
            return _field.Get();
        }
        void SetAttributeType(::GlobalNamespace::GRAttributeType value) {
            static BNM::Field<::GlobalNamespace::GRAttributeType> _field = GetClass().GetField(O("attributeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonusType(::GlobalNamespace::GRBonusEntry_GRBonusType value) {
            static BNM::Field<::GlobalNamespace::GRBonusEntry_GRBonusType> _field = GetClass().GetField(O("bonusType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBonusValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("bonusValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomBonus(::BNM::Structures::Mono::Func<int, ::GlobalNamespace::GRBonusEntry*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<int, ::GlobalNamespace::GRBonusEntry*, int>*> _field = GetClass().GetField(O("customBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetIdCounter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("idCounter"));
            _field.Set(value);
        }
        int get_id() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetBonusValue_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetBonusValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_id(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
