#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct TabViewManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "TabViewManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun_UtilityScripts::TabViewManager_Tab* GetCurrentTab() {
            static BNM::Field<::Photon_Pun_UtilityScripts::TabViewManager_Tab*> _field = GetClass().GetField(O("CurrentTab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun_UtilityScripts::TabViewManager_TabChangeEvent* GetOnTabChanged() {
            static BNM::Field<::Photon_Pun_UtilityScripts::TabViewManager_TabChangeEvent*> _field = GetClass().GetField(O("OnTabChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::Photon_Pun_UtilityScripts::TabViewManager_Tab*>* GetTabLut() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::Photon_Pun_UtilityScripts::TabViewManager_Tab*>*> _field = GetClass().GetField(O("Tab_lut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Photon_Pun_UtilityScripts::TabViewManager_Tab*>* GetTabs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun_UtilityScripts::TabViewManager_Tab*>*> _field = GetClass().GetField(O("Tabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetToggleGroup() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ToggleGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentTab(::Photon_Pun_UtilityScripts::TabViewManager_Tab* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::TabViewManager_Tab*> _field = GetClass().GetField(O("CurrentTab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTabChanged(::Photon_Pun_UtilityScripts::TabViewManager_TabChangeEvent* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::TabViewManager_TabChangeEvent*> _field = GetClass().GetField(O("OnTabChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTabLut(::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::Photon_Pun_UtilityScripts::TabViewManager_Tab*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::Photon_Pun_UtilityScripts::TabViewManager_Tab*>*> _field = GetClass().GetField(O("Tab_lut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTabs(::BNM::Structures::Mono::Array<::Photon_Pun_UtilityScripts::TabViewManager_Tab*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Photon_Pun_UtilityScripts::TabViewManager_Tab*>*> _field = GetClass().GetField(O("Tabs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggleGroup(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ToggleGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTabSelected(::Photon_Pun_UtilityScripts::TabViewManager_Tab* tab) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTabSelected"), {"tab"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tab);
        }
        void SelectTab(::BNM::Structures::Mono::String* id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SelectTab"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
