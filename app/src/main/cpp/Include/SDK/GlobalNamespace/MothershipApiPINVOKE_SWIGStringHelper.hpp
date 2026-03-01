#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipApiPINVOKE_SWIGStringHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApiPINVOKE").GetInnerClass("SWIGStringHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::MothershipApiPINVOKE_SWIGStringHelper_SWIGStringDelegate* GetStringDelegate() {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGStringHelper_SWIGStringDelegate*> _field = GetClass().GetField(O("stringDelegate"));
            return _field.Get();
        }
        static void SetStringDelegate(::GlobalNamespace::MothershipApiPINVOKE_SWIGStringHelper_SWIGStringDelegate* value) {
            static BNM::Field<::GlobalNamespace::MothershipApiPINVOKE_SWIGStringHelper_SWIGStringDelegate*> _field = GetClass().GetField(O("stringDelegate"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::String* CreateString(::BNM::Structures::Mono::String* cString) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("CreateString"), {"cString"});
            return _m.Call(cString);
        }
        static void SWIGRegisterStringCallback_MothershipApi(::GlobalNamespace::MothershipApiPINVOKE_SWIGStringHelper_SWIGStringDelegate* stringDelegate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SWIGRegisterStringCallback_MothershipApi"), {"stringDelegate"});
            _m.Call(stringDelegate);
        }
    };
}
