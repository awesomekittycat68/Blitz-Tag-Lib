#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AESHMAC : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AESHMAC");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int BlockBitSize = 128;
        static constexpr int KeyBitSize = 256;
        static constexpr int SaltBitSize = 64;
        static constexpr int Iterations = 10000;
        static constexpr int MinPasswordLength = 12;
        static ::BNM::IL2CPP::Il2CppObject* GetGRNG() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gRNG"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* NewKey() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("NewKey"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* Rfc2898DeriveBytes(::BNM::Structures::Mono::String* password, ::BNM::Structures::Mono::Array<uint8_t>* salt, int iterations, int numBytes) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("Rfc2898DeriveBytes"), {"password", "salt", "iterations", "numBytes"});
            return _m.Call(password, salt, iterations, numBytes);
        }
        static ::BNM::Structures::Mono::String* SimpleDecrypt(::BNM::Structures::Mono::String* ciphertext, ::BNM::Structures::Mono::Array<uint8_t>* key, ::BNM::Structures::Mono::Array<uint8_t>* auth, int saltLength) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SimpleDecrypt"), {"ciphertext", "key", "auth", "saltLength"});
            return _m.Call(ciphertext, key, auth, saltLength);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* SimpleDecrypt(::BNM::Structures::Mono::Array<uint8_t>* ciphertext, ::BNM::Structures::Mono::Array<uint8_t>* key, ::BNM::Structures::Mono::Array<uint8_t>* auth, int saltLength) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("SimpleDecrypt"), {"ciphertext", "key", "auth", "saltLength"});
            return _m.Call(ciphertext, key, auth, saltLength);
        }
        static ::BNM::Structures::Mono::String* SimpleDecryptWithKey(::BNM::Structures::Mono::String* ciphertext, ::BNM::Structures::Mono::String* key, int saltLength) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SimpleDecryptWithKey"), {"ciphertext", "key", "saltLength"});
            return _m.Call(ciphertext, key, saltLength);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* SimpleDecryptWithKey(::BNM::Structures::Mono::Array<uint8_t>* ciphertext, ::BNM::Structures::Mono::String* key, int saltLength) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("SimpleDecryptWithKey"), {"ciphertext", "key", "saltLength"});
            return _m.Call(ciphertext, key, saltLength);
        }
        static ::BNM::Structures::Mono::String* SimpleEncrypt(::BNM::Structures::Mono::String* plaintext, ::BNM::Structures::Mono::Array<uint8_t>* key, ::BNM::Structures::Mono::Array<uint8_t>* auth, ::BNM::Structures::Mono::Array<uint8_t>* salt) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SimpleEncrypt"), {"plaintext", "key", "auth", "salt"});
            return _m.Call(plaintext, key, auth, salt);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* SimpleEncrypt(::BNM::Structures::Mono::Array<uint8_t>* plaintext, ::BNM::Structures::Mono::Array<uint8_t>* key, ::BNM::Structures::Mono::Array<uint8_t>* auth, ::BNM::Structures::Mono::Array<uint8_t>* salt) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("SimpleEncrypt"), {"plaintext", "key", "auth", "salt"});
            return _m.Call(plaintext, key, auth, salt);
        }
        static ::BNM::Structures::Mono::String* SimpleEncryptWithKey(::BNM::Structures::Mono::String* plaintext, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::Array<uint8_t>* salt) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("SimpleEncryptWithKey"), {"plaintext", "key", "salt"});
            return _m.Call(plaintext, key, salt);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* SimpleEncryptWithKey(::BNM::Structures::Mono::Array<uint8_t>* plaintext, ::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::Array<uint8_t>* salt) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("SimpleEncryptWithKey"), {"plaintext", "key", "salt"});
            return _m.Call(plaintext, key, salt);
        }
    };
}
