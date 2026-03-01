#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BasePageHandler.hpp"

namespace GlobalNamespace {
    struct GameModePages : ::GlobalNamespace::BasePageHandler {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameModePages");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetEntriesCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_entriesCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetPageSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_pageSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameModeSelectButton*>* GetButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameModeSelectButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentButtonIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentButtonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::GameModePages*>* GetGameModeSelectorInstances() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameModePages*>*> _field = GetClass().GetField(O("gameModeSelectorInstances"));
            return _field.Get();
        }
        ::Text* GetGameModeText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("gameModeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetSharedSelectedIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("sharedSelectedIndex"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetTextBuilder() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("textBuilder"));
            return _field.Get();
        }
        void SetButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GameModeSelectButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameModeSelectButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentButtonIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentButtonIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGameModeSelectorInstances(::BNM::Structures::Mono::List<::GlobalNamespace::GameModePages*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GameModePages*>*> _field = GetClass().GetField(O("gameModeSelectorInstances"));
            _field.Set(value);
        }
        void SetGameModeText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("gameModeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSharedSelectedIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sharedSelectedIndex"));
            _field.Set(value);
        }
        static void SetTextBuilder(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("textBuilder"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableEntryButtons(int buttonsMissing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableEntryButtons"), {"buttonsMissing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonsMissing);
        }
        int get_entriesCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_entriesCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_pageSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_pageSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PageEntrySelected(int pageEntry, int selectionIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PageEntrySelected"), {"pageEntry", "selectionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pageEntry, selectionIndex);
        }
        static void SetSelectedGameModeShared(::BNM::Structures::Mono::String* gameMode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSelectedGameModeShared"), {"gameMode"});
            _m.Call(gameMode);
        }
        void ShowPage(int selectedPage, int startIndex, int endIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowPage"), {"selectedPage", "startIndex", "endIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(selectedPage, startIndex, endIndex);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateAllButtons(int onButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateAllButtons"), {"onButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(onButton);
        }
    };
}
