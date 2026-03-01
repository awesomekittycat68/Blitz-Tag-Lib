#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Condition.hpp"

namespace LitJson {
    struct JsonWriter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "JsonWriter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetIndentValue() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_IndentValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIndentValue(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IndentValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPrettyPrint() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PrettyPrint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrettyPrint(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PrettyPrint"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::IL2CPP::Il2CppObject* GetTextWriter() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_TextWriter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetValidate() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Validate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetValidate(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Validate"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::LitJson::WriterContext* GetContext() {
            static BNM::Field<::LitJson::WriterContext*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCtxStack() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ctx_stack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasReachedEnd() {
            static BNM::Field<bool> _field = GetClass().GetField(O("has_reached_end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<char>* GetHexSeq() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("hex_seq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndentValue_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("indent_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndentation() {
            static BNM::Field<int> _field = GetClass().GetField(O("indentation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetInstStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("inst_string_builder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetNumberFormat() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("number_format"));
            return _field.Get();
        }
        bool GetPrettyPrint_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pretty_print"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidate_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("validate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWriter() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("writer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetContext(::LitJson::WriterContext* value) {
            static BNM::Field<::LitJson::WriterContext*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCtxStack(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ctx_stack"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasReachedEnd(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("has_reached_end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHexSeq(::BNM::Structures::Mono::Array<char>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("hex_seq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndentValue_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("indent_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndentation(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("indentation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("inst_string_builder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNumberFormat(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("number_format"));
            _field.Set(value);
        }
        void SetPrettyPrint_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pretty_print"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidate_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("validate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWriter(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("writer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DoValidation(::LitJson::Condition cond) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoValidation"), {"cond"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cond);
        }
        int get_IndentValue() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_IndentValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_PrettyPrint() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PrettyPrint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_TextWriter() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_TextWriter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_Validate() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Validate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Indent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Indent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void IntToHex(int n, ::BNM::Structures::Mono::Array<char>* hex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("IntToHex"), {"n", "hex"});
            _m.Call(n, hex);
        }
        void Put(::BNM::Structures::Mono::String* str) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Put"), {"str"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(str);
        }
        void PutNewline() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PutNewline"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PutNewline(bool add_comma) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PutNewline"), {"add_comma"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(add_comma);
        }
        void PutString(::BNM::Structures::Mono::String* str) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PutString"), {"str"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(str);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_IndentValue(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IndentValue"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PrettyPrint(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PrettyPrint"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Validate(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Validate"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Unindent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unindent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Write(bool boolean) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"boolean"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(boolean);
        }
        template <typename TP0 = void*>
        void Write(TP0 number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void Write(double number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void Write(int number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void Write(int64_t number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void Write(::BNM::Structures::Mono::String* str) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"str"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(str);
        }
        void Write(uint64_t number) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"number"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(number);
        }
        void WriteArrayEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteArrayEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteArrayStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteArrayStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteObjectEnd() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteObjectEnd"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteObjectStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteObjectStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WritePropertyName(::BNM::Structures::Mono::String* property_name) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePropertyName"), {"property_name"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(property_name);
        }
    };
}
