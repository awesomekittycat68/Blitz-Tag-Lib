#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CompressionLevel.hpp"
#include "CompressionMode.hpp"
#include "CompressionStrategy.hpp"
#include "FlushType.hpp"
#include "ZlibBaseStream_StreamMode.hpp"
#include "ZlibStreamFlavor.hpp"

namespace Ionic_Zlib {
    struct ZlibBaseStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "ZlibBaseStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetWantCompress() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get__wantCompress"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanRead() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanRead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanSeek() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanSeek"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanWrite() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanWrite"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCrc32() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Crc32"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetLength() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_Length"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetPosition() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPosition(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetWorkingBuffer() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _method = GetClass().GetMethod(O("get_workingBuffer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Ionic_Zlib::ZlibCodec* GetZ() {
            static BNM::Method<::Ionic_Zlib::ZlibCodec*> _method = GetClass().GetMethod(O("get_z"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetBuf1() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("_buf1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBufferSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("_bufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionMode GetCompressionMode() {
            static BNM::Field<::Ionic_Zlib::CompressionMode> _field = GetClass().GetField(O("_compressionMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZlibStreamFlavor GetFlavor() {
            static BNM::Field<::Ionic_Zlib::ZlibStreamFlavor> _field = GetClass().GetField(O("_flavor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::FlushType GetFlushMode() {
            static BNM::Field<::Ionic_Zlib::FlushType> _field = GetClass().GetField(O("_flushMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGzipComment() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_GzipComment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGzipFileName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_GzipFileName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGzipHeaderByteCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_gzipHeaderByteCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGzipMtime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_GzipMtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeaveOpen() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leaveOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionLevel GetLevel() {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("_level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStream() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_stream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZlibBaseStream_StreamMode GetStreamMode() {
            static BNM::Field<::Ionic_Zlib::ZlibBaseStream_StreamMode> _field = GetClass().GetField(O("_streamMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetWorkingBuffer_f() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("_workingBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZlibCodec* GetZ_f() {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_z"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Crc::CRC32* GetCrc() {
            static BNM::Field<::Ionic_Crc::CRC32*> _field = GetClass().GetField(O("crc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNomoreinput() {
            static BNM::Field<bool> _field = GetClass().GetField(O("nomoreinput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionStrategy GetStrategy() {
            static BNM::Field<::Ionic_Zlib::CompressionStrategy> _field = GetClass().GetField(O("Strategy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuf1(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("_buf1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBufferSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_bufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressionMode(::Ionic_Zlib::CompressionMode value) {
            static BNM::Field<::Ionic_Zlib::CompressionMode> _field = GetClass().GetField(O("_compressionMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlavor(::Ionic_Zlib::ZlibStreamFlavor value) {
            static BNM::Field<::Ionic_Zlib::ZlibStreamFlavor> _field = GetClass().GetField(O("_flavor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlushMode(::Ionic_Zlib::FlushType value) {
            static BNM::Field<::Ionic_Zlib::FlushType> _field = GetClass().GetField(O("_flushMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGzipComment(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_GzipComment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGzipFileName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_GzipFileName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGzipHeaderByteCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_gzipHeaderByteCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGzipMtime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_GzipMtime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaveOpen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leaveOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevel(::Ionic_Zlib::CompressionLevel value) {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("_level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStream(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_stream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStreamMode(::Ionic_Zlib::ZlibBaseStream_StreamMode value) {
            static BNM::Field<::Ionic_Zlib::ZlibBaseStream_StreamMode> _field = GetClass().GetField(O("_streamMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkingBuffer(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("_workingBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZ(::Ionic_Zlib::ZlibCodec* value) {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_z"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrc(::Ionic_Crc::CRC32* value) {
            static BNM::Field<::Ionic_Crc::CRC32*> _field = GetClass().GetField(O("crc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNomoreinput(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("nomoreinput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrategy(::Ionic_Zlib::CompressionStrategy value) {
            static BNM::Field<::Ionic_Zlib::CompressionStrategy> _field = GetClass().GetField(O("Strategy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int _ReadAndValidateGzipHeader() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("_ReadAndValidateGzipHeader"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Close() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Close"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CompressBuffer(::BNM::Structures::Mono::Array<uint8_t>* b, ::BNM::IL2CPP::Il2CppObject* compressor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompressBuffer"), {"b", "compressor"});
            _m.Call(b, compressor);
        }
        static void CompressString(::BNM::Structures::Mono::String* s, ::BNM::IL2CPP::Il2CppObject* compressor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CompressString"), {"s", "compressor"});
            _m.Call(s, compressor);
        }
        void end() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("end"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void finish() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("finish"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get__wantCompress() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get__wantCompress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanRead() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanRead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanSeek() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanSeek"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanWrite() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanWrite"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Crc32() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Crc32"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_Length() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_Length"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_Position() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_Position"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* get_workingBuffer() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("get_workingBuffer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Ionic_Zlib::ZlibCodec* get_z() {
            static BNM::Method<::Ionic_Zlib::ZlibCodec*> _m = GetClass().GetMethod(O("get_z"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Read(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Read"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, offset, count);
        }
        ::BNM::Structures::Mono::String* ReadZeroTerminatedString() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ReadZeroTerminatedString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP1 = void*>
        int64_t Seek(int64_t offset, TP1 origin) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Seek"), {"offset", "origin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(offset, origin);
        }
        void set_Position(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Position"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetLength(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLength"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* UncompressBuffer(::BNM::Structures::Mono::Array<uint8_t>* compressed, ::BNM::IL2CPP::Il2CppObject* decompressor) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("UncompressBuffer"), {"compressed", "decompressor"});
            return _m.Call(compressed, decompressor);
        }
        static ::BNM::Structures::Mono::String* UncompressString(::BNM::Structures::Mono::Array<uint8_t>* compressed, ::BNM::IL2CPP::Il2CppObject* decompressor) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("UncompressString"), {"compressed", "decompressor"});
            return _m.Call(compressed, decompressor);
        }
        void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, offset, count);
        }
    };
}
