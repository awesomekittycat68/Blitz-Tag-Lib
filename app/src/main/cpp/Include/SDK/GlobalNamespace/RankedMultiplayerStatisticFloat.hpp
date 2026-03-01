#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedMultiplayerStatistic.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerStatisticFloat : ::GlobalNamespace::RankedMultiplayerStatistic {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerStatisticFloat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetFloatValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("floatValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFloatValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("floatValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddTo(float amount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTo"), {"amount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount);
        }
        float Get() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Get"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Increment() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Increment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Load() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Load"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Save() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Save"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Set(float val) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Set"), {"val"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(val);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool TrySetValue(::BNM::Structures::Mono::String* valAsString) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySetValue"), {"valAsString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(valAsString);
        }
    };
}
