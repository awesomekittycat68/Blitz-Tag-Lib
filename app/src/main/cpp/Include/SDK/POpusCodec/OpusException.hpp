#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../POpusCodec_Enums/OpusStatusCode.hpp"

namespace POpusCodec {
    struct OpusException : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("POpusCodec", "OpusException");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::POpusCodec_Enums::OpusStatusCode GetStatusCode() {
            static BNM::Method<::POpusCodec_Enums::OpusStatusCode> _method = GetClass().GetMethod(O("get_StatusCode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::POpusCodec_Enums::OpusStatusCode GetStatusCode_f() {
            static BNM::Field<::POpusCodec_Enums::OpusStatusCode> _field = GetClass().GetField(O("_statusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStatusCode(::POpusCodec_Enums::OpusStatusCode value) {
            static BNM::Field<::POpusCodec_Enums::OpusStatusCode> _field = GetClass().GetField(O("_statusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::POpusCodec_Enums::OpusStatusCode get_StatusCode() {
            static BNM::Method<::POpusCodec_Enums::OpusStatusCode> _m = GetClass().GetMethod(O("get_StatusCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
