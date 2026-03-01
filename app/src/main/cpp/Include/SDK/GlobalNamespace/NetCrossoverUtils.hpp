#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RPCArgBuffer$1.hpp"

namespace GlobalNamespace {
    struct NetCrossoverUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetCrossoverUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MaxParameterByteLength = 2048;
        static ::BNM::Structures::Mono::Array<uint8_t>* GetFixedBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("FixedBuffer"));
            return _field.Get();
        }
        static void SetFixedBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("FixedBuffer"));
            _field.Set(value);
        }
        static void Prewarm() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Prewarm"));
            _m.Call();
        }
        template <typename T>
        static void* ReadNetDataFromBuffer(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReadNetDataFromBuffer"), {"stream"});
            return _m.Call(stream);
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>* ToPropDict(::ExitGames_Client_Photon::Hashtable* hash) {
            static BNM::Method<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("ToPropDict"), {"hash"});
            return _m.Call(hash);
        }
        template <typename T>
        static void WriteNetDataToBuffer(T data, ::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteNetDataToBuffer"), {"data", "stream"});
            _m.Call(data, stream);
        }
        template <typename TP0 = void*>
        static void WriteNetDataToBuffer(TP0 data, ::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteNetDataToBuffer"), {"data", "stream"});
            _m.Call(data, stream);
        }
    };
}
