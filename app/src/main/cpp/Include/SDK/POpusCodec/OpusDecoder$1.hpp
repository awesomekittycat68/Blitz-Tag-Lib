#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice/FrameBuffer.hpp"
#include "../POpusCodec_Enums/Bandwidth.hpp"

namespace POpusCodec {
    template <typename T>
    struct OpusDecoder$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("POpusCodec", "OpusDecoder`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr bool UseInbandFEC = true;
        static constexpr int MaxFrameSize = 5760;
        int GetChannelCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_channelCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetHandle() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("_handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPreviousPacketBandwidth() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_previousPacketBandwidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<T>* GetBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<T>* GetEmptyBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("EmptyBuffer"));
            return _field.Get();
        }
        ::Photon_Voice::FrameBuffer GetPrevPacketData() {
            static BNM::Field<::Photon_Voice::FrameBuffer> _field = GetClass().GetField(O("prevPacketData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrevPacketInvalid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("prevPacketInvalid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSizeofT() {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeofT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTisFloat() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TisFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannelCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_channelCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandle(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("_handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousPacketBandwidth(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_previousPacketBandwidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuffer(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevPacketData(::Photon_Voice::FrameBuffer value) {
            static BNM::Field<::Photon_Voice::FrameBuffer> _field = GetClass().GetField(O("prevPacketData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevPacketInvalid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("prevPacketInvalid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeofT(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeofT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTisFloat(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TisFloat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::Array<T>* DecodeEndOfStream() {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("DecodeEndOfStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* DecodePacket(::Photon_Voice::FrameBuffer& packetData) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("DecodePacket"), {"packetData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&packetData);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* get_PreviousPacketBandwidth() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_PreviousPacketBandwidth"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
