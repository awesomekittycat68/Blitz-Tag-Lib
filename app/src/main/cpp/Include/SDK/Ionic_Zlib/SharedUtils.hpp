#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct SharedUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "SharedUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int ReadInput(::BNM::IL2CPP::Il2CppObject* sourceTextReader, ::BNM::Structures::Mono::Array<uint8_t>* target, int start, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ReadInput"), {"sourceTextReader", "target", "start", "count"});
            return _m.Call(sourceTextReader, target, start, count);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* ToByteArray(::BNM::Structures::Mono::String* sourceString) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToByteArray"), {"sourceString"});
            return _m.Call(sourceString);
        }
        static ::BNM::Structures::Mono::Array<char>* ToCharArray(::BNM::Structures::Mono::Array<uint8_t>* byteArray) {
            static BNM::Method<::BNM::Structures::Mono::Array<char>*> _m = GetClass().GetMethod(O("ToCharArray"), {"byteArray"});
            return _m.Call(byteArray);
        }
        static int URShift(int number, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("URShift"), {"number", "bits"});
            return _m.Call(number, bits);
        }
    };
}
