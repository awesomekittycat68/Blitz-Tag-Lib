#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct StreamBuffer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "StreamBuffer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int DefaultInitialSize = 0;
        int GetAvailable() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Available"));
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
        int GetLength() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Length"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPosition() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPosition(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetBuf() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("buf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLen() {
            static BNM::Field<int> _field = GetClass().GetField(O("len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPos() {
            static BNM::Field<int> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuf(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("buf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLen(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CheckSize(int size) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckSize"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(size);
        }
        void Compact() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Compact"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_Available() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Available"));
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
        int get_Length() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Length"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Position() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Position"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetBuffer() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("GetBuffer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetBufferAndAdvance(int length, int& offset) {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("GetBufferAndAdvance"), {"length", "offset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(length, &offset);
        }
        int Read(::BNM::Structures::Mono::Array<uint8_t>* buffer, int dstOffset, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Read"), {"buffer", "dstOffset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, dstOffset, count);
        }
        uint8_t ReadByte() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("ReadByte"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP1 = void*>
        int64_t Seek(int64_t offset, TP1 origin) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Seek"), {"offset", "origin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(offset, origin);
        }
        void set_Position(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Position"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetCapacityMinimum(int neededSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCapacityMinimum"), {"neededSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(neededSize);
        }
        void SetLength(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLength"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* ToArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* ToArrayFromPos() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("ToArrayFromPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, int srcOffset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "srcOffset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, srcOffset, count);
        }
        void WriteByte(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteByte"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void WriteBytes(uint8_t v0, uint8_t v1) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBytes"), {"v0", "v1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v0, v1);
        }
        void WriteBytes(uint8_t v0, uint8_t v1, uint8_t v2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBytes"), {"v0", "v1", "v2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v0, v1, v2);
        }
        void WriteBytes(uint8_t v0, uint8_t v1, uint8_t v2, uint8_t v3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBytes"), {"v0", "v1", "v2", "v3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v0, v1, v2, v3);
        }
        void WriteBytes(uint8_t v0, uint8_t v1, uint8_t v2, uint8_t v3, uint8_t v4, uint8_t v5, uint8_t v6, uint8_t v7) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteBytes"), {"v0", "v1", "v2", "v3", "v4", "v5", "v6", "v7"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v0, v1, v2, v3, v4, v5, v6, v7);
        }
    };
}
