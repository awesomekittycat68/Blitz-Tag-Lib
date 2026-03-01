#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Fusion_CodeGen {
    struct UnityValueSurrogate$ReaderWriter$Fusion_NetworkString$1$Fusion__128$ : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Fusion.CodeGen", "UnityValueSurrogate@ReaderWriter@Fusion_NetworkString`1<Fusion__128>");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_DataProperty() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_DataProperty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_DataProperty(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DataProperty"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
