#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FlushType.hpp"

namespace Ionic_Zlib {
    struct GZipStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "GZipStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBufferSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBufferSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        ::BNM::Structures::Mono::String* GetComment() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_Comment"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetComment(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Comment"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCrc32() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Crc32"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetFileName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_FileName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFileName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FileName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Ionic_Zlib::FlushType GetFlushMode() {
            static BNM::Method<::Ionic_Zlib::FlushType> _method = GetClass().GetMethod(O("get_FlushMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFlushMode(::Ionic_Zlib::FlushType value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FlushMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
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
        int64_t GetTotalIn() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_TotalIn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetTotalOut() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_TotalOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Ionic_Zlib::ZlibBaseStream* GetBaseStream() {
            static BNM::Field<::Ionic_Zlib::ZlibBaseStream*> _field = GetClass().GetField(O("_baseStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetComment_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_Comment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrc32_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Crc32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisposed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFileName_f() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_FileName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstReadDone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_firstReadDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeaderByteCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("_headerByteCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetUnixEpoch() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_unixEpoch"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetIso8859dash1() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("iso8859dash1"));
            return _field.Get();
        }
        void* GetLastModified() {
            static BNM::Field<void*> _field = GetClass().GetField(O("LastModified"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBaseStream(::Ionic_Zlib::ZlibBaseStream* value) {
            static BNM::Field<::Ionic_Zlib::ZlibBaseStream*> _field = GetClass().GetField(O("_baseStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComment_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_Comment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrc32(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Crc32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_disposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFileName_fs(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_FileName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstReadDone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_firstReadDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeaderByteCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_headerByteCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastModified(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("LastModified"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* CompressBuffer(::BNM::Structures::Mono::Array<uint8_t>* b) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("CompressBuffer"), {"b"});
            return _m.Call(b);
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* CompressString(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("CompressString"), {"s"});
            return _m.Call(s);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        int EmitHeader() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EmitHeader"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_BufferSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BufferSize"));
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
        ::BNM::Structures::Mono::String* get_Comment() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_Comment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Crc32() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Crc32"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_FileName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_FileName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Ionic_Zlib::FlushType get_FlushMode() {
            static BNM::Method<::Ionic_Zlib::FlushType> _m = GetClass().GetMethod(O("get_FlushMode"));
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
        int64_t get_TotalIn() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_TotalIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_TotalOut() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_TotalOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Read(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Read"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, offset, count);
        }
        template <typename TP1 = void*>
        int64_t Seek(int64_t offset, TP1 origin) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Seek"), {"offset", "origin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(offset, origin);
        }
        void set_BufferSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BufferSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Comment(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Comment"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FileName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FileName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FlushMode(::Ionic_Zlib::FlushType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FlushMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
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
        static ::BNM::Structures::Mono::Array<uint8_t>* UncompressBuffer(::BNM::Structures::Mono::Array<uint8_t>* compressed) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("UncompressBuffer"), {"compressed"});
            return _m.Call(compressed);
        }
        static ::BNM::Structures::Mono::String* UncompressString(::BNM::Structures::Mono::Array<uint8_t>* compressed) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("UncompressString"), {"compressed"});
            return _m.Call(compressed);
        }
        void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, offset, count);
        }
    };
}
