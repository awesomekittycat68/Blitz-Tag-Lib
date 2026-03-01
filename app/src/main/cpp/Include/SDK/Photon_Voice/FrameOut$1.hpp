#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct FrameOut$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "FrameOut`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<T>* GetBuf() {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _method = GetClass().GetMethod(O("get_Buf"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBuf(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Buf"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetEndOfStream() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EndOfStream"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEndOfStream(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EndOfStream"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<T>* get_Buf() {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("get_Buf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_EndOfStream() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EndOfStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Buf(::BNM::Structures::Mono::Array<T>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Buf"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_EndOfStream(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EndOfStream"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
