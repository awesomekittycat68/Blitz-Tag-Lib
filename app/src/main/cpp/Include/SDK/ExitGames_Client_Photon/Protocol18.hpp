#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "IProtocol.hpp"
#include "IProtocol_DeserializationFlags.hpp"
#include "Protocol18_GpType.hpp"

namespace ExitGames_Client_Photon {
    struct Protocol18 : ::ExitGames_Client_Photon::IProtocol {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "Protocol18");
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
        static ::BNM::Structures::Mono::Array<uint8_t>* GetBoolMasks() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("boolMasks"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemCompressedUInt32() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memCompressedUInt32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemCompressedUInt64() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memCompressedUInt64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetMemCustomTypeBodyLengthSerialized() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memCustomTypeBodyLengthSerialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<double>* GetMemDoubleBlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<double>*> _field = GetClass().GetField(O("memDoubleBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetMemFloatBlock() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("memFloatBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetVersionBytes_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("versionBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMemCompressedUInt64(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("memCompressedUInt64"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int DecodeZigZag32(uint32_t value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("DecodeZigZag32"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        int64_t DecodeZigZag64(uint64_t value) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("DecodeZigZag64"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
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
        uint32_t EncodeZigZag32(int value) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("EncodeZigZag32"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
        }
        uint64_t EncodeZigZag64(int64_t value) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("EncodeZigZag64"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(value);
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
        static ::BNM::MonoType* GetAllowedDictionaryKeyTypes(::ExitGames_Client_Photon::Protocol18_GpType gpType) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetAllowedDictionaryKeyTypes"), {"gpType"});
            return _m.Call(gpType);
        }
        static ::BNM::MonoType* GetClrArrayType(::ExitGames_Client_Photon::Protocol18_GpType gpType) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetClrArrayType"), {"gpType"});
            return _m.Call(gpType);
        }
        ::ExitGames_Client_Photon::Protocol18_GpType GetCodeOfType(::BNM::MonoType* type) {
            static BNM::Method<::ExitGames_Client_Photon::Protocol18_GpType> _m = GetClass().GetMethod(O("GetCodeOfType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        template <typename TP0 = void*>
        ::ExitGames_Client_Photon::Protocol18_GpType GetCodeOfTypeCode(TP0 type) {
            static BNM::Method<::ExitGames_Client_Photon::Protocol18_GpType> _m = GetClass().GetMethod(O("GetCodeOfTypeCode"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        ::BNM::MonoType* GetDictArrayType(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("GetDictArrayType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        void* Read(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Read"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        void* Read(::ExitGames_Client_Photon::StreamBuffer* stream, uint8_t gpType, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Read"), {"stream", "gpType", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, gpType, flags, parameters);
        }
        ::BNM::IL2CPP::Il2CppObject* ReadArrayInArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ReadArrayInArray"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        bool ReadBoolean(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadBoolean"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<bool>* ReadBooleanArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<bool>*> _m = GetClass().GetMethod(O("ReadBooleanArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        uint8_t ReadByte(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ReadByte"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* ReadByteArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ReadByteArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        int ReadCompressedInt32(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadCompressedInt32"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<int>* ReadCompressedInt32Array(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("ReadCompressedInt32Array"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        int64_t ReadCompressedInt64(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadCompressedInt64"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<int64_t>* ReadCompressedInt64Array(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<int64_t>*> _m = GetClass().GetMethod(O("ReadCompressedInt64Array"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        uint32_t ReadCompressedUInt32(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("ReadCompressedUInt32"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        uint64_t ReadCompressedUInt64(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("ReadCompressedUInt64"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        void* ReadCustomType(::ExitGames_Client_Photon::StreamBuffer* stream, uint8_t gpType) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReadCustomType"), {"stream", "gpType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, gpType);
        }
        void* ReadCustomTypeArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReadCustomTypeArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::IL2CPP::Il2CppObject* ReadDictionary(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("ReadDictionary"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* ReadDictionaryArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("ReadDictionaryArray"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        bool ReadDictionaryElements(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::Protocol18_GpType keyReadType, ::ExitGames_Client_Photon::Protocol18_GpType valueReadType, ::BNM::IL2CPP::Il2CppObject* dictionary, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ReadDictionaryElements"), {"stream", "keyReadType", "valueReadType", "dictionary", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, keyReadType, valueReadType, dictionary, flags, parameters);
        }
        ::BNM::MonoType* ReadDictionaryType(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("ReadDictionaryType"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::MonoType* ReadDictionaryType(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::Protocol18_GpType& keyReadType, ::ExitGames_Client_Photon::Protocol18_GpType& valueReadType) {
            static BNM::Method<::BNM::MonoType*> _m = GetClass().GetMethod(O("ReadDictionaryType"), {"stream", "keyReadType", "valueReadType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, &keyReadType, &valueReadType);
        }
        double ReadDouble(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("ReadDouble"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<double>* ReadDoubleArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<double>*> _m = GetClass().GetMethod(O("ReadDoubleArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::ExitGames_Client_Photon::Hashtable* ReadHashtable(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::ExitGames_Client_Photon::Hashtable*> _m = GetClass().GetMethod(O("ReadHashtable"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        ::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::Hashtable*>* ReadHashtableArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::BNM::Structures::Mono::Array<::ExitGames_Client_Photon::Hashtable*>*> _m = GetClass().GetMethod(O("ReadHashtableArray"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        int ReadInt1(::ExitGames_Client_Photon::StreamBuffer* stream, bool signNegative) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadInt1"), {"stream", "signNegative"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, signNegative);
        }
        int16_t ReadInt16(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("ReadInt16"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<int16_t>* ReadInt16Array(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<int16_t>*> _m = GetClass().GetMethod(O("ReadInt16Array"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        int ReadInt2(::ExitGames_Client_Photon::StreamBuffer* stream, bool signNegative) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadInt2"), {"stream", "signNegative"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, signNegative);
        }
        int ReadInt32(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadInt32"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        int64_t ReadInt64(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("ReadInt64"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<int>* ReadIntArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<int>*> _m = GetClass().GetMethod(O("ReadIntArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::ExitGames_Client_Photon::ByteArraySlice* ReadNonAllocByteArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::ExitGames_Client_Photon::ByteArraySlice*> _m = GetClass().GetMethod(O("ReadNonAllocByteArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<void*>* ReadObjectArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("ReadObjectArray"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
        }
        ::ExitGames_Client_Photon::ParameterDictionary* ReadParameterDictionary(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::ParameterDictionary* target, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::ExitGames_Client_Photon::ParameterDictionary*> _m = GetClass().GetMethod(O("ReadParameterDictionary"), {"stream", "target", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, target, flags);
        }
        ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* ReadParameterTable(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* target, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags) {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<uint8_t, void*>*> _m = GetClass().GetMethod(O("ReadParameterTable"), {"stream", "target", "flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, target, flags);
        }
        float ReadSingle(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ReadSingle"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<float>* ReadSingleArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("ReadSingleArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::String* ReadString(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ReadString"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* ReadStringArray(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("ReadStringArray"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        uint16_t ReadUShort(::ExitGames_Client_Photon::StreamBuffer* stream) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("ReadUShort"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream);
        }
        ::BNM::Structures::Mono::Array<::ExitGames_Client_Photon_StructWrapping::StructWrapper*>* ReadWrapperArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::IProtocol_DeserializationFlags flags, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<::BNM::Structures::Mono::Array<::ExitGames_Client_Photon_StructWrapping::StructWrapper*>*> _m = GetClass().GetMethod(O("ReadWrapperArray"), {"stream", "flags", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, flags, parameters);
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
        template <typename TP1 = void*>
        void Write(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        template <typename TP1 = void*>
        void Write(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, ::ExitGames_Client_Photon::Protocol18_GpType gpType, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"stream", "value", "gpType", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, gpType, writeType);
        }
        bool WriteArrayHeader(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::MonoType* type) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WriteArrayHeader"), {"stream", "type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, type);
        }
        template <typename TP1 = void*>
        void WriteArrayInArray(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteArrayInArray"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        template <typename TP1 = void*>
        void WriteArraySegmentByte(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 seg, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteArraySegmentByte"), {"stream", "seg", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, seg, writeType);
        }
        bool WriteArrayType(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::MonoType* type, ::ExitGames_Client_Photon::Protocol18_GpType& writeType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("WriteArrayType"), {"stream", "type", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, type, &writeType);
        }
        void WriteBoolArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<bool>* value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBoolArray"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteBoolean(::ExitGames_Client_Photon::StreamBuffer* stream, bool value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBoolean"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteByte(::ExitGames_Client_Photon::StreamBuffer* stream, uint8_t value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteByte"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteByteArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<uint8_t>* value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteByteArray"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteByteArraySlice(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::ByteArraySlice* buffer, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteByteArraySlice"), {"stream", "buffer", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, buffer, writeType);
        }
        void WriteCompressedInt32(::ExitGames_Client_Photon::StreamBuffer* stream, int value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCompressedInt32"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteCompressedInt64(::ExitGames_Client_Photon::StreamBuffer* stream, int64_t value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCompressedInt64"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteCompressedUInt32(::ExitGames_Client_Photon::StreamBuffer* stream, uint32_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCompressedUInt32"), {"stream", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value);
        }
        int WriteCompressedUInt32(::BNM::Structures::Mono::Array<uint8_t>* buffer, uint32_t value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("WriteCompressedUInt32"), {"buffer", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, value);
        }
        void WriteCompressedUInt64(::ExitGames_Client_Photon::StreamBuffer* stream, uint64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCompressedUInt64"), {"stream", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value);
        }
        template <typename TP1 = void*>
        void WriteCustomType(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCustomType"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        template <typename TP1 = void*>
        void WriteCustomTypeArray(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCustomTypeArray"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        template <typename TP2 = void*>
        void WriteCustomTypeBody(::ExitGames_Client_Photon::CustomType* customType, ::ExitGames_Client_Photon::StreamBuffer* stream, TP2 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteCustomTypeBody"), {"customType", "stream", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(customType, stream, value);
        }
        template <typename TP1 = void*>
        void WriteDictionary(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 dict, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDictionary"), {"stream", "dict", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, dict, setType);
        }
        void WriteDictionaryArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* dictArray, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDictionaryArray"), {"stream", "dictArray", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, dictArray, writeType);
        }
        void WriteDictionaryElements(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::IL2CPP::Il2CppObject* dictionary, ::ExitGames_Client_Photon::Protocol18_GpType keyWriteType, ::ExitGames_Client_Photon::Protocol18_GpType valueWriteType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDictionaryElements"), {"stream", "dictionary", "keyWriteType", "valueWriteType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, dictionary, keyWriteType, valueWriteType);
        }
        void WriteDictionaryHeader(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::MonoType* type, ::ExitGames_Client_Photon::Protocol18_GpType& keyWriteType, ::ExitGames_Client_Photon::Protocol18_GpType& valueWriteType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDictionaryHeader"), {"stream", "type", "keyWriteType", "valueWriteType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, type, &keyWriteType, &valueWriteType);
        }
        void WriteDouble(::ExitGames_Client_Photon::StreamBuffer* stream, double value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDouble"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteDoubleArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<double>* values, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDoubleArray"), {"stream", "values", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, values, setType);
        }
        template <typename TP1 = void*>
        void WriteHashtable(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteHashtable"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        template <typename TP1 = void*>
        void WriteHashtableArray(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteHashtableArray"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteInt16(::ExitGames_Client_Photon::StreamBuffer* stream, int16_t value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteInt16"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteInt16Array(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<int16_t>* value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteInt16Array"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteInt32ArrayCompressed(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<int>* value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteInt32ArrayCompressed"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteInt64ArrayCompressed(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<int64_t>* values, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteInt64ArrayCompressed"), {"stream", "values", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, values, setType);
        }
        void WriteIntLength(::ExitGames_Client_Photon::StreamBuffer* stream, int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteIntLength"), {"stream", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value);
        }
        template <typename TP1 = void*>
        void WriteObjectArray(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 array, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteObjectArray"), {"stream", "array", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, array, writeType);
        }
        void WriteObjectArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::IL2CPP::Il2CppObject* array, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteObjectArray"), {"stream", "array", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, array, writeType);
        }
        void WriteParameterTable(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteParameterTable"), {"stream", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, parameters);
        }
        void WriteParameterTable(::ExitGames_Client_Photon::StreamBuffer* stream, ::ExitGames_Client_Photon::ParameterDictionary* parameters) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteParameterTable"), {"stream", "parameters"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, parameters);
        }
        void WriteSingle(::ExitGames_Client_Photon::StreamBuffer* stream, float value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSingle"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        void WriteSingleArray(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::Array<float>* values, bool setType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSingleArray"), {"stream", "values", "setType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, values, setType);
        }
        void WriteString(::ExitGames_Client_Photon::StreamBuffer* stream, ::BNM::Structures::Mono::String* value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteString"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
        template <typename TP1 = void*>
        void WriteStringArray(::ExitGames_Client_Photon::StreamBuffer* stream, TP1 value0, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteStringArray"), {"stream", "value0", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value0, writeType);
        }
        void WriteUShort(::ExitGames_Client_Photon::StreamBuffer* stream, uint16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteUShort"), {"stream", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value);
        }
        void WriteVarInt32(::ExitGames_Client_Photon::StreamBuffer* stream, int value, bool writeType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteVarInt32"), {"stream", "value", "writeType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, value, writeType);
        }
    };
}
