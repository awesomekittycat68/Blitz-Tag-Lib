#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PocoJsonSerializerStrategy.hpp"

namespace PlayFab_Json {
    struct SimpleJsonInstance_PlayFabSimpleJsonCuztomization : ::PlayFab_Json::PocoJsonSerializerStrategy {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "SimpleJsonInstance").GetInnerClass("PlayFabSimpleJsonCuztomization");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        void* DeserializeObject(TP0 value, ::BNM::MonoType* type) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeObject"), {"value", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value, type);
        }
        template <typename TP0 = void*>
        bool TrySerializeKnownTypes(TP0 input, void*& output) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TrySerializeKnownTypes"), {"input", "output"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, &output);
        }
    };
}
