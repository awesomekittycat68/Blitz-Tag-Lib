#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SAnnouncementData.hpp"

namespace GlobalNamespace {
    struct AnnouncementManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnnouncementManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::AnnouncementManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::AnnouncementManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::AnnouncementManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::AnnouncementManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr const char* ANNOUNCEMENT_ID_PLAYERPREF_PREFIX = "announcement-id-";
        static constexpr const char* ANNOUNCEMENT_TITLE_DATA_KEY = "AnnouncementData";
        static constexpr const char* ANNOUNCEMENT_HEADING = "Announcement!";
        static constexpr const char* ANNOUNCEMENT_BUTTON_TEXT = "Continue";
        bool GetAnnouncementActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get__announcementActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAnnouncementActive(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__announcementActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCompletedSetup() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get__completedSetup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCompletedSetup(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set__completedSetup"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetAnnouncementDPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_AnnouncementDPlayerPref"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::AnnouncementManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::AnnouncementManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SAnnouncementData GetAnnouncementData() {
            static BNM::Field<::GlobalNamespace::SAnnouncementData> _field = GetClass().GetField(O("_announcementData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetAnnouncementIDPref() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_announcementIDPref"));
            return _field.Get();
        }
        ::GlobalNamespace::MessageBox* GetAnnouncementMessageBox() {
            static BNM::Field<::GlobalNamespace::MessageBox*> _field = GetClass().GetField(O("_announcementMessageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetAnnouncementString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_announcementString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::AnnouncementManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::AnnouncementManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        bool GetShowAnnouncement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_showAnnouncement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnnouncementData(::GlobalNamespace::SAnnouncementData value) {
            static BNM::Field<::GlobalNamespace::SAnnouncementData> _field = GetClass().GetField(O("_announcementData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAnnouncementIDPref(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_announcementIDPref"));
            _field.Set(value);
        }
        void SetAnnouncementMessageBox(::GlobalNamespace::MessageBox* value) {
            static BNM::Field<::GlobalNamespace::MessageBox*> _field = GetClass().GetField(O("_announcementMessageBox"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAnnouncementString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_announcementString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::AnnouncementManager* value) {
            static BNM::Field<::GlobalNamespace::AnnouncementManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetShowAnnouncement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_showAnnouncement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ConfigureAnnouncement(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ConfigureAnnouncement"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        bool get__announcementActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get__announcementActive"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get__completedSetup() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get__completedSetup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_AnnouncementDPlayerPref() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_AnnouncementDPlayerPref"));
            return _m.Call();
        }
        static ::GlobalNamespace::AnnouncementManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::AnnouncementManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void OnContinuePressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnContinuePressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnError(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnError"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void set__announcementActive(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__announcementActive"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set__completedSetup(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set__completedSetup"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool ShowAnnouncement() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShowAnnouncement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
