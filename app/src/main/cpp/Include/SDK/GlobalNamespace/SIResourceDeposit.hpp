#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_LimitedDepositType.hpp"
#include "SIResource_ResourceType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SIResourceDeposit : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResourceDeposit");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SuperInfectionManager* GetSIManager() {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _method = GetClass().GetMethod(O("get_SIManager"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetDisplayResources() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("_displayResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDepositBin() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("depositBin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDepositImage() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("depositImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetDepositText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("depositText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResource_LimitedDepositType GetNetLimitedDepositType() {
            static BNM::Field<::GlobalNamespace::SIResource_LimitedDepositType> _field = GetClass().GetField(O("netLimitedDepositType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIPlayer* GetNetPlayer() {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("netPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResource_ResourceType GetNetResourceType() {
            static BNM::Field<::GlobalNamespace::SIResource_ResourceType> _field = GetClass().GetField(O("netResourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNetShowPopup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("netShowPopup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DisableGameObjectDelayed* GetPopupScreen() {
            static BNM::Field<::GlobalNamespace::DisableGameObjectDelayed*> _field = GetClass().GetField(O("popupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>* GetQuestDisplays() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>*> _field = GetClass().GetField(O("questDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetResourceDisplays() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("resourceDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Sprite*>* GetResourceImageSprites() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Sprite*>*> _field = GetClass().GetField(O("resourceImageSprites"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SuperInfection* GetSuperInfection() {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("superInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisplayResources(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("_displayResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositBin(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("depositBin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositImage(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("depositImage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepositText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("depositText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetLimitedDepositType(::GlobalNamespace::SIResource_LimitedDepositType value) {
            static BNM::Field<::GlobalNamespace::SIResource_LimitedDepositType> _field = GetClass().GetField(O("netLimitedDepositType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetPlayer(::GlobalNamespace::SIPlayer* value) {
            static BNM::Field<::GlobalNamespace::SIPlayer*> _field = GetClass().GetField(O("netPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetResourceType(::GlobalNamespace::SIResource_ResourceType value) {
            static BNM::Field<::GlobalNamespace::SIResource_ResourceType> _field = GetClass().GetField(O("netResourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetShowPopup(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("netShowPopup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPopupScreen(::GlobalNamespace::DisableGameObjectDelayed* value) {
            static BNM::Field<::GlobalNamespace::DisableGameObjectDelayed*> _field = GetClass().GetField(O("popupScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuestDisplays(::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIUIPlayerQuestDisplay*>*> _field = GetClass().GetField(O("questDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceDisplays(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("resourceDisplays"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceImageSprites(::BNM::Structures::Mono::Array<::Sprite*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Sprite*>*> _field = GetClass().GetField(O("resourceImageSprites"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuperInfection(::GlobalNamespace::SuperInfection* value) {
            static BNM::Field<::GlobalNamespace::SuperInfection*> _field = GetClass().GetField(O("superInfection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AuthShowPopup(::GlobalNamespace::SIResource* resource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AuthShowPopup"), {"resource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resource);
        }
        bool get_IsAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SuperInfectionManager* get_SIManager() {
            static BNM::Method<::GlobalNamespace::SuperInfectionManager*> _m = GetClass().GetMethod(O("get_SIManager"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LocalShowPopup(::GlobalNamespace::SIPlayer* player, ::GlobalNamespace::SIResource_ResourceType resourceType, ::GlobalNamespace::SIResource_LimitedDepositType limitedDepositType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalShowPopup"), {"player", "resourceType", "limitedDepositType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, resourceType, limitedDepositType);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void ResourceDeposited(::GlobalNamespace::SIResource* resource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResourceDeposited"), {"resource"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(resource);
        }
        void WriteDataPUN(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataPUN"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
    };
}
