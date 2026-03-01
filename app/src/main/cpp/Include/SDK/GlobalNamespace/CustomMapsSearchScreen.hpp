#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsTerminalScreen.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps_UI/CustomMapKeyboardBinding.hpp"

namespace GlobalNamespace {
    struct CustomMapsSearchScreen : ::GlobalNamespace::CustomMapsTerminalScreen {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsSearchScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentModPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentModPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSearchModsRequestPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSearchModsRequestPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsGalleryView* GetCustomMapsGalleryView() {
            static BNM::Field<::GlobalNamespace::CustomMapsGalleryView*> _field = GetClass().GetField(O("customMapsGalleryView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDefaultSearchString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultSearchString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetDisplayedMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("displayedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetErrorLoadingSearchMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingSearchMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetErrorMessage() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("errorMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFilteredSearchedMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredSearchedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftPageButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoadingSearchMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingSearchMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetModsPerPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("modsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNoMapsFoundString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noMapsFoundString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumModsPerRequest() {
            static BNM::Field<int> _field = GetClass().GetField(O("numModsPerRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightPageButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetSearchedMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("searchedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSearchingString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("searchingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetSearchMessageText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("searchMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSearchPhrase() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("searchPhrase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetSearchPhraseText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("searchPhraseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalSearchMods() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalSearchMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentModPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentModPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSearchModsRequestPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSearchModsRequestPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapsGalleryView(::GlobalNamespace::CustomMapsGalleryView* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsGalleryView*> _field = GetClass().GetField(O("customMapsGalleryView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultSearchString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("defaultSearchString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayedMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("displayedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorLoadingSearchMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingSearchMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorMessage(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("errorMessage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredSearchedMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredSearchedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPageButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingSearchMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingSearchMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModsPerPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("modsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoMapsFoundString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noMapsFoundString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumModsPerRequest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numModsPerRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPageButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchedMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("searchedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchingString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("searchingString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchMessageText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("searchMessageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchPhrase(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("searchPhrase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchPhraseText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("searchPhraseText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalSearchMods(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalSearchMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FilterSearchMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FilterSearchMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetNumPages() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumPages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Hide() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Hide"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsOnFirstPage() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOnFirstPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsOnLastPage() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOnLastPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PressButton(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding pressedButton) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"pressedButton"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pressedButton);
        }
        void RefreshScreenState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScreenState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshSearchText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshSearchText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* RetrieveMods() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RetrieveMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ReturnFromDetailsScreen() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnFromDetailsScreen"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Show() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
