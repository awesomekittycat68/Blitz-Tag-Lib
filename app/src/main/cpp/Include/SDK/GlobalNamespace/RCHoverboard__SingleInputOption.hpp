#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTOption$1.hpp"
#include "RCHoverboard__EInputSource.hpp"
#include "StringEnum$1.hpp"
#include "../GorillaTag_Cosmetics/RCRemoteHoldable_RCInput.hpp"

namespace GlobalNamespace {
    struct RCHoverboard__SingleInputOption : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RCHoverboard").GetInnerClass("_SingleInputOption");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float Get(::GorillaTag_Cosmetics::RCRemoteHoldable_RCInput input) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("Get"), {"input"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input);
        }
    };
}
