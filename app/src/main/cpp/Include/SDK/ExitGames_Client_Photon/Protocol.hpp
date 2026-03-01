#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct Protocol : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "Protocol");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<uint8_t, ::ExitGames_Client_Photon::CustomType*>* GetCodeDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, ::ExitGames_Client_Photon::CustomType*>*> _field = GetClass().GetField(O("CodeDict"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemDeserialize() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memDeserialize"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<float>* GetMemFloatBlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("memFloatBlock"));
            return _field.Get();
        }
        static ::ExitGames_Client_Photon::IProtocol* GetProtocolDefault() {
            static BNM::Field<::ExitGames_Client_Photon::IProtocol*> _field = GetClass().GetField(O("ProtocolDefault"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::ExitGames_Client_Photon::CustomType*>* GetTypeDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::MonoType*, ::ExitGames_Client_Photon::CustomType*>*> _field = GetClass().GetField(O("TypeDict"));
            return _field.Get();
        }
        static void SetProtocolDefault(::ExitGames_Client_Photon::IProtocol* value) {
            static BNM::Field<::ExitGames_Client_Photon::IProtocol*> _field = GetClass().GetField(O("ProtocolDefault"));
            _field.Set(value);
        }
        static void* Deserialize(::BNM::Structures::Mono::Array<uint8_t>* serializedData) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Deserialize"), {"serializedData"});
            return _m.Call(serializedData);
        }
        static void Deserialize(int& value, ::BNM::Structures::Mono::Array<uint8_t>* source, int& offset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deserialize"), {"value", "source", "offset"});
            _m.Call(&value, source, &offset);
        }
        static void Deserialize(int16_t& value, ::BNM::Structures::Mono::Array<uint8_t>* source, int& offset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deserialize"), {"value", "source", "offset"});
            _m.Call(&value, source, &offset);
        }
        static void Deserialize(float& value, ::BNM::Structures::Mono::Array<uint8_t>* source, int& offset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deserialize"), {"value", "source", "offset"});
            _m.Call(&value, source, &offset);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<uint8_t>* Serialize(TP0 obj) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            return _m.Call(obj);
        }
        static void Serialize(int16_t value, ::BNM::Structures::Mono::Array<uint8_t>* target, int& targetOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"value", "target", "targetOffset"});
            _m.Call(value, target, &targetOffset);
        }
        static void Serialize(int value, ::BNM::Structures::Mono::Array<uint8_t>* target, int& targetOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"value", "target", "targetOffset"});
            _m.Call(value, target, &targetOffset);
        }
        static void Serialize(float value, ::BNM::Structures::Mono::Array<uint8_t>* target, int& targetOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"value", "target", "targetOffset"});
            _m.Call(value, target, &targetOffset);
        }
        static bool TryRegisterType(::BNM::MonoType* type, uint8_t typeCode, ::ExitGames_Client_Photon::SerializeMethod* serializeFunction, ::ExitGames_Client_Photon::DeserializeMethod* deserializeFunction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryRegisterType"), {"type", "typeCode", "serializeFunction", "deserializeFunction"});
            return _m.Call(type, typeCode, serializeFunction, deserializeFunction);
        }
        static bool TryRegisterType(::BNM::MonoType* type, uint8_t typeCode, ::ExitGames_Client_Photon::SerializeStreamMethod* serializeFunction, ::ExitGames_Client_Photon::DeserializeStreamMethod* deserializeFunction) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryRegisterType"), {"type", "typeCode", "serializeFunction", "deserializeFunction"});
            return _m.Call(type, typeCode, serializeFunction, deserializeFunction);
        }
    };
}
