#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticAnchorAntiClipEntry.hpp"

namespace GorillaTag_CosmeticSystem {
    struct CosmeticAnchorAntiIntersectOffsets : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "CosmeticAnchorAntiIntersectOffsets");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetBadge() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("badge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetBuilderWatch() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("builderWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetChest() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("chest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetFriendshipBraceletLeft() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("friendshipBraceletLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetFriendshipBraceletRight() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("friendshipBraceletRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetHuntComputer() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("huntComputer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetIdentity() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("Identity"));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetLeftArm() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("leftArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetNameTag() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("nameTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetRightArm() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("rightArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBadge(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("badge"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderWatch(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("builderWatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetChest(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("chest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletLeft(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("friendshipBraceletLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendshipBraceletRight(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("friendshipBraceletRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHuntComputer(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("huntComputer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftArm(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("leftArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameTag(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("nameTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightArm(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("rightArm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
