#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CompressionLevel.hpp"
#include "CompressionStrategy.hpp"
#include "FlushType.hpp"

namespace Ionic_Zlib {
    struct ZlibCodec : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "ZlibCodec");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAdler32() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Adler32"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        uint32_t GetAdler32_f() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_Adler32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAvailableBytesIn() {
            static BNM::Field<int> _field = GetClass().GetField(O("AvailableBytesIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAvailableBytesOut() {
            static BNM::Field<int> _field = GetClass().GetField(O("AvailableBytesOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionLevel GetCompressLevel() {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("CompressLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::DeflateManager* GetDstate() {
            static BNM::Field<::Ionic_Zlib::DeflateManager*> _field = GetClass().GetField(O("dstate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetInputBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("InputBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::InflateManager* GetIstate() {
            static BNM::Field<::Ionic_Zlib::InflateManager*> _field = GetClass().GetField(O("istate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Message"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextIn() {
            static BNM::Field<int> _field = GetClass().GetField(O("NextIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextOut() {
            static BNM::Field<int> _field = GetClass().GetField(O("NextOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetOutputBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("OutputBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionStrategy GetStrategy() {
            static BNM::Field<::Ionic_Zlib::CompressionStrategy> _field = GetClass().GetField(O("Strategy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTotalBytesIn() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("TotalBytesIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTotalBytesOut() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("TotalBytesOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindowBits() {
            static BNM::Field<int> _field = GetClass().GetField(O("WindowBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdler32(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_Adler32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvailableBytesIn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("AvailableBytesIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvailableBytesOut(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("AvailableBytesOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressLevel(::Ionic_Zlib::CompressionLevel value) {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("CompressLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDstate(::Ionic_Zlib::DeflateManager* value) {
            static BNM::Field<::Ionic_Zlib::DeflateManager*> _field = GetClass().GetField(O("dstate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("InputBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIstate(::Ionic_Zlib::InflateManager* value) {
            static BNM::Field<::Ionic_Zlib::InflateManager*> _field = GetClass().GetField(O("istate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Message"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextIn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NextIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextOut(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NextOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("OutputBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrategy(::Ionic_Zlib::CompressionStrategy value) {
            static BNM::Field<::Ionic_Zlib::CompressionStrategy> _field = GetClass().GetField(O("Strategy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalBytesIn(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("TotalBytesIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalBytesOut(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("TotalBytesOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowBits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("WindowBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int _InternalInitializeDeflate(bool wantRfc1950Header) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("_InternalInitializeDeflate"), {"wantRfc1950Header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(wantRfc1950Header);
        }
        int Deflate(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Deflate"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        int EndDeflate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EndDeflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int EndInflate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EndInflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void flush_pending() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("flush_pending"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Adler32() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Adler32"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Inflate(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Inflate"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        int InitializeDeflate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeDeflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int InitializeDeflate(::Ionic_Zlib::CompressionLevel level) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeDeflate"), {"level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level);
        }
        int InitializeDeflate(::Ionic_Zlib::CompressionLevel level, bool wantRfc1950Header) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeDeflate"), {"level", "wantRfc1950Header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level, wantRfc1950Header);
        }
        int InitializeDeflate(::Ionic_Zlib::CompressionLevel level, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeDeflate"), {"level", "bits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level, bits);
        }
        int InitializeDeflate(::Ionic_Zlib::CompressionLevel level, int bits, bool wantRfc1950Header) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeDeflate"), {"level", "bits", "wantRfc1950Header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level, bits, wantRfc1950Header);
        }
        int InitializeInflate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeInflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int InitializeInflate(bool expectRfc1950Header) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeInflate"), {"expectRfc1950Header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(expectRfc1950Header);
        }
        int InitializeInflate(int windowBits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeInflate"), {"windowBits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(windowBits);
        }
        int InitializeInflate(int windowBits, bool expectRfc1950Header) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("InitializeInflate"), {"windowBits", "expectRfc1950Header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(windowBits, expectRfc1950Header);
        }
        int read_buf(::BNM::Structures::Mono::Array<uint8_t>* buf, int start, int size) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("read_buf"), {"buf", "start", "size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf, start, size);
        }
        void ResetDeflate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetDeflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int SetDeflateParams(::Ionic_Zlib::CompressionLevel level, ::Ionic_Zlib::CompressionStrategy strategy) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetDeflateParams"), {"level", "strategy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level, strategy);
        }
        int SetDictionary(::BNM::Structures::Mono::Array<uint8_t>* dictionary) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetDictionary"), {"dictionary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dictionary);
        }
        int SyncInflate() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SyncInflate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
