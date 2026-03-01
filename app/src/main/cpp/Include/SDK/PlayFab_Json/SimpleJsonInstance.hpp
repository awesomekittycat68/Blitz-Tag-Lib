#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    struct SimpleJsonInstance : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "SimpleJsonInstance");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::PlayFab_Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* GetApiSerializerStrategy() {
            static BNM::Field<::PlayFab_Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*> _field = GetClass().GetField(O("ApiSerializerStrategy"));
            return _field.Get();
        }
        static void SetApiSerializerStrategy(::PlayFab_Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization* value) {
            static BNM::Field<::PlayFab_Json::SimpleJsonInstance_PlayFabSimpleJsonCuztomization*> _field = GetClass().GetField(O("ApiSerializerStrategy"));
            _field.Set(value);
        }
        template <typename T>
        T DeserializeObject(::BNM::Structures::Mono::String* json) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("DeserializeObject"), {"json"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(json);
        }
        void* DeserializeObject_1(::BNM::Structures::Mono::String* json) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeObject"), {"json"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(json);
        }
        template <typename T, typename TP1 = void*>
        T DeserializeObject(::BNM::Structures::Mono::String* json, TP1 jsonSerializerStrategy) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("DeserializeObject"), {"json", "jsonSerializerStrategy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(json, jsonSerializerStrategy);
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::String* SerializeObject(TP0 json) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SerializeObject"), {"json"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(json);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        ::BNM::Structures::Mono::String* SerializeObject(TP0 json, TP1 jsonSerializerStrategy) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SerializeObject"), {"json", "jsonSerializerStrategy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(json, jsonSerializerStrategy);
        }
    };
}
