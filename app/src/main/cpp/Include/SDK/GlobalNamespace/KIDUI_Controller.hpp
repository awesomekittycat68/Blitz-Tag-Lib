#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EKIDFeatures.hpp"
#include "EMainScreenStatus.hpp"
#include "KIDUI_Controller_Metrics_ShowReason.hpp"

namespace GlobalNamespace {
    struct KIDUI_Controller : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "KIDUI_Controller");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::KIDUI_Controller* get_Instance() {
            static BNM::Method<::GlobalNamespace::KIDUI_Controller*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::KIDUI_Controller* GetInstance() {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr const char* CLOSE_BLACK_SCREEN_ETAG_PLAYER_PREF_PREFIX = "closeBlackScreen-";
        static constexpr const char* FIRST_TIME_POST_CHANGE_PLAYER_PREF = "hasShownFirstTimePostChange-";
        ::BNM::Structures::Mono::String* GetEtagOnCloseBlackScreenPlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_EtagOnCloseBlackScreenPlayerPrefRef"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::KIDUI_Controller* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::KIDUI_Controller*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsKIDUIActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsKIDUIActive"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::KIDUI_ConfirmScreen* GetConfirmScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_ConfirmScreen*> _field = GetClass().GetField(O("_confirmScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::EKIDFeatures>* GetInaccessibleSettings() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::EKIDFeatures>*> _field = GetClass().GetField(O("_inaccessibleSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::KIDUI_Controller* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        bool GetIsKidUIActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isKidUIActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLastEtagOnClose() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_lastEtagOnClose"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_MainScreen* GetMainKIDScreen() {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainKIDScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetPermissionsWithToggles() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_PermissionsWithToggles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason GetShowReason() {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason> _field = GetClass().GetField(O("_showReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetEtagOnCloseBlackScreenPlayerPrefStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("etagOnCloseBlackScreenPlayerPrefStr"));
            return _field.Get();
        }
        void SetConfirmScreen(::GlobalNamespace::KIDUI_ConfirmScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_ConfirmScreen*> _field = GetClass().GetField(O("_confirmScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInaccessibleSettings(::BNM::Structures::Mono::List<::GlobalNamespace::EKIDFeatures>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::EKIDFeatures>*> _field = GetClass().GetField(O("_inaccessibleSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::KIDUI_Controller* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetIsKidUIActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isKidUIActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastEtagOnClose(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_lastEtagOnClose"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainKIDScreen(::GlobalNamespace::KIDUI_MainScreen* value) {
            static BNM::Field<::GlobalNamespace::KIDUI_MainScreen*> _field = GetClass().GetField(O("_mainKIDScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPermissionsWithToggles(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_PermissionsWithToggles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowReason(::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason value) {
            static BNM::Field<::GlobalNamespace::KIDUI_Controller_Metrics_ShowReason> _field = GetClass().GetField(O("_showReason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetEtagOnCloseBlackScreenPlayerPrefStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("etagOnCloseBlackScreenPlayerPrefStr"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CloseKIDScreens() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseKIDScreens"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_EtagOnCloseBlackScreenPlayerPrefRef() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_EtagOnCloseBlackScreenPlayerPrefRef"));
            return _m.Call();
        }
        static ::GlobalNamespace::KIDUI_Controller* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::KIDUI_Controller*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        static bool get_IsKIDUIActive() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsKIDUIActive"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetLastBlackScreenEtag() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLastBlackScreenEtag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::EMainScreenStatus GetScreenStatusFromSession() {
            static BNM::Method<::GlobalNamespace::EMainScreenStatus> _m = GetClass().GetMethod(O("GetScreenStatusFromSession"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void NotifyOfEmailResult(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NotifyOfEmailResult"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveEtagOnCloseScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveEtagOnCloseScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void* ShouldShowKIDScreen(TP0 cancellationToken) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ShouldShowKIDScreen"), {"cancellationToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cancellationToken);
        }
        bool ShouldShowScreenOnPermissionChange() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldShowScreenOnPermissionChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::IL2CPP::Il2CppObject* StartKIDScreens(TP0 cancellationToken) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartKIDScreens"), {"cancellationToken"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cancellationToken);
        }
        void UpdateScreenStatus() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScreenStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
