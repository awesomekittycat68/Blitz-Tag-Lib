#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CosmeticsLegacyV1Info : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticsLegacyV1Info");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int k_bodyDockPositions_allObjects_length = 224;
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Array<int>*>* GetKPlayFabIdToBodyDockPositionsAllObjectsIndexes() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::Array<int>*>*> _field = GetClass().GetField(O("_k_playFabId_to_bodyDockPositions_allObjects_indexes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetKOldPacks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("k_oldPacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetKPacks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("k_packs"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetKSpecial() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("k_special"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetKUnused() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("k_unused"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetKV1DisplayNamesToPlayFabIds() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("k_v1DisplayNames_to_playFabIds"));
            return _field.Get();
        }
        static bool TryGetBodyDockAllObjectsIndexes(::BNM::Structures::Mono::String* playFabId, int& bdAllIndexes) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBodyDockAllObjectsIndexes"), {"playFabId", "bdAllIndexes"});
            return _m.Call(playFabId, &bdAllIndexes);
        }
        static bool TryGetPlayFabId(::BNM::Structures::Mono::String* unityItemId, ::BNM::Structures::Mono::String*& playFabId, bool logErrors) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetPlayFabId"), {"unityItemId", "playFabId", "logErrors"});
            return _m.Call(unityItemId, &playFabId, logErrors);
        }
        static bool TryGetPlayFabId(::BNM::Structures::Mono::String* unityItemId, ::BNM::Structures::Mono::String* unityDisplayName, ::BNM::Structures::Mono::String* unityOverrideDisplayName, ::BNM::Structures::Mono::String*& playFabId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetPlayFabId"), {"unityItemId", "unityDisplayName", "unityOverrideDisplayName", "playFabId"});
            return _m.Call(unityItemId, unityDisplayName, unityOverrideDisplayName, &playFabId);
        }
    };
}
