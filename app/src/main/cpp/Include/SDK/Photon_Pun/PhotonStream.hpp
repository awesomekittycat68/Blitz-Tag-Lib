#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct PhotonStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Count"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsReading() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsReading"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsWriting() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsWriting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsWriting(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsWriting"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCurrentItem() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<void*>* GetReadData() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("readData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetWriteData() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("writeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentItem(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReadData(::BNM::Structures::Mono::Array<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("readData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWriteData(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("writeData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool CopyToListAndClear(::BNM::Structures::Mono::List<void*>* target) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CopyToListAndClear"), {"target"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(target);
        }
        int get_Count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsReading() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsReading"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsWriting() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsWriting"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<void*>* GetWriteStream() {
            static BNM::Method<::BNM::Structures::Mono::List<void*>*> _m = GetClass().GetMethod(O("GetWriteStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* PeekNext() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("PeekNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* ReceiveNext() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReceiveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ResetWriteStream() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetWriteStream"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SendNext(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendNext"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Serialize(bool& myBool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"myBool"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&myBool);
        }
        void Serialize(int& myInt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"myInt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&myInt);
        }
        void Serialize(::BNM::Structures::Mono::String*& value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&value);
        }
        void Serialize(char& value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&value);
        }
        void Serialize(int16_t& value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&value);
        }
        void Serialize(float& obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj);
        }
        void Serialize(::Photon_Realtime::Player*& obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj);
        }
        void Serialize(::BNM::Structures::Unity::Vector3& obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj);
        }
        void Serialize(::BNM::Structures::Unity::Vector2& obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj);
        }
        void Serialize(::BNM::Structures::Unity::Quaternion& obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj);
        }
        void set_IsWriting(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsWriting"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetReadStream(::BNM::Structures::Mono::Array<void*>* incomingData, int pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetReadStream"), {"incomingData", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(incomingData, pos);
        }
        void SetWriteStream(::BNM::Structures::Mono::List<void*>* newWriteData, int pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetWriteStream"), {"newWriteData", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newWriteData, pos);
        }
        ::BNM::Structures::Mono::Array<void*>* ToArray() {
            static BNM::Method<::BNM::Structures::Mono::Array<void*>*> _m = GetClass().GetMethod(O("ToArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
