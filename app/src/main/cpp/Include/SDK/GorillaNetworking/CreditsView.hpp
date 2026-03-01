#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaKeyboardBindings.hpp"

namespace GorillaNetworking {
    struct CreditsView : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CreditsView");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* CREDITS_KEY = "CREDITS";
        static constexpr const char* CREDITS_PRESS_ENTER_KEY = "CREDITS_PRESS_ENTER";
        static constexpr const char* CREDITS_CONTINUED_KEY = "CREDITS_CONTINUED";
        static constexpr const char* PlayFabKey = "CreditsData";
        int GetTotalPages() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalPages"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaNetworking::CreditsSection*>* GetCreditsSections() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CreditsSection*>*> _field = GetClass().GetField(O("creditsSections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPageSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("pageSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCreditsSections(::BNM::Structures::Mono::Array<::GorillaNetworking::CreditsSection*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::CreditsSection*>*> _field = GetClass().GetField(O("creditsSections"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPageSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pageSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_TotalPages() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalPages"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetPage(int page) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPage"), {"page"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(page);
        }
        void* GetPageEntries(int page) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetPageEntries"), {"page"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(page);
        }
        ::BNM::Structures::Mono::String* GetScreenText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetScreenText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* PageOfSection(::GorillaNetworking::CreditsSection* section, int page) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("PageOfSection"), {"section", "page"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(section, page);
        }
        int PagesPerSection(::GorillaNetworking::CreditsSection* section) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PagesPerSection"), {"section"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(section);
        }
        void ProcessButtonPress(::GorillaNetworking::GorillaKeyboardBindings buttonPressed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessButtonPress"), {"buttonPressed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buttonPressed);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
