#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon_Encryption {
    struct EncryptorNet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon.Encryption", "EncryptorNet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int CalculateEncryptedSize(int unencryptedSize) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculateEncryptedSize"), {"unencryptedSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(unencryptedSize);
        }
        int CalculateFragmentLength() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CalculateFragmentLength"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* Decrypt2(::BNM::Structures::Mono::Array<uint8_t>* data, int offset, int len, ::BNM::Structures::Mono::Array<uint8_t>* header, int& outLen) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Decrypt2"), {"data", "offset", "len", "header", "outLen"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, offset, len, header, &outLen);
        }
        void Encrypt2(::BNM::Structures::Mono::Array<uint8_t>* data, int len, ::BNM::Structures::Mono::Array<uint8_t>* header, ::BNM::Structures::Mono::Array<uint8_t>* output, int outOffset, int& outSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Encrypt2"), {"data", "len", "header", "output", "outOffset", "outSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, len, header, output, outOffset, &outSize);
        }
        void Init(::BNM::Structures::Mono::Array<uint8_t>* encryptionSecret, ::BNM::Structures::Mono::Array<uint8_t>* hmacSecret, ::BNM::Structures::Mono::Array<uint8_t>* ivBytes, bool chainingModeGCM, int mtu) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"encryptionSecret", "hmacSecret", "ivBytes", "chainingModeGCM", "mtu"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(encryptionSecret, hmacSecret, ivBytes, chainingModeGCM, mtu);
        }
    };
}
