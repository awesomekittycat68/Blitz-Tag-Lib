#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RankedMultiplayerStatistic_SerializationType.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerStatistic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerStatistic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsValid() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsValid(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsValid"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RankedMultiplayerStatistic_SerializationType GetSerializationType() {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatistic_SerializationType> _field = GetClass().GetField(O("serializationType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializationType(::GlobalNamespace::RankedMultiplayerStatistic_SerializationType value) {
            static BNM::Field<::GlobalNamespace::RankedMultiplayerStatistic_SerializationType> _field = GetClass().GetField(O("serializationType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HandleUserDataGetFailure(::BNM::Structures::Mono::String* keyName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleUserDataGetFailure"), {"keyName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keyName);
        }
        void HandleUserDataGetSuccess(::BNM::Structures::Mono::String* keyName, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleUserDataGetSuccess"), {"keyName", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keyName, value);
        }
        void HandleUserDataSetFailure(::BNM::Structures::Mono::String* keyName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleUserDataSetFailure"), {"keyName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keyName);
        }
        void HandleUserDataSetSuccess(::BNM::Structures::Mono::String* keyName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleUserDataSetSuccess"), {"keyName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keyName);
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
        void set_IsValid(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsValid"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
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
        ::BNM::Structures::Mono::String* WriteToJson() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("WriteToJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
