#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PhotonUtils_CustomTypes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonUtils").GetInnerClass("CustomTypes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int16_t LEN_C32 = 4;
        template <typename T>
        static ::BNM::Structures::Mono::Array<uint8_t>* CastToBytes(T data) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("CastToBytes"), {"data"});
            return _m.Call(data);
        }
        template <typename T>
        static T CastToStruct(::BNM::Structures::Mono::Array<uint8_t>* bytes) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("CastToStruct"), {"bytes"});
            return _m.Call(bytes);
        }
        static void* DeserializeColor32(::BNM::Structures::Mono::Array<uint8_t>* data) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DeserializeColor32"), {"data"});
            return _m.Call(data);
        }
        static void InitOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitOnLoad"));
            _m.Call();
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::Array<uint8_t>* SerializeColor32(TP0 value) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("SerializeColor32"), {"value"});
            return _m.Call(value);
        }
    };
}
