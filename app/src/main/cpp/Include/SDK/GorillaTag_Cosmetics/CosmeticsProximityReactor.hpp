#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticsProximityReactor_GorillaBodyPart.hpp"
#include "CosmeticsProximityReactor_ItemKind.hpp"
#include "../GorillaTag_CosmeticSystem/ECosmeticSelectSide.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticsProximityReactor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticsProximityReactor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide GetCosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _method = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CosmeticSelectedSide"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsBelow() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsBelow"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsMatched() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsMatched"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsMatched(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsMatched"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSpawned() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSpawned(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSpawned"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::VRRig* GetMyRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_MyRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MyRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::RubberDuckEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionSetting*>* GetBlocks() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*> _field = GetClass().GetField(O("blocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart GetGorillaBodyParts() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart> _field = GetClass().GetField(O("gorillaBodyParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIgnoreSameCosmeticInstances() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreSameCosmeticInstances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticsProximityReactor_ItemKind GetItemKind() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_ItemKind> _field = GetClass().GetField(O("itemKind"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayFabID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayFabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::RubberDuckEvents* value) {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlocks(::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionSetting*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor_InteractionSetting*>*> _field = GetClass().GetField(O("blocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaBodyParts(::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart> _field = GetClass().GetField(O("gorillaBodyParts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoreSameCosmeticInstances(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreSameCosmeticInstances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetItemKind(::GorillaTag_Cosmetics::CosmeticsProximityReactor_ItemKind value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactor_ItemKind> _field = GetClass().GetField(O("itemKind"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayFabID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("PlayFabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AcceptsAnySource() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AcceptsAnySource"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool AcceptsThisSource(::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart kind) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AcceptsThisSource"), {"kind"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(kind);
        }
        ::GorillaTag_CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() {
            static BNM::Method<::GorillaTag_CosmeticSystem::ECosmeticSelectSide> _m = GetClass().GetMethod(O("get_CosmeticSelectedSide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsBelow() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsBelow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsMatched() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsMatched"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSpawned() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSpawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::VRRig* get_MyRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_MyRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetCosmeticPairThresholdWith(::GorillaTag_Cosmetics::CosmeticsProximityReactor* other, bool& any) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetCosmeticPairThresholdWith"), {"other", "any"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other, &any);
        }
        float GetSourceThresholdFor(::GorillaTag_Cosmetics::CosmeticsProximityReactor* gorillaBody, bool& any) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSourceThresholdFor"), {"gorillaBody", "any"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gorillaBody, &any);
        }
        void* GetTypes() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetTypes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasAnyCosmeticMatch() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyCosmeticMatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasAnyGorillaBodyPartMatch() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyGorillaBodyPartMatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsCosmeticItem() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCosmeticItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsGorillaBody() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGorillaBody"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnCosmeticAboveAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCosmeticAboveAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCosmeticBelowWith(::GorillaTag_Cosmetics::CosmeticsProximityReactor* other, ::BNM::Structures::Unity::Vector3 contact) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCosmeticBelowWith"), {"other", "contact"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other, contact);
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSourceAboveAll() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSourceAboveAll"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSourceBelow(::BNM::Structures::Unity::Vector3 contact, ::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart kind, ::GlobalNamespace::VRRig* sourceRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSourceBelow"), {"contact", "kind", "sourceRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(contact, kind, sourceRig);
        }
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void RefreshAggregateMatched() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshAggregateMatched"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_CosmeticSelectedSide(::GorillaTag_CosmeticSystem::ECosmeticSelectSide value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CosmeticSelectedSide"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsMatched(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsMatched"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSpawned(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSpawned"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MyRig(::GlobalNamespace::VRRig* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MyRig"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WhileCosmeticBelowWith(::GorillaTag_Cosmetics::CosmeticsProximityReactor* other, ::BNM::Structures::Unity::Vector3 contact) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WhileCosmeticBelowWith"), {"other", "contact"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other, contact);
        }
        void WhileSourceBelow(::BNM::Structures::Unity::Vector3 contact, ::GorillaTag_Cosmetics::CosmeticsProximityReactor_GorillaBodyPart kind, ::GlobalNamespace::VRRig* sourceRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WhileSourceBelow"), {"contact", "kind", "sourceRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(contact, kind, sourceRig);
        }
    };
}
