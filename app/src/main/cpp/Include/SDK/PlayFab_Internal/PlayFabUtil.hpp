#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    struct PlayFabUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int DEFAULT_UTC_OUTPUT_INDEX = 2;
        static constexpr int DEFAULT_LOCAL_OUTPUT_INDEX = 9;
        ::BNM::Structures::Mono::String* GetTimeStamp() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_timeStamp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetUtcTimeStamp() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_utcTimeStamp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetDefaultDateTimeFormats() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_defaultDateTimeFormats"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetLocalSettingsFileName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_localSettingsFileName"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSb() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_sb"));
            return _field.Get();
        }
        static void* GetDateTimeStyles() {
            static BNM::Field<void*> _field = GetClass().GetField(O("DateTimeStyles"));
            return _field.Get();
        }
        static void SetLocalSettingsFileName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_localSettingsFileName"));
            _field.Set(value);
        }
        static void SetSb(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_sb"));
            _field.Set(value);
        }
        static void SetDateTimeStyles(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("DateTimeStyles"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::String* text, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"text", "args"});
            return _m.Call(text, args);
        }
        static ::BNM::Structures::Mono::String* get_timeStamp() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_timeStamp"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_utcTimeStamp() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_utcTimeStamp"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetLocalSettingsFileProperty(::BNM::Structures::Mono::String* propertyKey) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLocalSettingsFileProperty"), {"propertyKey"});
            return _m.Call(propertyKey);
        }
        static ::BNM::Structures::Mono::String* ReadAllFileText(::BNM::Structures::Mono::String* filename) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ReadAllFileText"), {"filename"});
            return _m.Call(filename);
        }
        template <typename T>
        static T TryEnumParse(::BNM::Structures::Mono::String* value, T defaultValue) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("TryEnumParse"), {"value", "defaultValue"});
            return _m.Call(value, defaultValue);
        }
    };
}
