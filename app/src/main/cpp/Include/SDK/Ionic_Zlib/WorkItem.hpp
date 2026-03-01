#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Zlib {
    struct WorkItem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "WorkItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<uint8_t>* GetBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetCompressed() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("compressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCompressedBytesAvailable() {
            static BNM::Field<int> _field = GetClass().GetField(O("compressedBytesAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZlibCodec* GetCompressor() {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("compressor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrc() {
            static BNM::Field<int> _field = GetClass().GetField(O("crc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetInputBytesAvailable() {
            static BNM::Field<int> _field = GetClass().GetField(O("inputBytesAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOrdinal() {
            static BNM::Field<int> _field = GetClass().GetField(O("ordinal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("buffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressed(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("compressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressedBytesAvailable(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("compressedBytesAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressor(::Ionic_Zlib::ZlibCodec* value) {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("compressor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrc(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("crc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputBytesAvailable(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("inputBytesAvailable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrdinal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ordinal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
