#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTHardCodedBones_EBone.hpp"

namespace GorillaTag_CosmeticSystem {
    struct GTHardCodedBones_SturdyEBone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "GTHardCodedBones").GetInnerClass("SturdyEBone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone GetBone() {
            static BNM::Method<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone> _method = GetClass().GetMethod(O("get_Bone"));
            return _method.Call();
        }
        void SetBone(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Bone"));
            _method.Call(value);
        }
        ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone GetBone_f() {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone> _field = GetClass().GetField(O("_bone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBoneName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_boneName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBone_fs(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone> _field = GetClass().GetField(O("_bone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoneName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_boneName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone get_Bone() {
            static BNM::Method<::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone> _m = GetClass().GetMethod(O("get_Bone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Bone(::GorillaTag_CosmeticSystem::GTHardCodedBones_EBone value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Bone"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
