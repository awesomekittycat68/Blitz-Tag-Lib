#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Fusion_CodeGen {
    struct UnityValueSurrogate$ElementReaderWriterSingle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "UnityValueSurrogate@ElementReaderWriterSingle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDataProperty() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_DataProperty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDataProperty(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DataProperty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetData() {
            static BNM::Field<float> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_DataProperty() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_DataProperty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_DataProperty(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DataProperty"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
