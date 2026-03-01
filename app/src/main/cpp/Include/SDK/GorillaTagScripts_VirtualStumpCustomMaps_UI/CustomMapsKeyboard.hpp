#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTagScripts_UI/GorillaKeyWrapper$1.hpp"
#include "CustomMapKeyboardBinding.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps_UI {
    struct CustomMapsKeyboard : ::GorillaTagScripts_UI::GorillaKeyWrapper$1<::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapsKeyboard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::String* BindingToString(::GorillaTagScripts_VirtualStumpCustomMaps_UI::CustomMapKeyboardBinding binding) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("BindingToString"), {"binding"});
            return _m.Call(binding);
        }
    };
}
