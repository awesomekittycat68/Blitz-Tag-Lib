#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FriendDisplay_ButtonState.hpp"

namespace GlobalNamespace {
    struct FriendDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInRemoveMode() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_InRemoveMode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetButtonActiveMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_buttonActiveMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetButtonAlertMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_buttonAlertMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetButtonDefaultMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_buttonDefaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableDelayButton*>* GetFriendCardButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableDelayButton*>*> _field = GetClass().GetField(O("_friendCardButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetFriendCardButtonText() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_friendCardButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetJoinButtonRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("_joinButtonRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FriendCard* GetLocalPlayerCard() {
            static BNM::Field<::GlobalNamespace::FriendCard*> _field = GetClass().GetField(O("_localPlayerCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetLocalPlayerFullyHiddenButton() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_localPlayerFullyHiddenButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetLocalPlayerFullyVisibleButton() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_localPlayerFullyVisibleButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetLocalPlayerPublicOnlyButton() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_localPlayerPublicOnlyButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetPageButtonActiveMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_pageButtonActiveMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetPageButtonAlerttMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_pageButtonAlerttMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetPageButtonDefaultMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_pageButtonDefaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetRemoveFriendButton() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_removeFriendButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCardsPerPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("cardsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::FriendCard*>* GetFriendCards() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FriendCard*>*> _field = GetClass().GetField(O("friendCards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGridDimension() {
            static BNM::Field<int> _field = GetClass().GetField(O("gridDimension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGridHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("gridHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGridRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gridRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGridWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("gridWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInRemoveMode_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inRemoveMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLocalPlayerAtDisplay() {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerAtDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPageButtonActiveZPos() {
            static BNM::Field<float> _field = GetClass().GetField(O("pageButtonActiveZPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPageButtonInactiveZPos() {
            static BNM::Field<float> _field = GetClass().GetField(O("pageButtonInactiveZPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::MeshRenderer*>* GetPageButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("PageButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalPages() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TriggerEventNotifier* GetTriggerNotifier() {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("triggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonActiveMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_buttonActiveMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonAlertMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_buttonAlertMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonDefaultMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_buttonDefaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendCardButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableDelayButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableDelayButton*>*> _field = GetClass().GetField(O("_friendCardButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendCardButtonText(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_friendCardButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinButtonRenderers(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("_joinButtonRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerCard(::GlobalNamespace::FriendCard* value) {
            static BNM::Field<::GlobalNamespace::FriendCard*> _field = GetClass().GetField(O("_localPlayerCard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerFullyHiddenButton(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_localPlayerFullyHiddenButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerFullyVisibleButton(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_localPlayerFullyVisibleButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerPublicOnlyButton(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_localPlayerPublicOnlyButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtonActiveMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_pageButtonActiveMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtonAlerttMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_pageButtonAlerttMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtonDefaultMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("_pageButtonDefaultMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveFriendButton(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("_removeFriendButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCardsPerPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cardsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFriendCards(::BNM::Structures::Mono::Array<::GlobalNamespace::FriendCard*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FriendCard*>*> _field = GetClass().GetField(O("friendCards"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridDimension(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gridDimension"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gridHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gridRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gridWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInRemoveMode(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inRemoveMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPlayerAtDisplay(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("localPlayerAtDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtonActiveZPos(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pageButtonActiveZPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtonInactiveZPos(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pageButtonInactiveZPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageButtons(::BNM::Structures::Mono::Array<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::MeshRenderer*>*> _field = GetClass().GetField(O("PageButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalPages(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTriggerNotifier(::GlobalNamespace::TriggerEventNotifier* value) {
            static BNM::Field<::GlobalNamespace::TriggerEventNotifier*> _field = GetClass().GetField(O("triggerNotifier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClearFriendCards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearFriendCards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLocalPlayerCard() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLocalPlayerCard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearPageButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPageButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_InRemoveMode() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_InRemoveMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GoToFriendPage(int currentPage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GoToFriendPage"), {"currentPage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentPage);
        }
        void InitFriendCards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitFriendCards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void InitLocalPlayerCard() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitLocalPlayerCard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LocalPlayerFullyHiddenPress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalPlayerFullyHiddenPress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LocalPlayerFullyVisiblePress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalPlayerFullyVisiblePress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LocalPlayerPublicOnlyPress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LocalPlayerPublicOnlyPress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGetFriendsReceived(::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* friendsList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetFriendsReceived"), {"friendsList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendsList);
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateFriendCards(::BNM::Structures::Mono::List<::GlobalNamespace::FriendBackendController_Friend*>* friendsList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateFriendCards"), {"friendsList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(friendsList);
        }
        void PopulateLocalPlayerCard() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateLocalPlayerCard"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RandomizeFriendCards() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RandomizeFriendCards"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetButtonAppearance(::MeshRenderer* buttonRenderer, bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetButtonAppearance"), {"buttonRenderer", "active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonRenderer, active);
        }
        void SetButtonAppearance(::MeshRenderer* buttonRenderer, ::GlobalNamespace::FriendDisplay_ButtonState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetButtonAppearance"), {"buttonRenderer", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonRenderer, state);
        }
        void SetPageButtonAppearance(::MeshRenderer* buttonRenderer, bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPageButtonAppearance"), {"buttonRenderer", "active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonRenderer, active);
        }
        void SetPageButtonAppearance(::MeshRenderer* buttonRenderer, ::GlobalNamespace::FriendDisplay_ButtonState state) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPageButtonAppearance"), {"buttonRenderer", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonRenderer, state);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleRemoveFriendMode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleRemoveFriendMode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TriggerEntered(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerEntered"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void TriggerExited(::GlobalNamespace::TriggerEventNotifier* notifier, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TriggerExited"), {"notifier", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(notifier, other);
        }
        void UpdateLocalPlayerPrivacyButtons() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLocalPlayerPrivacyButtons"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePageButtons(int selectedPage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePageButtons"), {"selectedPage"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(selectedPage);
        }
    };
}
