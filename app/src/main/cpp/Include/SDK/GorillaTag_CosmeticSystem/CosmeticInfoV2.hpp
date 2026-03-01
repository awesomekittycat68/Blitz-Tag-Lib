#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/ECosmeticPartType.hpp"
#include "../GlobalNamespace/StringEnum$1.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticCategory.hpp"
#include "CosmeticAnchorAntiIntersectOffsets.hpp"
#include "CosmeticPart.hpp"

namespace GorillaTag_CosmeticSystem {
    struct CosmeticInfoV2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "CosmeticInfoV2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* holdableParts_infoBoxShortMsg = ""Holdable Parts" must have a Holdable component (or inherits like TransferrableObject).";
        static constexpr const char* holdableParts_infoBoxDetailedMsg = ""Holdable Parts" must have a Holdable component (or inherits like TransferrableObject).

Holdables are prefabs that have Holdable components. The prefab asset's transform will be moved between the listed 
 attach points on "Gorilla Player Networked.prefab" when grabbed by the player 
";
        static constexpr const char* functionalParts_infoBoxShortMsg = ""Wearable Parts" will be attached to "Gorilla Player Networked.prefab" instances.";
        static constexpr const char* functionalParts_infoBoxDetailedMsg = ""Wearable Parts" will be attached to "Gorilla Player Networked.prefab" instances.

These individual parts which also handle the core functionality of the cosmetic. In most cases there will only be one part, there can be multiple parts for cases like rings which might be on both left and right hands.

These parts will be parented to the bones of  "Gorilla Player Networked.prefab" instances which includes the VRRig component.

If a "First Person View" part or "Local Rig Part" is set it will be enabled instead of the wearable parts for the local player";
        static constexpr const char* wardrobeParts_infoBoxShortMsg = ""Wardrobe Parts" will be attached to "Head Model.prefab" instances.";
        static constexpr const char* wardrobeParts_infoBoxDetailedMsg = ""Wardrobe Parts" will be attached to "Head Model.prefab" instances.

These parts should be static meshes not skinned and not have any scripts attached. They should only be simple visual representations.

These prefabs are shown on the satellite wardrobe, and in the store (if "Store Parts" is left empty)";
        static constexpr const char* storeParts_infoBoxShortMsg = ""Store Parts" are spawned into the Dynamic Cosmetic Stands in city.";
        static constexpr const char* storeParts_infoBoxDetailedMsg = ""Store Parts" are spawned into the Dynamic Cosmetic Stands in city.
Store parts only need to be specified if the store display should be different than the wardrobe display";
        static constexpr const char* firstPersonViewParts_infoBoxShortMsg = ""First Person View Parts" will be attached to the local monke's camera.
First person parts are enabled instead of "Wearable Parts" for the local player";
        static constexpr const char* firstPersonViewParts_infoBoxDetailedMsg = ""First Person View Parts" will be attached to the local monke's camera.
First person parts are enabled instead of "Wearable Parts" for the local player
These are used for any peripheral view meshes on the No Mirror layer, usually on HAT or FACE items";
        static constexpr const char* localRigParts_infoBoxShortMsg = ""Local Mirror Parts" will be attached to the local player's rig instead of "Wearable Parts".";
        static constexpr const char* localRigParts_infoBoxDetailedMsg = ""Local Mirror Parts" will be attached to the local player's rig instead of "Wearable Parts".
These objects can be used in addition to first person view parts.
These can be used for mirror view meshes (usually HAT or FACE items)
Any item with GTPosRotConstraints should be parented to the rig and not the camera";
        bool GetHasFirstPersonViewParts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasFirstPersonViewParts"));
            return _method.Call();
        }
        bool GetHasFunctionalParts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasFunctionalParts"));
            return _method.Call();
        }
        bool GetHasHoldableParts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasHoldableParts"));
            return _method.Call();
        }
        bool GetHasLocalRigParts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasLocalRigParts"));
            return _method.Call();
        }
        bool GetHasStoreParts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasStoreParts"));
            return _method.Call();
        }
        bool GetHasWardrobeParts() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasWardrobeParts"));
            return _method.Call();
        }
        ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets GetAnchorAntiIntersectOffsets() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("anchorAntiIntersectOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDebugCosmeticSOName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugCosmeticSOName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* GetFirstPersonViewParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("firstPersonViewParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* GetFunctionalParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("functionalParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHideWardrobeMannequin() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hideWardrobeMannequin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* GetHoldableParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("holdableParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetIcon() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHoldable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHoldable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsThrowable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isThrowable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* GetLocalRigParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("localRigParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playFabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_CosmeticSystem::SeasonSO* GetSeason() {
            static BNM::Field<::GorillaTag_CosmeticSystem::SeasonSO*> _field = GetClass().GetField(O("season"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticSO*>* GetSetCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticSO*>*> _field = GetClass().GetField(O("setCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* GetStoreParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("storeParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUsesBothHandSlots() {
            static BNM::Field<bool> _field = GetClass().GetField(O("usesBothHandSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* GetWardrobeParts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("wardrobeParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchorAntiIntersectOffsets(::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiIntersectOffsets> _field = GetClass().GetField(O("anchorAntiIntersectOffsets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugCosmeticSOName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugCosmeticSOName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstPersonViewParts(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("firstPersonViewParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionalParts(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("functionalParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHideWardrobeMannequin(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hideWardrobeMannequin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoldableParts(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("holdableParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIcon(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("icon"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHoldable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHoldable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsThrowable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isThrowable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalRigParts(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("localRigParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playFabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeason(::GorillaTag_CosmeticSystem::SeasonSO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::SeasonSO*> _field = GetClass().GetField(O("season"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetCosmetics(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticSO*>*> _field = GetClass().GetField(O("setCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStoreParts(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("storeParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsesBothHandSlots(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("usesBothHandSlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWardrobeParts(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticPart>*> _field = GetClass().GetField(O("wardrobeParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _OnAfterDeserialize_InitializePartsArray(::GorillaTag_CosmeticSystem::CosmeticPart& parts, ::GlobalNamespace::ECosmeticPartType partType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnAfterDeserialize_InitializePartsArray"), {"parts", "partType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&parts, partType);
        }
        bool get_hasFirstPersonViewParts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasFirstPersonViewParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasFunctionalParts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasFunctionalParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasHoldableParts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasHoldableParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasLocalRigParts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasLocalRigParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasStoreParts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasStoreParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasWardrobeParts() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasWardrobeParts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
