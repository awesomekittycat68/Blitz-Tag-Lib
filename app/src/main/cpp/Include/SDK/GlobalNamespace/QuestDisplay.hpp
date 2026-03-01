#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct QuestDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "QuestDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsChanged() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsChanged"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetLastUpdate() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDailyCompleteIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dailyCompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDailyIncompleteIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dailyIncompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ProgressDisplay* GetProgressDisplay() {
            static BNM::Field<::GlobalNamespace::ProgressDisplay*> _field = GetClass().GetField(O("progressDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RotatingQuest* GetQuest() {
            static BNM::Field<::GlobalNamespace::RotatingQuest*> _field = GetClass().GetField(O("quest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetStatusText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("statusText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWeeklyCompleteIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("weeklyCompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWeeklyIncompleteIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("weeklyIncompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastUpdate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyCompleteIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dailyCompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyIncompleteIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dailyIncompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressDisplay(::GlobalNamespace::ProgressDisplay* value) {
            static BNM::Field<::GlobalNamespace::ProgressDisplay*> _field = GetClass().GetField(O("progressDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQuest(::GlobalNamespace::RotatingQuest* value) {
            static BNM::Field<::GlobalNamespace::RotatingQuest*> _field = GetClass().GetField(O("quest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("statusText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("text"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyCompleteIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("weeklyCompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeeklyIncompleteIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("weeklyIncompleteIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_IsChanged() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateCompletionIndicator() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCompletionIndicator"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
