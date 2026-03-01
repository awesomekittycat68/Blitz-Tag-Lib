#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsTerminal_ScreenType.hpp"

namespace GlobalNamespace {
    struct CustomMapsTerminal : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsTerminal");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CustomMapsTerminal* GetInstance() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int NO_DRIVER_ID = -2;
        int GetCurrentScreen() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentScreen"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDriver() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDriver"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetLocalModDetailsID() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_LocalModDetailsID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLocalPlayerID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LocalPlayerID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::CustomMapsTerminal_ScreenType GetCachedCurrentScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal_ScreenType> _field = GetClass().GetField(O("cachedCurrentScreen"));
            return _field.Get();
        }
        static int GetCachedLocalPlayerID() {
            static BNM::Field<int> _field = GetClass().GetField(O("cachedLocalPlayerID"));
            return _field.Get();
        }
        static int64_t GetCachedModDetailsID() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("cachedModDetailsID"));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsAccessScreen* GetControlAccessScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsAccessScreen*> _field = GetClass().GetField(O("controlAccessScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsAccessScreen* GetDetailsAccessScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsAccessScreen*> _field = GetClass().GetField(O("detailsAccessScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::CustomMapsTerminal* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::GlobalNamespace::CustomMapsTerminal_ScreenType GetLocalCurrentScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal_ScreenType> _field = GetClass().GetField(O("localCurrentScreen"));
            return _field.Get();
        }
        static int GetLocalDriverID() {
            static BNM::Field<int> _field = GetClass().GetField(O("localDriverID"));
            return _field.Get();
        }
        static int64_t GetLocalModDetailsID_f() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("localModDetailsID"));
            return _field.Get();
        }
        ::GlobalNamespace::VirtualStumpSerializer* GetMapTerminalNetworkObject() {
            static BNM::Field<::GlobalNamespace::VirtualStumpSerializer*> _field = GetClass().GetField(O("mapTerminalNetworkObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsDetailsScreen* GetModDetailsScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsDetailsScreen*> _field = GetClass().GetField(O("modDetailsScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsDisplayScreen* GetModDisplayScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsDisplayScreen*> _field = GetClass().GetField(O("modDisplayScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsListScreen* GetModListScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsListScreen*> _field = GetClass().GetField(O("modListScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsSearchScreen* GetModSearchScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsSearchScreen*> _field = GetClass().GetField(O("modSearchScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::CustomMapsTerminal_ScreenType GetPreviousScreen() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal_ScreenType> _field = GetClass().GetField(O("previousScreen"));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsTerminalControlButton* GetTerminalControlButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminalControlButton*> _field = GetClass().GetField(O("terminalControlButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTerminalControllerLabelText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("terminalControllerLabelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTerminalControllerText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("terminalControllerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetCachedCurrentScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal_ScreenType> _field = GetClass().GetField(O("cachedCurrentScreen"));
            _field.Set(value);
        }
        static void SetCachedLocalPlayerID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("cachedLocalPlayerID"));
            _field.Set(value);
        }
        static void SetCachedModDetailsID(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("cachedModDetailsID"));
            _field.Set(value);
        }
        void SetControlAccessScreen(::GlobalNamespace::CustomMapsAccessScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsAccessScreen*> _field = GetClass().GetField(O("controlAccessScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetailsAccessScreen(::GlobalNamespace::CustomMapsAccessScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsAccessScreen*> _field = GetClass().GetField(O("detailsAccessScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CustomMapsTerminal* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetLocalCurrentScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal_ScreenType> _field = GetClass().GetField(O("localCurrentScreen"));
            _field.Set(value);
        }
        static void SetLocalDriverID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("localDriverID"));
            _field.Set(value);
        }
        static void SetLocalModDetailsID(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("localModDetailsID"));
            _field.Set(value);
        }
        void SetMapTerminalNetworkObject(::GlobalNamespace::VirtualStumpSerializer* value) {
            static BNM::Field<::GlobalNamespace::VirtualStumpSerializer*> _field = GetClass().GetField(O("mapTerminalNetworkObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModDetailsScreen(::GlobalNamespace::CustomMapsDetailsScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsDetailsScreen*> _field = GetClass().GetField(O("modDetailsScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModDisplayScreen(::GlobalNamespace::CustomMapsDisplayScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsDisplayScreen*> _field = GetClass().GetField(O("modDisplayScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModListScreen(::GlobalNamespace::CustomMapsListScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsListScreen*> _field = GetClass().GetField(O("modListScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModSearchScreen(::GlobalNamespace::CustomMapsSearchScreen* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsSearchScreen*> _field = GetClass().GetField(O("modSearchScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPreviousScreen(::GlobalNamespace::CustomMapsTerminal_ScreenType value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminal_ScreenType> _field = GetClass().GetField(O("previousScreen"));
            _field.Set(value);
        }
        void SetTerminalControlButton(::GlobalNamespace::CustomMapsTerminalControlButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsTerminalControlButton*> _field = GetClass().GetField(O("terminalControlButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTerminalControllerLabelText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("terminalControllerLabelText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTerminalControllerText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("terminalControllerText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static int get_CurrentScreen() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentScreen"));
            return _m.Call();
        }
        static bool get_IsDriver() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDriver"));
            return _m.Call();
        }
        static int64_t get_LocalModDetailsID() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_LocalModDetailsID"));
            return _m.Call();
        }
        static int get_LocalPlayerID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LocalPlayerID"));
            return _m.Call();
        }
        static int GetDriverID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDriverID"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetDriverNickname() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDriverNickname"));
            return _m.Call();
        }
        void HandleTerminalControlButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTerminalControlButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void HandleTerminalControlStatusChangeRequest(bool lockedStatus, int playerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleTerminalControlStatusChangeRequest"), {"lockedStatus", "playerID"});
            _m.Call(lockedStatus, playerID);
        }
        static void HideTerminalControlScreens() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HideTerminalControlScreens"));
            _m.Call();
        }
        static bool IsLocked() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocked"));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnJoinedRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnJoinedRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedIn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedOut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReturnedToSinglePlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturnedToSinglePlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RefreshDriverNickName() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDriverNickName"));
            _m.Call();
        }
        static void RequestDriverNickNameRefresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDriverNickNameRefresh"));
            _m.Call();
        }
        static void ResetTerminalControl() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTerminalControl"));
            _m.Call();
        }
        static void ReturnFromDetailsScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnFromDetailsScreen"));
            _m.Call();
        }
        static void ReturnFromSearchScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnFromSearchScreen"));
            _m.Call();
        }
        static void SendTerminalStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendTerminalStatus"));
            _m.Call();
        }
        static void SetTerminalControlStatus(bool isLocked, int driverID, bool sendRPC) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTerminalControlStatus"), {"isLocked", "driverID", "sendRPC"});
            _m.Call(isLocked, driverID, sendRPC);
        }
        static void ShowDetailsScreen(::BNM::IL2CPP::Il2CppObject* mod) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowDetailsScreen"), {"mod"});
            _m.Call(mod);
        }
        static void ShowSearchScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowSearchScreen"));
            _m.Call();
        }
        static void ShowTerminalControlScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowTerminalControlScreen"));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateControlScreenForDriver() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateControlScreenForDriver"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UpdateFromDriver(int currentScreen, int64_t modDetailsID, int driverID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFromDriver"), {"currentScreen", "modDetailsID", "driverID"});
            _m.Call(currentScreen, modDetailsID, driverID);
        }
        void ValidateLocalStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateLocalStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
