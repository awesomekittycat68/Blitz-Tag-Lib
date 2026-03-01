#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag_CosmeticSystem/CosmeticAttachInfo.hpp"

namespace GlobalNamespace {
    struct HeadModel__CosmeticPartLoadInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HeadModel").GetInnerClass("_CosmeticPartLoadInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::CosmeticAttachInfo GetAttachInfo() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAttachInfo> _field = GetClass().GetField(O("attachInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLoadOp() {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadOp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("xform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachInfo(::GorillaTag_CosmeticSystem::CosmeticAttachInfo value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAttachInfo> _field = GetClass().GetField(O("attachInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadOp(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("loadOp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playFabId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("xform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
