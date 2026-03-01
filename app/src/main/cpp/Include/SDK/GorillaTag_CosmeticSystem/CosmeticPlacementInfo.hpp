#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/XformOffset.hpp"
#include "GTHardCodedBones_SturdyEBone.hpp"

namespace GorillaTag_CosmeticSystem {
    struct CosmeticPlacementInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "CosmeticPlacementInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::XformOffset GetOffset() {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone GetParentBone() {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone> _field = GetClass().GetField(O("parentBone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOffset(::GorillaTag::XformOffset value) {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentBone(::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::GTHardCodedBones_SturdyEBone> _field = GetClass().GetField(O("parentBone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
