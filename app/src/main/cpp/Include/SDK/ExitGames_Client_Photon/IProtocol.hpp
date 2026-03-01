#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IProtocol_DeserializationFlags.hpp"

namespace ExitGames_Client_Photon {
    struct IProtocol : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "IProtocol");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetProtocolType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ProtocolType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetVersionBytes() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _method = GetClass().GetMethod(O("get_VersionBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::ExitGames_Client_Photon::ByteArraySlicePool* GetByteArraySlicePool() {
            static BNM::Field<::ExitGames_Client_Photon::ByteArraySlicePool*> _field = GetClass().GetField(O("ByteArraySlicePool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* Deserialize(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Deserialize"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        void* Deserialize(::BNM::Structures::Mono::Array<uint8_t>* serializedData) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Deserialize"), {"serializedData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serializedData);
        }
        void* Deserialize(::ExitGames_Client_Photon::StreamBuffer* din, uint8_t type, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Deserialize"), {"din", "type", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, type, flags);
        }
        uint8_t DeserializeByte(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("DeserializeByte"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::ExitGames_Client_Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::ExitGames_Client_Photon::DisconnectMessage*> _m = GetClass().GetMethod(O("DeserializeDisconnectMessage"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::ExitGames_Client_Photon::EventData* DeserializeEventData(::ExitGames_Client_Photon::StreamBuffer* din, ::ExitGames_Client_Photon::EventData* target, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::ExitGames_Client_Photon::EventData*> _m = GetClass().GetMethod(O("DeserializeEventData"), {"din", "target", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, target, flags);
        }
        void* DeserializeMessage(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeMessage"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::ExitGames_Client_Photon::OperationRequest* DeserializeOperationRequest(::ExitGames_Client_Photon::StreamBuffer* din, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::ExitGames_Client_Photon::OperationRequest*> _m = GetClass().GetMethod(O("DeserializeOperationRequest"), {"din", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, flags);
        }
        ::ExitGames_Client_Photon::OperationResponse* DeserializeOperationResponse(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::ExitGames_Client_Photon::OperationResponse*> _m = GetClass().GetMethod(O("DeserializeOperationResponse"), {"stream", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags);
        }
        int16_t DeserializeShort(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("DeserializeShort"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::BNM::Structures::Mono::String* get_ProtocolType() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ProtocolType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* get_VersionBytes() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("get_VersionBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::Array<uint8_t>* Serialize(TP0 obj) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        template <typename TP1 = void*>
        void Serialize(::ExitGames_Client_Photon::StreamBuffer* dout, TP1 serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeEventData(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::EventData* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeEventData"), {"stream", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, serObject, setType);
        }
        template <typename TP1 = void*>
        void SerializeMessage(::ExitGames_Client_Photon::StreamBuffer* ms, TP1 msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeMessage"), {"ms", "msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ms, msg);
        }
        void SerializeOperationRequest(::ExitGames_Client_Photon::StreamBuffer* stream, uint8_t operationCode, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* parameters, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeOperationRequest"), {"stream", "operationCode", "parameters", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, operationCode, parameters, setType);
        }
        void SerializeOperationRequest(::ExitGames_Client_Photon::StreamBuffer* stream, uint8_t operationCode, ::ExitGames_Client_Photon::ParameterDictionary* parameters, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeOperationRequest"), {"stream", "operationCode", "parameters", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, operationCode, parameters, setType);
        }
        void SerializeOperationResponse(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::OperationResponse* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeOperationResponse"), {"stream", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, serObject, setType);
        }
        void SerializeShort(::ExitGames_Client_Photon::StreamBuffer* dout, int16_t serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeShort"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeString(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::Structures::Mono::String* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeString"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
    };
}
