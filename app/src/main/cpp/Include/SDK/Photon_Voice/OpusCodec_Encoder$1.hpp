#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FrameFlags.hpp"

namespace Photon_Voice {
    template <typename T>
    struct OpusCodec_Encoder$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "OpusCodec").GetInnerClass("Encoder`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetError() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Error"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetError(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Error"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Action<void*, ::Photon_Voice::FrameFlags>* GetOutput() {
            static BNM::Method<::BNM::Structures::Mono::Action<void*, ::Photon_Voice::FrameFlags>*> _method = GetClass().GetMethod(O("get_Output"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOutput(::BNM::Structures::Mono::Action<void*, ::Photon_Voice::FrameFlags>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Output"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetDisposed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetEmptyBuffer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("EmptyBuffer"));
            return _field.Get();
        }
        ::POpusCodec::OpusEncoder* GetEncoder() {
            static BNM::Field<::POpusCodec::OpusEncoder*> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEncoder(::POpusCodec::OpusEncoder* value) {
            static BNM::Field<::POpusCodec::OpusEncoder*> _field = GetClass().GetField(O("encoder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* DequeueOutput(::Photon_Voice::FrameFlags& flags) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DequeueOutput"), {"flags"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&flags);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* encodeTyped(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("encodeTyped"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        void EndOfStream() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndOfStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_Error() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Error"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Action<void*, ::Photon_Voice::FrameFlags>* get_Output() {
            static BNM::Method<::BNM::Structures::Mono::Action<void*, ::Photon_Voice::FrameFlags>*> _m = GetClass().GetMethod(O("get_Output"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename I>
        I GetPlatformAPI() {
            static BNM::Method<I> _m = GetClass().GetMethod(O("GetPlatformAPI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Input(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Input"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buf);
        }
        void set_Error(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Error"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Output(::BNM::Structures::Mono::Action<void*, ::Photon_Voice::FrameFlags>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Output"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
