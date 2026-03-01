#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IProtocol.hpp"
#include "IProtocol_DeserializationFlags.hpp"
#include "Protocol16_GpType.hpp"

namespace ExitGames_Client_Photon {
    struct Protocol16 : ::ExitGames_Client_Photon::IProtocol {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "Protocol16");
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
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemDouble() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memDouble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<double>* GetMemDoubleBlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<double>*> _field = GetClass().GetField(O("memDoubleBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemDoubleBlockBytes() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memDoubleBlockBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemFloat() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<float>* GetMemFloatBlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("memFloatBlock"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMemFloatBlockBytes() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memFloatBlockBytes"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemInteger() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memInteger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemLong() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int64_t>* GetMemLongBlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<int64_t>*> _field = GetClass().GetField(O("memLongBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemLongBlockBytes() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memLongBlockBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemShort() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memShort"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetVersionBytes_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("versionBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* CreateArrayByType(uint8_t arrayType, int16_t length) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CreateArrayByType"), {"arrayType", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(arrayType, length);
        }
        void* Deserialize(::ExitGames_Client_Photon::StreamBuffer* din, uint8_t type, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Deserialize"), {"din", "type", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, type, flags);
        }
        ::BNM::IL2CPP::Il2CppObject* DeserializeArray(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("DeserializeArray"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        bool DeserializeBoolean(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeserializeBoolean"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        uint8_t DeserializeByte(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("DeserializeByte"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* DeserializeByteArray(::ExitGames_Client_Photon::StreamBuffer* din, int size) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("DeserializeByteArray"), {"din", "size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, size);
        }
        void* DeserializeCustom(::ExitGames_Client_Photon::StreamBuffer* din, uint8_t customTypeCode, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeCustom"), {"din", "customTypeCode", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, customTypeCode, flags);
        }
        ::BNM::IL2CPP::Il2CppObject* DeserializeDictionary(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("DeserializeDictionary"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        bool DeserializeDictionaryArray(::ExitGames_Client_Photon::StreamBuffer* din, int16_t size, ::BNM::IL2CPP::Il2CppObject*& arrayResult) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeserializeDictionaryArray"), {"din", "size", "arrayResult"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, size, &arrayResult);
        }
        ::BNM::MonoType* DeserializeDictionaryType(::ExitGames_Client_Photon::StreamBuffer* reader, uint8_t& keyTypeCode, uint8_t& valTypeCode) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("DeserializeDictionaryType"), {"reader", "keyTypeCode", "valTypeCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reader, &keyTypeCode, &valTypeCode);
        }
        ::ExitGames_Client_Photon::DisconnectMessage* DeserializeDisconnectMessage(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::ExitGames_Client_Photon::DisconnectMessage*> _m = GetClass().GetMethod(O("DeserializeDisconnectMessage"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        double DeserializeDouble(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("DeserializeDouble"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::ExitGames_Client_Photon::EventData* DeserializeEventData(::ExitGames_Client_Photon::StreamBuffer* din, ::ExitGames_Client_Photon::EventData* target, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::ExitGames_Client_Photon::EventData*> _m = GetClass().GetMethod(O("DeserializeEventData"), {"din", "target", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, target, flags);
        }
        float DeserializeFloat(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DeserializeFloat"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::ExitGames_Client_Photon::Hashtable* DeserializeHashTable(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _m = GetClass().GetMethod(O("DeserializeHashTable"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::BNM::Structures::Mono::Array<int>* DeserializeIntArray(::ExitGames_Client_Photon::StreamBuffer* din, int size) {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("DeserializeIntArray"), {"din", "size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din, size);
        }
        int DeserializeInteger(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DeserializeInteger"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        int64_t DeserializeLong(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("DeserializeLong"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::BNM::Structures::Mono::Array<void*>* DeserializeObjectArray(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("DeserializeObjectArray"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
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
        ::ExitGames_Client_Photon::ParameterDictionary* DeserializeParameterDictionary(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::ParameterDictionary* target, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::ExitGames_Client_Photon::ParameterDictionary*> _m = GetClass().GetMethod(O("DeserializeParameterDictionary"), {"stream", "target", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, target, flags);
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* DeserializeParameterTable(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* target) {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<uint8_t, void*>*> _m = GetClass().GetMethod(O("DeserializeParameterTable"), {"stream", "target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, target);
        }
        int16_t DeserializeShort(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("DeserializeShort"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::BNM::Structures::Mono::String* DeserializeString(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("DeserializeString"), {"din"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(din);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* DeserializeStringArray(::ExitGames_Client_Photon::StreamBuffer* din) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("DeserializeStringArray"), {"din"});
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
        ::ExitGames_Client_Photon::Protocol16_GpType GetCodeOfType(::BNM::MonoType* type) {
            static BNM::Method<::ExitGames_Client_Photon::Protocol16_GpType> _m = GetClass().GetMethod(O("GetCodeOfType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        ::BNM::MonoType* GetTypeOfCode(uint8_t typeCode) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetTypeOfCode"), {"typeCode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(typeCode);
        }
        template <typename TP1 = void*>
        void Serialize(::ExitGames_Client_Photon::StreamBuffer* dout, TP1 serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeArray(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::IL2CPP::Il2CppObject* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeArray"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeBoolean(::ExitGames_Client_Photon::StreamBuffer* dout, bool serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeBoolean"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeByte(::ExitGames_Client_Photon::StreamBuffer* dout, uint8_t serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeByte"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeByteArray(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::Structures::Mono::Array<uint8_t>* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeByteArray"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeByteArraySegment(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::Structures::Mono::Array<uint8_t>* serObject, int offset, int count, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeByteArraySegment"), {"dout", "serObject", "offset", "count", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, offset, count, setType);
        }
        template <typename TP1 = void*>
        bool SerializeCustom(::ExitGames_Client_Photon::StreamBuffer* dout, TP1 serObject) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SerializeCustom"), {"dout", "serObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dout, serObject);
        }
        void SerializeDictionary(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::IL2CPP::Il2CppObject* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDictionary"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        template <typename TP1 = void*>
        void SerializeDictionaryElements(::ExitGames_Client_Photon::StreamBuffer* writer, TP1 dict, bool setKeyType, bool setValueType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDictionaryElements"), {"writer", "dict", "setKeyType", "setValueType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, dict, setKeyType, setValueType);
        }
        void SerializeDictionaryHeader(::ExitGames_Client_Photon::StreamBuffer* writer, ::BNM::MonoType* dictType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDictionaryHeader"), {"writer", "dictType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, dictType);
        }
        template <typename TP1 = void*>
        void SerializeDictionaryHeader(::ExitGames_Client_Photon::StreamBuffer* writer, TP1 dict, bool& setKeyType, bool& setValueType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDictionaryHeader"), {"writer", "dict", "setKeyType", "setValueType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, dict, &setKeyType, &setValueType);
        }
        void SerializeDouble(::ExitGames_Client_Photon::StreamBuffer* dout, double serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeDouble"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeEventData(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::EventData* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeEventData"), {"stream", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, serObject, setType);
        }
        void SerializeFloat(::ExitGames_Client_Photon::StreamBuffer* dout, float serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeFloat"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeHashTable(::ExitGames_Client_Photon::StreamBuffer* dout, ::ExitGames_Client_Photon::Hashtable* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeHashTable"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeIntArrayOptimized(::ExitGames_Client_Photon::StreamBuffer* inWriter, ::BNM::Structures::Mono::Array<int>* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeIntArrayOptimized"), {"inWriter", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inWriter, serObject, setType);
        }
        void SerializeInteger(::ExitGames_Client_Photon::StreamBuffer* dout, int serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeInteger"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeLengthAsShort(::ExitGames_Client_Photon::StreamBuffer* dout, int serObject, ::BNM::Structures::Mono::String* type) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeLengthAsShort"), {"dout", "serObject", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, type);
        }
        void SerializeLong(::ExitGames_Client_Photon::StreamBuffer* dout, int64_t serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeLong"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeObjectArray(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::IL2CPP::Il2CppObject* objects, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeObjectArray"), {"dout", "objects", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, objects, setType);
        }
        void SerializeOperationRequest(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::OperationRequest* operation, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeOperationRequest"), {"stream", "operation", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, operation, setType);
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
        void SerializeParameterTable(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeParameterTable"), {"stream", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, parameters);
        }
        void SerializeParameterTable(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeParameterTable"), {"stream", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, parameters);
        }
        void SerializeShort(::ExitGames_Client_Photon::StreamBuffer* dout, int16_t serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeShort"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
        void SerializeString(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::String* value, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeString"), {"stream", "value", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, setType);
        }
        void SerializeStringArray(::ExitGames_Client_Photon::StreamBuffer* dout, ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* serObject, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SerializeStringArray"), {"dout", "serObject", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dout, serObject, setType);
        }
    };
}
