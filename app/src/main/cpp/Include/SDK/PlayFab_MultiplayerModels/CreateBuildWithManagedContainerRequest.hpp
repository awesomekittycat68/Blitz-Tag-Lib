#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AzureVmSize.hpp"
#include "ContainerFlavor.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct CreateBuildWithManagedContainerRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "CreateBuildWithManagedContainerRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBuildName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BuildName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetContainerFlavor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ContainerFlavor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::AssetReferenceParams*>* GetGameAssetReferences() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::AssetReferenceParams*>*> _field = GetClass().GetField(O("GameAssetReferences"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::GameCertificateReferenceParams*>* GetGameCertificateReferences() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::GameCertificateReferenceParams*>*> _field = GetClass().GetField(O("GameCertificateReferences"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGameWorkingDirectory() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("GameWorkingDirectory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::InstrumentationConfiguration* GetInstrumentationConfiguration() {
            static BNM::Field<::PlayFab_MultiplayerModels::InstrumentationConfiguration*> _field = GetClass().GetField(O("InstrumentationConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* GetMetadata() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMultiplayerServerCountPerVm() {
            static BNM::Field<int> _field = GetClass().GetField(O("MultiplayerServerCountPerVm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::Port*>* GetPorts() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::Port*>*> _field = GetClass().GetField(O("Ports"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildRegionParams*>* GetRegionConfigurations() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildRegionParams*>*> _field = GetClass().GetField(O("RegionConfigurations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStartMultiplayerServerCommand() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StartMultiplayerServerCommand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetVmSize() {
            static BNM::Field<void*> _field = GetClass().GetField(O("VmSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BuildName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContainerFlavor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ContainerFlavor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameAssetReferences(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::AssetReferenceParams*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::AssetReferenceParams*>*> _field = GetClass().GetField(O("GameAssetReferences"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameCertificateReferences(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::GameCertificateReferenceParams*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::GameCertificateReferenceParams*>*> _field = GetClass().GetField(O("GameCertificateReferences"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameWorkingDirectory(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("GameWorkingDirectory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstrumentationConfiguration(::PlayFab_MultiplayerModels::InstrumentationConfiguration* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::InstrumentationConfiguration*> _field = GetClass().GetField(O("InstrumentationConfiguration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetadata(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("Metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMultiplayerServerCountPerVm(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MultiplayerServerCountPerVm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPorts(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::Port*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::Port*>*> _field = GetClass().GetField(O("Ports"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionConfigurations(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildRegionParams*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::BuildRegionParams*>*> _field = GetClass().GetField(O("RegionConfigurations"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartMultiplayerServerCommand(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StartMultiplayerServerCommand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVmSize(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("VmSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
