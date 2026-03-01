#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ProfilesModels {
    struct EntityProfileBody : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ProfilesModels", "EntityProfileBody");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetAvatarUrl() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AvatarUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCreated() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ProfilesModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_ProfilesModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetEntityChain() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EntityChain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetExperimentVariants() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("ExperimentVariants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityProfileFileMetadata*>* GetFiles() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityProfileFileMetadata*>*> _field = GetClass().GetField(O("Files"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLanguage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Language"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLeaderboardMetadata() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LeaderboardMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ProfilesModels::EntityLineage* GetLineage() {
            static BNM::Field<::PlayFab_ProfilesModels::EntityLineage*> _field = GetClass().GetField(O("Lineage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityDataObject*>* GetObjects() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityDataObject*>*> _field = GetClass().GetField(O("Objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>* GetPermissions() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>*> _field = GetClass().GetField(O("Permissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityStatisticValue*>* GetStatistics() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityStatisticValue*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVersionNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("VersionNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAvatarUrl(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("AvatarUrl"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreated(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Created"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisplayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntity(::PlayFab_ProfilesModels::EntityKey* value) {
            static BNM::Field<::PlayFab_ProfilesModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEntityChain(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("EntityChain"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExperimentVariants(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("ExperimentVariants"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFiles(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityProfileFileMetadata*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityProfileFileMetadata*>*> _field = GetClass().GetField(O("Files"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLanguage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Language"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaderboardMetadata(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LeaderboardMetadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineage(::PlayFab_ProfilesModels::EntityLineage* value) {
            static BNM::Field<::PlayFab_ProfilesModels::EntityLineage*> _field = GetClass().GetField(O("Lineage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjects(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityDataObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityDataObject*>*> _field = GetClass().GetField(O("Objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissions(::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ProfilesModels::EntityPermissionStatement*>*> _field = GetClass().GetField(O("Permissions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatistics(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityStatisticValue*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_ProfilesModels::EntityStatisticValue*>*> _field = GetClass().GetField(O("Statistics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVersionNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("VersionNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
