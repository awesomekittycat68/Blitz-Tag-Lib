#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BufferReaderPushAdapterBase$1.hpp"

namespace Photon_Voice {
    template <typename T>
    struct BufferReaderPushAdapterAsyncPoolCopy$1 : ::Photon_Voice::BufferReaderPushAdapterBase$1<T> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "BufferReaderPushAdapterAsyncPoolCopy`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<T>* GetBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuffer(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<T>*> _field = GetClass().GetField(O("buffer"));
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
