#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ObjectPool$2.hpp"

namespace Photon_Voice {
    template <typename T>
    struct PrimitiveArrayPool$1 : ::Photon_Voice::ObjectPool$2<::BNM::Structures::Mono::Array<T>*, int> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "PrimitiveArrayPool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<T>* createObject(int info) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("createObject"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info);
        }
        void destroyObject(::BNM::Structures::Mono::Array<T>* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("destroyObject"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        bool infosMatch(int i0, int i1) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("infosMatch"), {"i0", "i1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(i0, i1);
        }
    };
}
