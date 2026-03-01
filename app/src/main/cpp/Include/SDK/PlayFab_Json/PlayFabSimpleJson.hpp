#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayFabSimpleJson_TokenType.hpp"

namespace PlayFab_Json {
    struct PlayFabSimpleJson : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "PlayFabSimpleJson");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int BUILDER_INIT = 2000;
        ::PlayFab_Json::PocoJsonSerializerStrategy* GetPocoJsonSerializerStrategy() {
            static BNM::Method<::PlayFab_Json::PocoJsonSerializerStrategy*> _method = GetClass().GetMethod(O("get_PocoJsonSerializerStrategy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static void* GetCurrentJsonSerializerStrategy() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_currentJsonSerializerStrategy"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetParseStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_parseStringBuilder"));
            return _field.Get();
        }
        static ::PlayFab_Json::PocoJsonSerializerStrategy* GetPocoJsonSerializerStrategy_f() {
            static BNM::Field<::PlayFab_Json::PocoJsonSerializerStrategy*> _field = GetClass().GetField(O("_pocoJsonSerializerStrategy"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSerializeObjectBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_serializeObjectBuilder"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<char>* GetEscapeCharacters() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("EscapeCharacters"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<char>* GetEscapeTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("EscapeTable"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::MonoType*>* GetNumberTypes() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::MonoType*>*> _field = GetClass().GetField(O("NumberTypes"));
            return _field.Get();
        }
        static void SetCurrentJsonSerializerStrategy(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_currentJsonSerializerStrategy"));
            _field.Set(value);
        }
        static void SetParseStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_parseStringBuilder"));
            _field.Set(value);
        }
        static void SetPocoJsonSerializerStrategy(::PlayFab_Json::PocoJsonSerializerStrategy* value) {
            static BNM::Field<::PlayFab_Json::PocoJsonSerializerStrategy*> _field = GetClass().GetField(O("_pocoJsonSerializerStrategy"));
            _field.Set(value);
        }
        static void SetSerializeObjectBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_serializeObjectBuilder"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* ConvertFromUtf32(int utf32) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ConvertFromUtf32"), {"utf32"});
            return _m.Call(utf32);
        }
        static void* DeserializeObject(::BNM::Structures::Mono::String* json) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeObject"), {"json"});
            return _m.Call(json);
        }
        template <typename T, typename TP1 = void*>
        static T DeserializeObject(::BNM::Structures::Mono::String* json, TP1 jsonSerializerStrategy) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("DeserializeObject"), {"json", "jsonSerializerStrategy"});
            return _m.Call(json, jsonSerializerStrategy);
        }
        template <typename TP2 = void*>
        static void* DeserializeObject(::BNM::Structures::Mono::String* json, ::BNM::MonoType* type, TP2 jsonSerializerStrategy) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeObject"), {"json", "type", "jsonSerializerStrategy"});
            return _m.Call(json, type, jsonSerializerStrategy);
        }
        static void EatWhitespace(::BNM::Structures::Mono::String* json, int& index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EatWhitespace"), {"json", "index"});
            _m.Call(json, &index);
        }
        static ::BNM::Structures::Mono::String* EscapeToJavascriptString(::BNM::Structures::Mono::String* jsonString) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("EscapeToJavascriptString"), {"jsonString"});
            return _m.Call(jsonString);
        }
        static void* get_CurrentJsonSerializerStrategy() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_CurrentJsonSerializerStrategy"));
            return _m.Call();
        }
        static ::PlayFab_Json::PocoJsonSerializerStrategy* get_PocoJsonSerializerStrategy() {
            static BNM::Method<::PlayFab_Json::PocoJsonSerializerStrategy*> _m = GetClass().GetMethod(O("get_PocoJsonSerializerStrategy"));
            return _m.Call();
        }
        static int GetLastIndexOfNumber(::BNM::Structures::Mono::String* json, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetLastIndexOfNumber"), {"json", "index"});
            return _m.Call(json, index);
        }
        template <typename TP0 = void*>
        static bool IsNumeric(TP0 value) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsNumeric"), {"value"});
            return _m.Call(value);
        }
        static ::PlayFab_Json::PlayFabSimpleJson_TokenType LookAhead(::BNM::Structures::Mono::String* json, int index) {
            static BNM::Method<::PlayFab_Json::PlayFabSimpleJson_TokenType> _m = GetClass().GetMethod(O("LookAhead"), {"json", "index"});
            return _m.Call(json, index);
        }
        static ::PlayFab_Json::PlayFabSimpleJson_TokenType NextToken(::BNM::Structures::Mono::String* json, int& index) {
            static BNM::Method<::PlayFab_Json::PlayFabSimpleJson_TokenType> _m = GetClass().GetMethod(O("NextToken"), {"json", "index"});
            return _m.Call(json, &index);
        }
        static ::PlayFab_Json::JsonArray* ParseArray(::BNM::Structures::Mono::String* json, int& index, bool& success) {
            static BNM::Method<::PlayFab_Json::JsonArray*> _m = GetClass().GetMethod(O("ParseArray"), {"json", "index", "success"});
            return _m.Call(json, &index, &success);
        }
        static void* ParseNumber(::BNM::Structures::Mono::String* json, int& index, bool& success) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ParseNumber"), {"json", "index", "success"});
            return _m.Call(json, &index, &success);
        }
        static void* ParseObject(::BNM::Structures::Mono::String* json, int& index, bool& success) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ParseObject"), {"json", "index", "success"});
            return _m.Call(json, &index, &success);
        }
        static ::BNM::Structures::Mono::String* ParseString(::BNM::Structures::Mono::String* json, int& index, bool& success) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ParseString"), {"json", "index", "success"});
            return _m.Call(json, &index, &success);
        }
        static void* ParseValue(::BNM::Structures::Mono::String* json, int& index, bool& success) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ParseValue"), {"json", "index", "success"});
            return _m.Call(json, &index, &success);
        }
        template <typename TP0 = void*>
        static bool SerializeArray(TP0 jsonSerializerStrategy, ::BNM::IL2CPP::Il2CppObject* anArray, ::BNM::IL2CPP::Il2CppObject* builder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeArray"), {"jsonSerializerStrategy", "anArray", "builder"});
            return _m.Call(jsonSerializerStrategy, anArray, builder);
        }
        template <typename TP0 = void*>
        static bool SerializeNumber(TP0 number, ::BNM::IL2CPP::Il2CppObject* builder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeNumber"), {"number", "builder"});
            return _m.Call(number, builder);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static ::BNM::Structures::Mono::String* SerializeObject(TP0 json, TP1 jsonSerializerStrategy) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SerializeObject"), {"json", "jsonSerializerStrategy"});
            return _m.Call(json, jsonSerializerStrategy);
        }
        template <typename TP0 = void*>
        static bool SerializeObject(TP0 jsonSerializerStrategy, ::BNM::IL2CPP::Il2CppObject* keys, ::BNM::IL2CPP::Il2CppObject* values, ::BNM::IL2CPP::Il2CppObject* builder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeObject"), {"jsonSerializerStrategy", "keys", "values", "builder"});
            return _m.Call(jsonSerializerStrategy, keys, values, builder);
        }
        static bool SerializeString(::BNM::Structures::Mono::String* aString, ::BNM::IL2CPP::Il2CppObject* builder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeString"), {"aString", "builder"});
            return _m.Call(aString, builder);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        static bool SerializeValue(TP0 jsonSerializerStrategy, TP1 value, ::BNM::IL2CPP::Il2CppObject* builder) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeValue"), {"jsonSerializerStrategy", "value", "builder"});
            return _m.Call(jsonSerializerStrategy, value, builder);
        }
        template <typename TP0 = void*>
        static void set_CurrentJsonSerializerStrategy(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentJsonSerializerStrategy"), {"value"});
            _m.Call(value);
        }
        static bool TryDeserializeObject(::BNM::Structures::Mono::String* json, void*& obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryDeserializeObject"), {"json", "obj"});
            return _m.Call(json, &obj);
        }
    };
}
