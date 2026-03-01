#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$129.hpp"
#include "../Fusion_CodeGen/FixedStorage$71.hpp"
#include "WhackAMole_GameState.hpp"

namespace GorillaTagScripts {
    struct WhackAMole_WhackAMoleData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "WhackAMole").GetInnerClass("WhackAMoleData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBestScore() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BestScore"));
            return _method.Call();
        }
        void SetBestScore(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BestScore"));
            _method.Call(value);
        }
        int GetCurrentLevelIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentLevelIndex"));
            return _method.Call();
        }
        void SetCurrentLevelIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentLevelIndex"));
            _method.Call(value);
        }
        int GetCurrentScore() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentScore"));
            return _method.Call();
        }
        void SetCurrentScore(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentScore"));
            _method.Call(value);
        }
        ::GorillaTagScripts::WhackAMole_GameState GetCurrentState() {
            static BNM::Method<::GorillaTagScripts::WhackAMole_GameState> _method = GetClass().GetMethod(O("get_CurrentState"));
            return _method.Call();
        }
        void SetCurrentState(::GorillaTagScripts::WhackAMole_GameState value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentState"));
            _method.Call(value);
        }
        float GetGameEndedTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_GameEndedTime"));
            return _method.Call();
        }
        void SetGameEndedTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GameEndedTime"));
            _method.Call(value);
        }
        int GetGameId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_GameId"));
            return _method.Call();
        }
        void SetGameId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GameId"));
            _method.Call(value);
        }
        int GetPickedMolesIndexCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PickedMolesIndexCount"));
            return _method.Call();
        }
        void SetPickedMolesIndexCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PickedMolesIndexCount"));
            _method.Call(value);
        }
        float GetRemainingTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_RemainingTime"));
            return _method.Call();
        }
        void SetRemainingTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RemainingTime"));
            _method.Call(value);
        }
        int GetRightPlayerScore() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RightPlayerScore"));
            return _method.Call();
        }
        void SetRightPlayerScore(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RightPlayerScore"));
            _method.Call(value);
        }
        int GetTotalScore() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalScore"));
            return _method.Call();
        }
        void SetTotalScore(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TotalScore"));
            _method.Call(value);
        }
        int get_BestScore() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BestScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurrentLevelIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentLevelIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CurrentScore() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::WhackAMole_GameState get_CurrentState() {
            static BNM::Method<::GorillaTagScripts::WhackAMole_GameState> _m = GetClass().GetMethod(O("get_CurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_GameEndedTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_GameEndedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_GameId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_GameId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_HighScorePlayerName() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_HighScorePlayerName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_PickedMolesIndex() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_PickedMolesIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PickedMolesIndexCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PickedMolesIndexCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_RemainingTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_RemainingTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RightPlayerScore() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RightPlayerScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalScore() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_BestScore(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BestScore"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentLevelIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentLevelIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentScore(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentScore"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CurrentState(::GorillaTagScripts::WhackAMole_GameState value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GameEndedTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GameEndedTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_GameId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GameId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_HighScorePlayerName(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HighScorePlayerName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PickedMolesIndexCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PickedMolesIndexCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RemainingTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RemainingTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RightPlayerScore(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RightPlayerScore"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TotalScore(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TotalScore"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
