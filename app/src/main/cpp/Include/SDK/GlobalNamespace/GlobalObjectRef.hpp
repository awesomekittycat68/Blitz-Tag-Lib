#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GlobalObjectRefType.hpp"

namespace GlobalNamespace {
    struct GlobalObjectRef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GlobalObjectRef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetAssetGUID() {
            static BNM::Field<void*> _field = GetClass().GetField(O("assetGUID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIdentifierType() {
            static BNM::Field<int> _field = GetClass().GetField(O("identifierType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GlobalObjectRefType GetRefType() {
            static BNM::Field<::GlobalNamespace::GlobalObjectRefType> _field = GetClass().GetField(O("refType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetTargetObjectId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("targetObjectId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetTargetPrefabId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("targetPrefabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAssetGUID(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("assetGUID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIdentifierType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("identifierType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefType(::GlobalNamespace::GlobalObjectRefType value) {
            static BNM::Field<::GlobalNamespace::GlobalObjectRefType> _field = GetClass().GetField(O("refType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetObjectId(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("targetObjectId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPrefabId(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("targetPrefabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GlobalNamespace::GlobalObjectRef ObjectToRefSlow(::BNM::IL2CPP::Il2CppObject* target) {
            static BNM::Method<::GlobalNamespace::GlobalObjectRef> _m = GetClass().GetMethod(O("ObjectToRefSlow"), {"target"});
            return _m.Call(target);
        }
        static ::BNM::IL2CPP::Il2CppObject* RefToObjectSlow(::GlobalNamespace::GlobalObjectRef ref) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RefToObjectSlow"), {"ref"});
            return _m.Call(ref);
        }
    };
}
