#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/ModeSelectButton.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps {
    struct VirtualStumpModeSelectButton : ::GlobalNamespace::ModeSelectButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps", "VirtualStumpModeSelectButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void ButtonActivationWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivationWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
    };
}
