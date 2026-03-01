#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BasePageHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BasePageHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentPage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_currentPage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentPage(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentPage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetEntriesCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_entriesCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMaxEntires() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_maxEntires"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxEntires(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_maxEntires"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPages() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_pages"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPages(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_pages"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPageSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_pageSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSelectedIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_selectedIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSelectedIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_selectedIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void ChangePage(bool left) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangePage"), {"left"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(left);
        }
        int get_currentPage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_currentPage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_entriesCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_entriesCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_maxEntires() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_maxEntires"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_pages() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_pages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_pageSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_pageSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_selectedIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_selectedIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PageEntrySelected(int pageEntry, int selectionIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PageEntrySelected"), {"pageEntry", "selectionIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pageEntry, selectionIndex);
        }
        void SelectEntryFromIndex(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectEntryFromIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void SelectEntryOnPage(int entryIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectEntryOnPage"), {"entryIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(entryIndex);
        }
        void set_currentPage(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentPage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_maxEntires(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_maxEntires"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_pages(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_pages"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_selectedIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_selectedIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetPage(int page) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPage"), {"page"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(page);
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
    };
}
