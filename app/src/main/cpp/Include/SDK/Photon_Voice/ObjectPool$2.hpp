#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename TType, typename TInfo>
    struct ObjectPool$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "ObjectPool`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        TInfo GetInfo() {
            static BNM::Method<TInfo> _method = GetClass().GetMethod(O("get_Info"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetLogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_LogPrefix"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCapacity() {
            static BNM::Field<int> _field = GetClass().GetField(O("capacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<TType>* GetFreeObj() {
            static BNM::Field<::BNM::Structures::Mono::Array<TType>*> _field = GetClass().GetField(O("freeObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        TInfo GetInfo_f() {
            static BNM::Field<TInfo> _field = GetClass().GetField(O("info"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInited() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPos() {
            static BNM::Field<int> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCapacity(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("capacity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFreeObj(::BNM::Structures::Mono::Array<TType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<TType>*> _field = GetClass().GetField(O("freeObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfo(TInfo value) {
            static BNM::Field<TInfo> _field = GetClass().GetField(O("info"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInited(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPos(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        TType AcquireOrCreate() {
            static BNM::Method<TType> _m = GetClass().GetMethod(O("AcquireOrCreate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        TType AcquireOrCreate(TInfo info) {
            static BNM::Method<TType> _m = GetClass().GetMethod(O("AcquireOrCreate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info);
        }
        TType createObject(TInfo info) {
            static BNM::Method<TType> _m = GetClass().GetMethod(O("createObject"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(info);
        }
        void destroyObject(TType obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("destroyObject"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        TInfo get_Info() {
            static BNM::Method<TInfo> _m = GetClass().GetMethod(O("get_Info"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_LogPrefix() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_LogPrefix"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool infosMatch(TInfo i0, TInfo i1) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("infosMatch"), {"i0", "i1"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(i0, i1);
        }
        void Init(TInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        bool Release(TType obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Release"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool Release(TType obj, TInfo objInfo) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Release"), {"obj", "objInfo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, objInfo);
        }
    };
}
