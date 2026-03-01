#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_SocketServer_Security {
    struct DiffieHellmanCryptoProvider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.SocketServer.Security", "DiffieHellmanCryptoProvider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<uint8_t>* GetPublicKey() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _method = GetClass().GetMethod(O("get_PublicKey"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCrypto() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("crypto"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPrime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("prime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetPrimeRoot() {
            static BNM::Field<void*> _field = GetClass().GetField(O("primeRoot"));
            return _field.Get();
        }
        void* GetPublicKey_f() {
            static BNM::Field<void*> _field = GetClass().GetField(O("publicKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSecret() {
            static BNM::Field<void*> _field = GetClass().GetField(O("secret"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetSharedKey() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("sharedKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCrypto(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("crypto"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedKey(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("sharedKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* CalculatePublicKey() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CalculatePublicKey"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void* CalculateSharedKey(TP0 otherPartyPublicKey) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CalculateSharedKey"), {"otherPartyPublicKey"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(otherPartyPublicKey);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* Decrypt(::BNM::Structures::Mono::Array<uint8_t>* data, int offset, int count) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Decrypt"), {"data", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, offset, count);
        }
        void DeriveSharedKey(::BNM::Structures::Mono::Array<uint8_t>* otherPartyPublicKey) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeriveSharedKey"), {"otherPartyPublicKey"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(otherPartyPublicKey);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* Encrypt(::BNM::Structures::Mono::Array<uint8_t>* data, int offset, int count) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Encrypt"), {"data", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(data, offset, count);
        }
        void* GenerateRandomSecret(int secretLength) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GenerateRandomSecret"), {"secretLength"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(secretLength);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* get_PublicKey() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("get_PublicKey"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* MsBigIntArrayToPhotonBigIntArray(::BNM::Structures::Mono::Array<uint8_t>* array) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("MsBigIntArrayToPhotonBigIntArray"), {"array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(array);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* PhotonBigIntArrayToMsBigIntArray(::BNM::Structures::Mono::Array<uint8_t>* array) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("PhotonBigIntArrayToMsBigIntArray"), {"array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(array);
        }
    };
}
