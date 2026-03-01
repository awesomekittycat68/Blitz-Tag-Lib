#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BufferReaderPushAdapterBase$1.hpp"

namespace Photon_Voice {
    template <typename T>
    struct BufferReaderPushAdapterAsyncPool$1 : ::Photon_Voice::BufferReaderPushAdapterBase$1<T> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "BufferReaderPushAdapterAsyncPool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void Service(::Photon_Voice::LocalVoice* localVoice) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Service"), {"localVoice"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localVoice);
        }
    };
}
