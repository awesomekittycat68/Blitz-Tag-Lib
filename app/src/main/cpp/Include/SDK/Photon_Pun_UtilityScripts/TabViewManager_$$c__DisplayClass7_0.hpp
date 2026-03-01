#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct TabViewManager_$$c__DisplayClass7_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "TabViewManager").GetInnerClass("<>c__DisplayClass7_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun_UtilityScripts::TabViewManager_Tab* GetTab() {
            static BNM::Field<::Photon_Pun_UtilityScripts::TabViewManager_Tab*> _field = GetClass().GetField(O("_tab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTab(::Photon_Pun_UtilityScripts::TabViewManager_Tab* value) {
            static BNM::Field<::Photon_Pun_UtilityScripts::TabViewManager_Tab*> _field = GetClass().GetField(O("_tab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
