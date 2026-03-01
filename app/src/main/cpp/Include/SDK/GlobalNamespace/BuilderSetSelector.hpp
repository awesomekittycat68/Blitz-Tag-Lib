#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPieceSet_BuilderPieceCategory.hpp"

namespace GlobalNamespace {
    struct BuilderSetSelector : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderSetSelector");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* GetIncludedCategories() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*> _field = GetClass().GetField(O("_includedCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetCurrentGroup() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("currentGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetDisabledMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("disabledMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* GetGroupButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("groupButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Text*>* GetGroupLabels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Text*>*> _field = GetClass().GetField(O("groupLabels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGroupsPerPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("groupsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInBuilderZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncludedGroupIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("includedGroupIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* GetIncludedGroups() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _field = GetClass().GetField(O("includedGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetNextPageButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("nextPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumLiveDisplayGroups() {
            static BNM::Field<int> _field = GetClass().GetField(O("numLiveDisplayGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnSelectedGroup() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSelectedGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPageIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("pageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPressableButton* GetPreviousPageButton() {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("previousPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalPages() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetZoneRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("zoneRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIncludedCategories(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>*> _field = GetClass().GetField(O("_includedCategories"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("currentGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("disabledMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaPressableButton*>*> _field = GetClass().GetField(O("groupButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupLabels(::BNM::Structures::Mono::Array<::Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Text*>*> _field = GetClass().GetField(O("groupLabels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGroupsPerPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("groupsPerPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInBuilderZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludedGroupIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("includedGroupIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludedGroups(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*>*> _field = GetClass().GetField(O("includedGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPageButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("nextPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumLiveDisplayGroups(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numLiveDisplayGroups"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSelectedGroup(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSelectedGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pageIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousPageButton(::GlobalNamespace::GorillaPressableButton* value) {
            static BNM::Field<::GlobalNamespace::GorillaPressableButton*> _field = GetClass().GetField(O("previousPageButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalPages(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalPages"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneRenderers(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("zoneRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool DoesDisplayGroupHaveIncludedCategories(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* set) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesDisplayGroupHaveIncludedCategories"), {"set"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(set);
        }
        int GetDefaultGroupID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDefaultGroupID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetSelectedGroup() {
            static BNM::Method<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _m = GetClass().GetMethod(O("GetSelectedGroup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnNextPageClicked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNextPageClicked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPreviousPageClicked() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreviousPageClicked"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnSetButtonPressed(::GlobalNamespace::GorillaPressableButton* button, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSetButtonPressed"), {"button", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeft);
        }
        void OnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshUnlockedGroups() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshUnlockedGroups"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetSelection(int groupID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSelection"), {"groupID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(groupID);
        }
        void Setup(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory>* categories) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"categories"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(categories);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateLabels() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateLabels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
