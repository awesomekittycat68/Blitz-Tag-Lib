#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderScanKiosk_ScannerState.hpp"
#include "MonoBehaviourTick.hpp"

namespace GlobalNamespace {
    struct BuilderScanKiosk : ::GlobalNamespace::MonoBehaviourTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderScanKiosk");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_NO_SAVE_SLOT_KEY = "MONKE_BLOCKS_SAVE_KIOSK_NO_SAVE_SLOT";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SCAN_LABEL_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SCAN_LABEL";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_UPDATE_LABEL_KEY = "MONKE_BLOCKS_SAVE_KIOSK_UPDATE_LABEL";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_MAP_ID_LABEL_KEY = "MONKE_BLOCKS_SAVE_KIOSK_MAP_ID_LABEL";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_CODE_INSTRUCTIONS_KEY = "MONKE_BLOCKS_SAVE_KIOSK_CODE_INSTRUCTIONS";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BUSY_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BUSY";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BLOCKS_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_ERROR_BLOCKS";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_COOLDOWN_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_COOLDOWN";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_NO_CHANGES_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_NO_CHANGES";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_REPLACE_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_REPLACE";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_CONFIRMATION_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_WARNING_CONFIRMATION";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SAVE_SAVING_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SAVE_SAVING";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_LOAD_INSTRUCTIONS_KEY = "MONKE_BLOCKS_SAVE_KIOSK_LOAD_INSTRUCTIONS";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_EMPTY_TABLE_KEY = "MONKE_BLOCKS_SAVE_KIOSK_EMPTY_TABLE";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SLOT_NONE_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SLOT_NONE";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SLOT_ONE_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SLOT_ONE";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SLOT_TWO_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SLOT_TWO";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_SLOT_THREE_KEY = "MONKE_BLOCKS_SAVE_KIOSK_SLOT_THREE";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_UPDATED_BUTTON_KEY = "MONKE_BLOCKS_SAVE_KIOSK_UPDATED_BUTTON";
        static constexpr const char* MONKE_BLOCKS_SAVE_KIOSK_UPDATE_CONFIRM_BUTTON_KEY = "MONKE_BLOCKS_SAVE_KIOSK_UPDATE_CONFIRM_BUTTON";
        ::Texture2D* GetBuildCaptureTexture() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("buildCaptureTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCoolDownCompleteTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("coolDownCompleteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCoolingDown() {
            static BNM::Field<bool> _field = GetClass().GetField(O("coolingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetDEVSAVESLOT() {
            static BNM::Field<int> _field = GetClass().GetField(O("DEV_SAVE_SLOT"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetErrorMsg() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("errorMsg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAnimating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAnimating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetNoneButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("noneButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetNUMSAVESLOTS() {
            static BNM::Field<int> _field = GetClass().GetField(O("NUM_SAVE_SLOTS"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPlayerPrefKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerPrefKey"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetSAVEFILE() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SAVE_FILE"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetSAVEFOLDER() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SAVE_FOLDER"));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetSaveButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("saveButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSaveCooldownSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("saveCooldownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSaveError() {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetScanAnimation() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("scanAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>* GetScanButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("scanButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetScanCompleteTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("scanCompleteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderScanKiosk_ScannerState GetScannerState() {
            static BNM::Field<::GlobalNamespace::BuilderScanKiosk_ScannerState> _field = GetClass().GetField(O("scannerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetScanTriangle() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("scanTriangle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetScreenText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SoundBankPlayer* GetSoundBank() {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTargetTable() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("targetTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildCaptureTexture(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("buildCaptureTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolDownCompleteTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("coolDownCompleteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoolingDown(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("coolingDown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDEVSAVESLOT(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DEV_SAVE_SLOT"));
            _field.Set(value);
        }
        void SetErrorMsg(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("errorMsg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAnimating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAnimating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoneButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("noneButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNUMSAVESLOTS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NUM_SAVE_SLOTS"));
            _field.Set(value);
        }
        static void SetPlayerPrefKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerPrefKey"));
            _field.Set(value);
        }
        static void SetSAVEFILE(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SAVE_FILE"));
            _field.Set(value);
        }
        static void SetSAVEFOLDER(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SAVE_FOLDER"));
            _field.Set(value);
        }
        void SetSaveButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("saveButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSaveCooldownSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("saveCooldownSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSaveError(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveError"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanAnimation(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("scanAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanButtons(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("scanButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanCompleteTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("scanCompleteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScannerState(::GlobalNamespace::BuilderScanKiosk_ScannerState value) {
            static BNM::Field<::GlobalNamespace::BuilderScanKiosk_ScannerState> _field = GetClass().GetField(O("scannerState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScanTriangle(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("scanTriangle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("screenText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundBank(::GlobalNamespace::SoundBankPlayer* value) {
            static BNM::Field<::GlobalNamespace::SoundBankPlayer*> _field = GetClass().GetField(O("soundBank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetTable(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("targetTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* GetSaveFolder() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSaveFolder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetSavePath() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSavePath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetTextForScreen() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTextForScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsSaveSlotValid(int slot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSaveSlotValid"), {"slot"});
            return _m.Call(slot);
        }
        void LoadPlayerPrefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadPlayerPrefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDevScanPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDevScanPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnNoneButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNoneButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSaveDirtyChanged(bool dirty) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveDirtyChanged"), {"dirty"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dirty);
        }
        void OnSaveFail(::BNM::Structures::Mono::String* errorMsg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveFail"), {"errorMsg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(errorMsg);
        }
        void OnSavePressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSavePressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSaveSuccess() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveSuccess"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSaveTimeUpdated() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveTimeUpdated"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnScanButtonPressed(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnScanButtonPressed"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void SavePlayerPrefs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SavePlayerPrefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ToggleSaveButton(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleSaveButton"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
        void UpdateUI() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateUI"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
