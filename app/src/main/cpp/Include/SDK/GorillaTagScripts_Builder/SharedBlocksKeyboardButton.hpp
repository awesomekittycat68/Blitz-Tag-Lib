#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaKeyButton$1.hpp"
#include "SharedBlocksKeyboardBindings.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksKeyboardButton : ::GlobalNamespace::GorillaKeyButton$1<::GorillaTagScripts_Builder::SharedBlocksKeyboardBindings> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksKeyboardButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnButtonPressedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonPressedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
