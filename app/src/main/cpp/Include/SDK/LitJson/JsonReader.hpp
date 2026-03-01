#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "JsonToken.hpp"
#include "ParserToken.hpp"

namespace LitJson {
    struct JsonReader : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "JsonReader");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowComments() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AllowComments"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllowComments(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AllowComments"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetAllowSingleQuotedStrings() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_AllowSingleQuotedStrings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAllowSingleQuotedStrings(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AllowSingleQuotedStrings"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetEndOfInput() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EndOfInput"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetEndOfJson() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EndOfJson"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::LitJson::JsonToken GetToken() {
            static BNM::Method<::LitJson::JsonToken> _method = GetClass().GetMethod(O("get_Token"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetAutomatonStack() {
            static BNM::Field<void*> _field = GetClass().GetField(O("automaton_stack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentInput() {
            static BNM::Field<int> _field = GetClass().GetField(O("current_input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSymbol() {
            static BNM::Field<int> _field = GetClass().GetField(O("current_symbol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEndOfInput_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("end_of_input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEndOfJson_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("end_of_json"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LitJson::Lexer* GetLexer() {
            static BNM::Field<::LitJson::Lexer*> _field = GetClass().GetField(O("lexer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetParseTable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("parse_table"));
            return _field.Get();
        }
        bool GetParserInString() {
            static BNM::Field<bool> _field = GetClass().GetField(O("parser_in_string"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetParserReturn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("parser_return"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReadStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("read_started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetReader() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReaderIsOwned() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reader_is_owned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LitJson::JsonToken GetToken_f() {
            static BNM::Field<::LitJson::JsonToken> _field = GetClass().GetField(O("token"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTokenValue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("token_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutomatonStack(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("automaton_stack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentInput(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("current_input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSymbol(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("current_symbol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndOfInput(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("end_of_input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndOfJson(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("end_of_json"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLexer(::LitJson::Lexer* value) {
            static BNM::Field<::LitJson::Lexer*> _field = GetClass().GetField(O("lexer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetParseTable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("parse_table"));
            _field.Set(value);
        }
        void SetParserInString(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("parser_in_string"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParserReturn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("parser_return"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReadStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("read_started"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReader(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReaderIsOwned(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reader_is_owned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToken(::LitJson::JsonToken value) {
            static BNM::Field<::LitJson::JsonToken> _field = GetClass().GetField(O("token"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTokenValue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("token_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Close() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Close"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_AllowComments() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AllowComments"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_AllowSingleQuotedStrings() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_AllowSingleQuotedStrings"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_EndOfInput() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EndOfInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_EndOfJson() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EndOfJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::LitJson::JsonToken get_Token() {
            static BNM::Method<::LitJson::JsonToken> _m = GetClass().GetMethod(O("get_Token"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Value() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Value"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void PopulateParseTable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateParseTable"));
            _m.Call();
        }
        void ProcessNumber(::BNM::Structures::Mono::String* number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessNumber"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void ProcessSymbol() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessSymbol"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool Read() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Read"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ReadToken() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_AllowComments(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AllowComments"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AllowSingleQuotedStrings(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AllowSingleQuotedStrings"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void TableAddCol(::LitJson::ParserToken row, int col, ::BNM::Structures::Mono::Array<int>* symbols) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TableAddCol"), {"row", "col", "symbols"});
            _m.Call(row, col, symbols);
        }
        static void TableAddRow(::LitJson::ParserToken rule) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TableAddRow"), {"rule"});
            _m.Call(rule);
        }
    };
}
