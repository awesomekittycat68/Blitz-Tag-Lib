#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct StringFormatter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "StringFormatter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* GetBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("builder"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetIndices() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("indices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetSpans() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("spans"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("builder"));
            _field.Set(value);
        }
        void SetIndices(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("indices"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpans(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("spans"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::String* term1) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term1) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* terms) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"terms"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(terms);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* terms) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"terms"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(terms);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::String* term1, ::BNM::Structures::Mono::String* term2) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1", "term2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1, term2);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term1, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term2) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1", "term2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1, term2);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::String* term1, ::BNM::Structures::Mono::String* term2, ::BNM::Structures::Mono::String* term3) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1", "term2", "term3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1, term2, term3);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term1, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term2, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term3) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1", "term2", "term3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1, term2, term3);
        }
        ::BNM::Structures::Mono::String* Format(::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term1, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term2, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term3, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* term4) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("Format"), {"term1", "term2", "term3", "term4"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(term1, term2, term3, term4);
        }
        static ::GlobalNamespace::StringFormatter* Parse(::BNM::Structures::Mono::String* input) {
            static BNM::Method<::GlobalNamespace::StringFormatter*> _m = GetClass().GetMethod(O("Parse"), {"input"});
            return _m.Call(input);
        }
    };
}
