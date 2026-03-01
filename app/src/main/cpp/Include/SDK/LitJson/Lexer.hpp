#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    struct Lexer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "Lexer");
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
        ::BNM::Structures::Mono::String* GetStringValue() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_StringValue"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetToken() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Token"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAllowComments_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allow_comments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowSingleQuotedStrings_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("allow_single_quoted_strings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEndOfInput_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("end_of_input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LitJson::FsmContext* GetFsmContext() {
            static BNM::Field<::LitJson::FsmContext*> _field = GetClass().GetField(O("fsm_context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::LitJson::Lexer_StateHandler*>* GetFsmHandlerTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<::LitJson::Lexer_StateHandler*>*> _field = GetClass().GetField(O("fsm_handler_table"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetFsmReturnTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("fsm_return_table"));
            return _field.Get();
        }
        int GetInputBuffer() {
            static BNM::Field<int> _field = GetClass().GetField(O("input_buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInputChar() {
            static BNM::Field<int> _field = GetClass().GetField(O("input_char"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetReader() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetState() {
            static BNM::Field<int> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStringBuffer() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("string_buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStringValue_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("string_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetToken_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("token"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUnichar() {
            static BNM::Field<int> _field = GetClass().GetField(O("unichar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowComments_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allow_comments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowSingleQuotedStrings_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("allow_single_quoted_strings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndOfInput(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("end_of_input"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFsmContext(::LitJson::FsmContext* value) {
            static BNM::Field<::LitJson::FsmContext*> _field = GetClass().GetField(O("fsm_context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetFsmHandlerTable(::BNM::Structures::Mono::Array<::LitJson::Lexer_StateHandler*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::LitJson::Lexer_StateHandler*>*> _field = GetClass().GetField(O("fsm_handler_table"));
            _field.Set(value);
        }
        static void SetFsmReturnTable(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("fsm_return_table"));
            _field.Set(value);
        }
        void SetInputBuffer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("input_buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputChar(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("input_char"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReader(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("reader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringBuffer(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("string_buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringValue(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("string_value"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToken(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("token"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnichar(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("unichar"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        ::BNM::Structures::Mono::String* get_StringValue() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_StringValue"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Token() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Token"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool GetChar() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetChar"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int HexValue(int digit) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("HexValue"), {"digit"});
            return _m.Call(digit);
        }
        int NextChar() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextChar"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool NextToken() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NextToken"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void PopulateFsmTables() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateFsmTables"));
            _m.Call();
        }
        static char ProcessEscChar(int esc_char) {
            static BNM::Method<char> _m = GetClass().GetMethod(O("ProcessEscChar"), {"esc_char"});
            return _m.Call(esc_char);
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
        static bool State1(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State1"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State10(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State10"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State11(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State11"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State12(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State12"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State13(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State13"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State14(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State14"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State15(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State15"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State16(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State16"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State17(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State17"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State18(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State18"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State19(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State19"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State2(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State2"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State20(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State20"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State21(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State21"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State22(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State22"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State23(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State23"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State24(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State24"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State25(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State25"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State26(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State26"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State27(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State27"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State28(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State28"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State3(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State3"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State4(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State4"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State5(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State5"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State6(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State6"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State7(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State7"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State8(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State8"), {"ctx"});
            return _m.Call(ctx);
        }
        static bool State9(::LitJson::FsmContext* ctx) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("State9"), {"ctx"});
            return _m.Call(ctx);
        }
        void UngetChar() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UngetChar"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
