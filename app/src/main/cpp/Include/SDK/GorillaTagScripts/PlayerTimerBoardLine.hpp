#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct PlayerTimerBoardLine : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "PlayerTimerBoardLine");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCurrentNickname() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentNickname"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetPlayer* GetLinePlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("linePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::PlayerTimerBoard* GetParentBoard() {
            static BNM::Field<::GorillaTagScripts::PlayerTimerBoard*> _field = GetClass().GetField(O("parentBoard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerNameVisible() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerNameVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPlayerTimeSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("playerTimeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayerTimeStr() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerTimeStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetPlayerVRRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("playerVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RigContainer* GetRigContainer() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentNickname(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("currentNickname"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinePlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("linePlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentBoard(::GorillaTagScripts::PlayerTimerBoard* value) {
            static BNM::Field<::GorillaTagScripts::PlayerTimerBoard*> _field = GetClass().GetField(O("parentBoard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerNameVisible(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerNameVisible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTimeSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("playerTimeSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerTimeStr(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playerTimeStr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("playerVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigContainer(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static int CompareByTotalTime(::GorillaTagScripts::PlayerTimerBoardLine* lineA, ::GorillaTagScripts::PlayerTimerBoardLine* lineB) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareByTotalTime"), {"lineA", "lineB"});
            return _m.Call(lineA, lineB);
        }
        void InitializeLine() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeLine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* NormalizeName(bool doIt, ::BNM::Structures::Mono::String* text) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("NormalizeName"), {"doIt", "text"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(doIt, text);
        }
        void ResetData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetLineData(::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLineData"), {"netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(netPlayer);
        }
        void UpdateLine() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTimeText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTimeText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
