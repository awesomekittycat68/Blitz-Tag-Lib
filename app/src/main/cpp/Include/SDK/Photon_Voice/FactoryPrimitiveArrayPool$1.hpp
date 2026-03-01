#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct FactoryPrimitiveArrayPool$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "FactoryPrimitiveArrayPool`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetInfo() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Info"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Free(::BNM::Structures::Mono::Array<T>* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Free"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Free(::BNM::Structures::Mono::Array<T>* obj, int info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Free"), {"obj", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj, info);
        }
        int get_Info() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Info"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* New() {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("New"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* New(int size) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("New"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(size);
        }
    };
}
