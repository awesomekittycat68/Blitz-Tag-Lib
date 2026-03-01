#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Ionic_Crc {
    struct CrcCalculatorStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Crc", "CrcCalculatorStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

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
        int GetCrc() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Crc"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetLeaveOpen() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_LeaveOpen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLeaveOpen(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LeaveOpen"));
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
        int64_t GetTotalBytesSlurped() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_TotalBytesSlurped"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Ionic_Crc::CRC32* GetCrc32() {
            static BNM::Field<::Ionic_Crc::CRC32*> _field = GetClass().GetField(O("_Crc32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetInnerStream() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_innerStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeaveOpen_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leaveOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetLengthLimit() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_lengthLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int64_t GetUnsetLengthLimit() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("UnsetLengthLimit"));
            return _field.Get();
        }
        void SetCrc32(::Ionic_Crc::CRC32* value) {
            static BNM::Field<::Ionic_Crc::CRC32*> _field = GetClass().GetField(O("_Crc32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInnerStream(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_innerStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaveOpen_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leaveOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthLimit(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_lengthLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Close() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Close"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        int get_Crc() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Crc"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_LeaveOpen() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_LeaveOpen"));
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
        int64_t get_TotalBytesSlurped() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_TotalBytesSlurped"));
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
        void set_LeaveOpen(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LeaveOpen"), {"value"});
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
        void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, offset, count);
        }
    };
}
