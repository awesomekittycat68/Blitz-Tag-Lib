#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticAttachInfo.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticInfoV2.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticPart.hpp"

namespace GlobalNamespace {
    struct CosmeticsV2Spawner_Dirty_LoadOpInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticsV2Spawner_Dirty").GetInnerClass("LoadOpInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::CosmeticAttachInfo GetAttachInfo() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAttachInfo> _field = GetClass().GetField(O("attachInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticInfoV2 GetCosmeticInfoV2() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticInfoV2> _field = GetClass().GetField(O("cosmeticInfoV2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLoadOp() {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadOp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticPart GetPart() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticPart> _field = GetClass().GetField(O("part"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPartIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("partIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetResultGObj() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("resultGObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVrRigIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("vrRigIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadOp(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadOp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultGObj(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("resultGObj"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
