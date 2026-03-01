#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Fusion_CodeGen {
    struct UnityArraySurrogate$ElementReaderWriterInt64 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "UnityArraySurrogate@ElementReaderWriterInt64");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<int64_t>* GetDataProperty() {
            static BNM::Method<::BNM::Structures::Mono::Array<int64_t>*> _method = GetClass().GetMethod(O("get_DataProperty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDataProperty(::BNM::Structures::Mono::Array<int64_t>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DataProperty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<int64_t>* GetData() {
            static BNM::Field<::BNM::Structures::Mono::Array<int64_t>*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(::BNM::Structures::Mono::Array<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int64_t>*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<int64_t>* get_DataProperty() {
            static BNM::Method<::BNM::Structures::Mono::Array<int64_t>*> _m = GetClass().GetMethod(O("get_DataProperty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_DataProperty(::BNM::Structures::Mono::Array<int64_t>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DataProperty"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
