#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipAuthenticator_$$c__DisplayClass15_1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipAuthenticator").GetInnerClass("<>c__DisplayClass15_1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext* GetContext() {
            static BNM::Field<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetContext(::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext* value) {
            static BNM::Field<::GlobalNamespace::MetaAuthenticator_GetDeviceAttestationTokenContext*> _field = GetClass().GetField(O("context"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
