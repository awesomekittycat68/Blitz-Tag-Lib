#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct PlayerTimerBoard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "PlayerTimerBoard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* MONKE_BLOCKS_TIMER_BOARD_COLUMN_PLAYER_KEY = "MONKE_BLOCKS_TIMER_BOARD_COLUMN_PLAYER";
        static constexpr const char* MONKE_BLOCKS_TIMER_BOARD_COLUMN_TIMES_KEY = "MONKE_BLOCKS_TIMER_BOARD_COLUMN_TIMES";
        bool GetIsDirty() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDirty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsDirty(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsDirty"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLineHeight() {
            static BNM::Field<int> _field = GetClass().GetField(O("lineHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoardLine*>* GetLines() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoardLine*>*> _field = GetClass().GetField(O("lines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLinesParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("linesParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetNotInRoomText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("notInRoomText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetPlayerColumn() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("playerColumn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartingYValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("startingYValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStringBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStringBuilderTime() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stringBuilderTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTimeColumn() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timeColumn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineHeight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lineHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLines(::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoardLine*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::PlayerTimerBoardLine*>*> _field = GetClass().GetField(O("lines"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinesParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("linesParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNotInRoomText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("notInRoomText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerColumn(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("playerColumn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingYValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startingYValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stringBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStringBuilderTime(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("stringBuilderTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeColumn(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("timeColumn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsDirty() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDirty"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        void RedrawPlayerLines() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RedrawPlayerLines"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_IsDirty(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsDirty"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetSleepState(bool awake) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSleepState"), {"awake"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(awake);
        }
        void SortLines() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SortLines"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
