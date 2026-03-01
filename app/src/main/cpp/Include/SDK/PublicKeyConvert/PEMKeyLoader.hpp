#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PublicKeyConvert {
    struct PEMKeyLoader : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PublicKeyConvert", "PEMKeyLoader");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<uint8_t>* GetSeqOID() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("SeqOID"));
            return _field.Get();
        }
        static void SetSeqOID(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("SeqOID"));
            _field.Set(value);
        }
        static bool CompareBytearrays(::BNM::Structures::Mono::Array<uint8_t>* a, ::BNM::Structures::Mono::Array<uint8_t>* b) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareBytearrays"), {"a", "b"});
            return _m.Call(a, b);
        }
        static ::BNM::IL2CPP::Il2CppObject* CryptoServiceProviderFromPublicKeyInfo(::BNM::Structures::Mono::Array<uint8_t>* x509key) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CryptoServiceProviderFromPublicKeyInfo"), {"x509key"});
            return _m.Call(x509key);
        }
        static ::BNM::IL2CPP::Il2CppObject* CryptoServiceProviderFromPublicKeyInfo(::BNM::Structures::Mono::String* base64EncodedKey) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("CryptoServiceProviderFromPublicKeyInfo"), {"base64EncodedKey"});
            return _m.Call(base64EncodedKey);
        }
    };
}
