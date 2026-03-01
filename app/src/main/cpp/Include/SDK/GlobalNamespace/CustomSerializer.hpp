#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomSerializer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomSerializer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void* ByteDeserialize(::BNM::Structures::Mono::Array<uint8_t>* bytes) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ByteDeserialize"), {"bytes"});
            return _m.Call(bytes);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<uint8_t>* ByteSerialize(TP0 obj) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ByteSerialize"), {"obj"});
            return _m.Call(obj);
        }
        static void* Deserialize(::BNM::Structures::Mono::Array<uint8_t>* data) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Deserialize"), {"data"});
            return _m.Call(data);
        }
        static ::GlobalNamespace::NetEventOptions* DeserializeNetEventOptions(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<::GlobalNamespace::NetEventOptions*> _m = GetClass().GetMethod(O("DeserializeNetEventOptions"), {"reader"});
            return _m.Call(reader);
        }
        static void* DeserializeObject(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeObject"), {"reader"});
            return _m.Call(reader);
        }
        static ::BNM::Structures::Mono::Array<void*>* DeserializeObjectArray(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("DeserializeObjectArray"), {"reader"});
            return _m.Call(reader);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<uint8_t>* Serialize(TP0 obj) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            return _m.Call(obj);
        }
        static void SerializeNetEventOptions(::BNM::IL2CPP::Il2CppObject* writer, ::GlobalNamespace::NetEventOptions* options) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeNetEventOptions"), {"writer", "options"});
            _m.Call(writer, options);
        }
        template <typename TP1 = void*>
        static void SerializeObject(::BNM::IL2CPP::Il2CppObject* writer, TP1 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeObject"), {"writer", "obj"});
            _m.Call(writer, obj);
        }
        static void SerializeObjectArray(::BNM::IL2CPP::Il2CppObject* writer, ::BNM::Structures::Mono::Array<void*>* objects) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeObjectArray"), {"writer", "objects"});
            _m.Call(writer, objects);
        }
    };
}
