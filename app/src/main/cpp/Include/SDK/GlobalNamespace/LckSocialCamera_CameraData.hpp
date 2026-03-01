#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LckSocialCamera_CameraState.hpp"

namespace GlobalNamespace {
    struct LckSocialCamera_CameraData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckSocialCamera").GetInnerClass("CameraData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::LckSocialCamera_CameraState GetCurrentState() {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentState(::GlobalNamespace::LckSocialCamera_CameraState value) {
            static BNM::Field<::GlobalNamespace::LckSocialCamera_CameraState> _field = GetClass().GetField(O("currentState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
