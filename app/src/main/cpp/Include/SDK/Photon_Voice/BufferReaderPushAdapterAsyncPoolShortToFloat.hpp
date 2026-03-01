#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BufferReaderPushAdapterBase$1.hpp"

namespace Photon_Voice {
    struct BufferReaderPushAdapterAsyncPoolShortToFloat : ::Photon_Voice::BufferReaderPushAdapterBase$1<int16_t> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "BufferReaderPushAdapterAsyncPoolShortToFloat");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<int16_t>* GetBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuffer(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Service(::Photon_Voice::LocalVoice* localVoice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"), {"localVoice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localVoice);
        }
    };
}
