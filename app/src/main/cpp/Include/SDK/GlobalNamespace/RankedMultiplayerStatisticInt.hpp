#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedMultiplayerStatistic.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerStatisticInt : ::GlobalNamespace::RankedMultiplayerStatistic {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerStatisticInt");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetIntValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIntValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("intValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddTo(int amount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddTo"), {"amount"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(amount);
        }
        int Get() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Get"));
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
        void Set(int val) {
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
