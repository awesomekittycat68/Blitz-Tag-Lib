#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CustomMapsListScreen_ListScreenState.hpp"
#include "CustomMapsTerminalScreen.hpp"
#include "../GorillaTagScripts_VirtualStumpCustomMaps_UI/CustomMapKeyboardBinding.hpp"

namespace GlobalNamespace {
    struct CustomMapsListScreen : ::GlobalNamespace::CustomMapsTerminalScreen {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapsListScreen");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_SORT_TYPES = 6;
        int GetCurrentModPage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentModPage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetModsPerPage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ModsPerPage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetOfficialMapsOnly() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_OfficialMapsOnly"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetAllMapsButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("allMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetAvailableMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("availableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetBrowseModsTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("browseModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentAvailableModsRequestPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentAvailableModsRequestPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentModPage_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentModPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsListScreen_ListScreenState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::CustomMapsListScreen_ListScreenState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsGalleryView* GetCustomMapsGalleryView() {
            static BNM::Field<::GlobalNamespace::CustomMapsGalleryView*> _field = GetClass().GetField(O("customMapsGalleryView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetDisplayedModProfiles() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("displayedModProfiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisplayFeaturedMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("displayFeaturedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetErrorLoadingAvailableMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetErrorLoadingFavoriteMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetErrorLoadingInstalledMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetErrorLoadingSubscribedMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetErrorText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("errorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFailedToRetrieveModsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("failedToRetrieveModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetFavoriteMapsButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("favoriteMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFavoriteMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("favoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFavoriteModsTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("favoriteModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int64_t>* GetFeaturedModIds() {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("featuredModIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFeaturedMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("featuredMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFeaturedModsPlayFabKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("featuredModsPlayFabKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFilteredAvailableMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFilteredFavoriteMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFilteredInstalledMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetFilteredSubscribedMods() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetInstalledMapsButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("installedMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetInstalledMods() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("installedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetInstalledModsTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("installedModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAscendingOrder() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAscendingOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoadingAvailableMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoadingFavoriteMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoadingFeaturedMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingFeaturedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoadingInstalledMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLoadingSubscribedMods() {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetLoadingText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxModListItemLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxModListItemLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetModPageText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modPageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetModsPerPage_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("modsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNoFavoriteModsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noFavoriteModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNoInstalledModsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noInstalledModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNoModsAvailableString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noModsAvailableString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNoModsFoundGenericString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noModsFoundGenericString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetNoSubscribedModsString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noSubscribedModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumModsPerRequest() {
            static BNM::Field<int> _field = GetClass().GetField(O("numModsPerRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetOfficialMapsButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("officialMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOfficialMapsOnly_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("officialMapsOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOfficialMapsTag() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("officialMapsTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetOfficialModsTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("officialModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetPageDownButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("pageDownButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetPageUpButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("pageUpButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartCustomModListRetrieval() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartCustomModListRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartCustomModListRetrievalForceRefresh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartCustomModListRetrievalForceRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartFavoriteModsRetrieval() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartFavoriteModsRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartFavoriteModsRetrievalForceRefresh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartFavoriteModsRetrievalForceRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartInstalledModsRetrieval() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartInstalledModsRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartInstalledModsRetrievalForceRefresh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartInstalledModsRetrievalForceRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRestartSubscribedModsRetrieval() {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartSubscribedModsRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSearchBttnPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("searchBttnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetSearchButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("searchButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetSearchTags() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("searchTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSortByButton() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sortByButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSortType() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sortType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSortTypeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("sortTypeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetSortTypeText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("sortTypeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetSubscribedBttnPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("subscribedBttnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CustomMapsScreenButton* GetSubscribedMapsButton() {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("subscribedMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetSubscribedMods() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("subscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSubscribedModsTitle() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("subscribedModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTitleText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("titleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalAvailableMods() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalFavoriteMods() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalFeaturedMods() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalFeaturedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalInstalledMods() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalModCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalModCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalSubscribedMods() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseMapName() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMapName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllMapsButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("allMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAvailableMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("availableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBrowseModsTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("browseModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAvailableModsRequestPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentAvailableModsRequestPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentModPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentModPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentState(::GlobalNamespace::CustomMapsListScreen_ListScreenState value) {
            static BNM::Field<::GlobalNamespace::CustomMapsListScreen_ListScreenState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapsGalleryView(::GlobalNamespace::CustomMapsGalleryView* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsGalleryView*> _field = GetClass().GetField(O("customMapsGalleryView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayedModProfiles(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("displayedModProfiles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayFeaturedMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("displayFeaturedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorLoadingAvailableMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorLoadingFavoriteMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorLoadingInstalledMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorLoadingSubscribedMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("errorLoadingSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetErrorText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("errorText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFailedToRetrieveModsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("failedToRetrieveModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFavoriteMapsButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("favoriteMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFavoriteMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("favoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFavoriteModsTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("favoriteModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeaturedModIds(::BNM::Structures::Mono::List<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("featuredModIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeaturedMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("featuredMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFeaturedModsPlayFabKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("featuredModsPlayFabKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredAvailableMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredFavoriteMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredInstalledMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFilteredSubscribedMods(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("filteredSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstalledMapsButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("installedMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstalledMods(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("installedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstalledModsTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("installedModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAscendingOrder(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAscendingOrder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingAvailableMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingFavoriteMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingFeaturedMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingFeaturedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingInstalledMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingSubscribedMods(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("loadingSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLoadingText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("loadingText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxModListItemLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxModListItemLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModPageText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("modPageText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModsPerPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("modsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoFavoriteModsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noFavoriteModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoInstalledModsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noInstalledModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoModsAvailableString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noModsAvailableString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoModsFoundGenericString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noModsFoundGenericString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoSubscribedModsString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("noSubscribedModsString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumModsPerRequest(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numModsPerRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfficialMapsButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("officialMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfficialMapsOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("officialMapsOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfficialMapsTag(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("officialMapsTag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfficialModsTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("officialModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageDownButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("pageDownButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageUpButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("pageUpButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartCustomModListRetrieval(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartCustomModListRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartCustomModListRetrievalForceRefresh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartCustomModListRetrievalForceRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartFavoriteModsRetrieval(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartFavoriteModsRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartFavoriteModsRetrievalForceRefresh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartFavoriteModsRetrievalForceRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartInstalledModsRetrieval(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartInstalledModsRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartInstalledModsRetrievalForceRefresh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartInstalledModsRetrievalForceRefresh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestartSubscribedModsRetrieval(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("restartSubscribedModsRetrieval"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchBttnPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("searchBttnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("searchButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSearchTags(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("searchTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortByButton(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sortByButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortType(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sortType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortTypeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sortTypeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortTypeText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("sortTypeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedBttnPosition(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("subscribedBttnPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedMapsButton(::GlobalNamespace::CustomMapsScreenButton* value) {
            static BNM::Field<::GlobalNamespace::CustomMapsScreenButton*> _field = GetClass().GetField(O("subscribedMapsButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedMods(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("subscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubscribedModsTitle(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("subscribedModsTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("titleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalAvailableMods(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalAvailableMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalFavoriteMods(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalFavoriteMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalFeaturedMods(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalFeaturedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalInstalledMods(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalInstalledMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalModCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalModCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalSubscribedMods(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalSubscribedMods"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseMapName(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useMapName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FilterAvailableMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FilterAvailableMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FilterFavoriteMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FilterFavoriteMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FilterInstalledMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FilterInstalledMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FilterSubscribedMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FilterSubscribedMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_CurrentModPage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentModPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ModsPerPage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ModsPerPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_OfficialMapsOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_OfficialMapsOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_SortType() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_SortType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetDisplayedModList(int64_t& modList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDisplayedModList"), {"modList"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&modList);
        }
        bool GetLoadingStatusForCurrentState() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetLoadingStatusForCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetModListForCurrentState() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetModListForCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNumPages() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumPages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetTitleForCurrentState() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetTitleForCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTotalModsForCurrentState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTotalModsForCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasModLoadingErrorForCurrentState() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasModLoadingErrorForCurrentState"));
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
        void OnGetFeaturedModsTitleData(::BNM::Structures::Mono::String* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetFeaturedModsTitleData"), {"data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data);
        }
        void OnModCacheRefreshed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModCacheRefreshed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModCacheRefreshing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModCacheRefreshing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedIn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOLoggedOut() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOLoggedOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnModIOUserChanged(::BNM::IL2CPP::Il2CppObject* user) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnModIOUserChanged"), {"user"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(user);
        }
        void PressButton(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PressButton"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void Refresh() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Refresh"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshDriverNickname(::BNM::Structures::Mono::String* driverNickname) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshDriverNickname"), {"driverNickname"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(driverNickname);
        }
        void RefreshModSearch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshModSearch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshScreenForAvailableMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScreenForAvailableMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshScreenForCurrentState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScreenForCurrentState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshScreenState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshScreenState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RetrieveAvailableMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RetrieveAvailableMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* RetrieveFavoriteMods(bool forceRefresh) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RetrieveFavoriteMods"), {"forceRefresh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forceRefresh);
        }
        void RetrieveFeaturedMods() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RetrieveFeaturedMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* RetrieveInstalledMods(bool forceRefresh) {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RetrieveInstalledMods"), {"forceRefresh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forceRefresh);
        }
        ::BNM::IL2CPP::Il2CppObject* RetrieveSubscribedMods() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("RetrieveSubscribedMods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_SortType(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SortType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetSortType_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSortType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Show() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Show"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwapListDisplay(::GlobalNamespace::CustomMapsListScreen_ListScreenState newState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwapListDisplay"), {"newState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, force);
        }
        void UpdatePageCount(int totalMods) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePageCount"), {"totalMods"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(totalMods);
        }
    };
}
