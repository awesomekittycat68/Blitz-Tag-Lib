#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct StatesGui : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "StatesGui");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAppVersion() {
            static BNM::Field<bool> _field = GetClass().GetField(O("AppVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetButtons() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDetailedConnection() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DetailedConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDontDestroy() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DontDestroy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEventsIn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EventsIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExpectedUsers() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExpectedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Rect GetGuiOffset() {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("GuiOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Rect GetGuiRect() {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("GuiRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Pun_UtilityScripts::StatesGui* GetInstance() {
            static BNM::Field<::Photon_Pun_UtilityScripts::StatesGui*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        bool GetLocalPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNativeHeight() {
            static BNM::Field<float> _field = GetClass().GetField(O("native_height"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetNativeWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("native_width"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOthers() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Others"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPlayerProps() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PlayerProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Room"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRoomProps() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RoomProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetServer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Server"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetServerTimestamp() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ServerTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUserId() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UserId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAppVersion(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("AppVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtons(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDetailedConnection(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DetailedConnection"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDontDestroy(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DontDestroy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventsIn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EventsIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpectedUsers(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExpectedUsers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuiOffset(::BNM::Structures::Unity::Rect value) {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("GuiOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGuiRect(::BNM::Structures::Unity::Rect value) {
            static BNM::Field<::BNM::Structures::Unity::Rect> _field = GetClass().GetField(O("GuiRect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::Photon_Pun_UtilityScripts::StatesGui* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::StatesGui*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void SetLocalPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LocalPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeHeight(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("native_height"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNativeWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("native_width"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOthers(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Others"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerProps(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PlayerProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Room"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomProps(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RoomProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Server"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetServerTimestamp(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ServerTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUserId(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UserId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* PlayerToString(::Photon_Realtime::Player* player) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("PlayerToString"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
    };
}
