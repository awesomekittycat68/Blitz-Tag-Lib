#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Vector3Converter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Vector3Converter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool CanConvert(::BNM::MonoType* objectType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanConvert"), {"objectType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(objectType);
        }
        template <typename TP2 = void*>
        void* ReadJson(::BNM::IL2CPP::Il2CppObject* reader, ::BNM::MonoType* objectType, TP2 existingValue, ::BNM::IL2CPP::Il2CppObject* serializer) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReadJson"), {"reader", "objectType", "existingValue", "serializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reader, objectType, existingValue, serializer);
        }
        template <typename TP1 = void*>
        void WriteJson(::BNM::IL2CPP::Il2CppObject* writer, TP1 value, ::BNM::IL2CPP::Il2CppObject* serializer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteJson"), {"writer", "value", "serializer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, value, serializer);
        }
    };
}
