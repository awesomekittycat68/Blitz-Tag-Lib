#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsScreenTouchPoint.hpp"

namespace GlobalNamespace {
    struct CustomMapsModTile : ::GlobalNamespace::CustomMapsScreenTouchPoint {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsModTile");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float LOGO_WIDTH = 320.0f;
        static constexpr float LOGO_HEIGHT = 180.0f;
        ::BNM::IL2CPP::Il2CppObject* GetCurrentMod() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_CurrentMod"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCurrentMod_f() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Sprite* GetDefaultLogo() {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("defaultLogo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetHighlight() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("highlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDownloadingThumbnail() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDownloadingThumbnail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetMapNameText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("mapNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNewDownloadRequest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("newDownloadRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetRatingsText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("ratingsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetThumsbUp() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("thumsbUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentMod(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("currentMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultLogo(::Sprite* value) {
            static BNM::Field<::Sprite*> _field = GetClass().GetField(O("defaultLogo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHighlight(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("highlight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDownloadingThumbnail(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDownloadingThumbnail"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMapNameText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("mapNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewDownloadRequest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("newDownloadRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRatingsText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("ratingsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThumsbUp(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("thumsbUp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateTile(bool useMapName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateTile"), {"useMapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(useMapName);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeactivateTile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeactivateTile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_CurrentMod() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_CurrentMod"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HighlightTile() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HighlightTile"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsCurrentModHidden() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCurrentModHidden"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnButtonPressedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PressButtonColourUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButtonColourUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetLogo() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetLogo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMod(::BNM::IL2CPP::Il2CppObject* mod, bool useMapName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMod"), {"mod", "useMapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mod, useMapName);
        }
        void ShowDetails() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowDetails"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ShowTileText(bool show, bool useMapName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowTileText"), {"show", "useMapName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(show, useMapName);
        }
    };
}
