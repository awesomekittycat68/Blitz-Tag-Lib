#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTDateTimeSerializable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTDateTimeSerializable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetDateTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_dateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDateTimeString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_dateTimeString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDateTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_dateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDateTimeString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_dateTimeString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* FormatDateTime(TP0 dateTime) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormatDateTime"), {"dateTime"});
            return _m.Call(dateTime);
        }
        void* get_dateTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_dateTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_dateTime(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_dateTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static bool TryParseDateTime(::BNM::Structures::Mono::String* value, void*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryParseDateTime"), {"value", "result"});
            return _m.Call(value, &result);
        }
    };
}
