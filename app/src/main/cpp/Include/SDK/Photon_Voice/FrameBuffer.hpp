#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FrameFlags.hpp"

namespace Photon_Voice {
    struct FrameBuffer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "FrameBuffer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<uint8_t>* GetArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _method = GetClass().GetMethod(O("get_Array"));
            return _method.Call();
        }
        ::Photon_Voice::FrameFlags GetFlags() {
            static BNM::Method<::Photon_Voice::FrameFlags> _method = GetClass().GetMethod(O("get_Flags"));
            return _method.Call();
        }
        int GetLength() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Length"));
            return _method.Call();
        }
        int GetOffset() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Offset"));
            return _method.Call();
        }
        ::BNM::Types::nint GetPtr() {
            static BNM::Method<::BNM::Types::nint> _method = GetClass().GetMethod(O("get_Ptr"));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetArray_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("array"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisposed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDisposer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("disposer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGcHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gcHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOffset_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPinned() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pinned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Types::nint GetPtr_f() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("ptr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRefCnt() {
            static BNM::Field<int> _field = GetClass().GetField(O("refCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetStatDisposerCreated() {
            static BNM::Field<int> _field = GetClass().GetField(O("statDisposerCreated"));
            return _field.Get();
        }
        static int GetStatDisposerDisposed() {
            static BNM::Field<int> _field = GetClass().GetField(O("statDisposerDisposed"));
            return _field.Get();
        }
        static int GetStatPinned() {
            static BNM::Field<int> _field = GetClass().GetField(O("statPinned"));
            return _field.Get();
        }
        static int GetStatUnpinned() {
            static BNM::Field<int> _field = GetClass().GetField(O("statUnpinned"));
            return _field.Get();
        }
        void SetDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGcHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gcHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPinned(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pinned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPtr(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("ptr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefCnt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("refCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetStatDisposerCreated(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("statDisposerCreated"));
            _field.Set(value);
        }
        static void SetStatDisposerDisposed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("statDisposerDisposed"));
            _field.Set(value);
        }
        static void SetStatPinned(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("statPinned"));
            _field.Set(value);
        }
        static void SetStatUnpinned(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("statUnpinned"));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* get_Array() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("get_Array"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Voice::FrameFlags get_Flags() {
            static BNM::Method<::Photon_Voice::FrameFlags> _m = GetClass().GetMethod(O("get_Flags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Length() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Length"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Offset() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Offset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Types::nint get_Ptr() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("get_Ptr"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Release() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Retain() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Retain"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
