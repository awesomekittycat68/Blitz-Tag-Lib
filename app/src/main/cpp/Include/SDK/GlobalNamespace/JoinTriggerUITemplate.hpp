#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "JoinTriggerUITemplate_FormattedString.hpp"

namespace GlobalNamespace {
    struct JoinTriggerUITemplate : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "JoinTriggerUITemplate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Material* GetMilestoneAbandonPartyAndSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_AbandonPartyAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneAlreadyInRoom() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_AlreadyInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneChangingGameModeSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_ChangingGameModeSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneError() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneInPrivateRoom() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_InPrivateRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneLeaveRoomAndGroupJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_LeaveRoomAndGroupJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneLeaveRoomAndSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_LeaveRoomAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMilestoneNotConnectedSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_NotConnectedSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGAbandonPartyAndSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_AbandonPartyAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGAlreadyInRoom() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_AlreadyInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGChangingGameModeSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_ChangingGameModeSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGError() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGInPrivateRoom() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_InPrivateRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGLeaveRoomAndGroupJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_LeaveRoomAndGroupJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGLeaveRoomAndSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_LeaveRoomAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetScreenBGNotConnectedSoloJoin() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_NotConnectedSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextAbandonPartyAndSoloJoin() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_AbandonPartyAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextAlreadyInRoom() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_AlreadyInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextChangingGameModeSoloJoin() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_ChangingGameModeSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetScreenTextError() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ScreenText_Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextInPrivateRoom() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_InPrivateRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextLeaveRoomAndGroupJoin() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_LeaveRoomAndGroupJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextLeaveRoomAndSoloJoin() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_LeaveRoomAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::JoinTriggerUITemplate_FormattedString GetScreenTextNotConnectedSoloJoin() {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_NotConnectedSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetShowFullErrorMessages() {
            static BNM::Field<bool> _field = GetClass().GetField(O("showFullErrorMessages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMilestoneAbandonPartyAndSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_AbandonPartyAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneAlreadyInRoom(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_AlreadyInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneChangingGameModeSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_ChangingGameModeSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneError(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneInPrivateRoom(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_InPrivateRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneLeaveRoomAndGroupJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_LeaveRoomAndGroupJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneLeaveRoomAndSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_LeaveRoomAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMilestoneNotConnectedSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("Milestone_NotConnectedSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGAbandonPartyAndSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_AbandonPartyAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGAlreadyInRoom(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_AlreadyInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGChangingGameModeSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_ChangingGameModeSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGError(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGInPrivateRoom(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_InPrivateRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGLeaveRoomAndGroupJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_LeaveRoomAndGroupJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGLeaveRoomAndSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_LeaveRoomAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenBGNotConnectedSoloJoin(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("ScreenBG_NotConnectedSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextAbandonPartyAndSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_AbandonPartyAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextAlreadyInRoom(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_AlreadyInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextChangingGameModeSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_ChangingGameModeSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextError(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ScreenText_Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextInPrivateRoom(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_InPrivateRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextLeaveRoomAndGroupJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_LeaveRoomAndGroupJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextLeaveRoomAndSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_LeaveRoomAndSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenTextNotConnectedSoloJoin(::GlobalNamespace::JoinTriggerUITemplate_FormattedString value) {
            static BNM::Field<::GlobalNamespace::JoinTriggerUITemplate_FormattedString> _field = GetClass().GetField(O("ScreenText_NotConnectedSoloJoin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowFullErrorMessages(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("showFullErrorMessages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
