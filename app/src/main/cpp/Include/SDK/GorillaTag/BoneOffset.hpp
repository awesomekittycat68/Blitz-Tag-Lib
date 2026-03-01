#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "XformOffset.hpp"
#include "../GorillaTag_CosmeticSystem/GTHardCodedBones_SturdyEBone.hpp"

namespace GorillaTag {
    struct BoneOffset : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "BoneOffset");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetPos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_pos"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Quaternion GetRot() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _method = GetClass().GetMethod(O("get_rot"));
            return _method.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetScale() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _method = GetClass().GetMethod(O("get_scale"));
            return _method.Call();
        }
        ::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone GetBone() {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone> _field = GetClass().GetField(O("bone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag::BoneOffset GetIdentity() {
            static BNM::Field<::GorillaTag::BoneOffset> _field = GetClass().GetField(O("Identity"));
            return _field.Get();
        }
        ::GorillaTag::XformOffset GetOffset() {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBone(::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone> _field = GetClass().GetField(O("bone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(::GorillaTag::XformOffset value) {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Unity::Vector3 get_pos() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_pos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion get_rot() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("get_rot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 get_scale() {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("get_scale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
