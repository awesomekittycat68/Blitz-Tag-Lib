#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ImageBufferInfo.hpp"
#include "ObjectPool$2.hpp"

namespace Photon_Voice {
    template <typename T>
    struct ImageBufferNativePool$1 : ::Photon_Voice::ObjectPool$2<T, ::Photon_Voice::ImageBufferInfo> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "ImageBufferNativePool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        T createObject(::Photon_Voice::ImageBufferInfo info) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("createObject"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info);
        }
        void destroyObject(T obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("destroyObject"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        bool infosMatch(::Photon_Voice::ImageBufferInfo i0, ::Photon_Voice::ImageBufferInfo i1) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("infosMatch"), {"i0", "i1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(i0, i1);
        }
    };
}
