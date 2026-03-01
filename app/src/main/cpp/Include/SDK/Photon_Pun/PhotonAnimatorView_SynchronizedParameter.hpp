#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonAnimatorView_ParameterType.hpp"
#include "PhotonAnimatorView_SynchronizeType.hpp"

namespace Photon_Pun {
    struct PhotonAnimatorView_SynchronizedParameter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonAnimatorView").GetInnerClass("SynchronizedParameter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonAnimatorView_SynchronizeType GetSynchronizeType() {
            static BNM::Field<::Photon_Pun::PhotonAnimatorView_SynchronizeType> _field = GetClass().GetField(O("SynchronizeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonAnimatorView_ParameterType GetType_f() {
            static BNM::Field<::Photon_Pun::PhotonAnimatorView_ParameterType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchronizeType(::Photon_Pun::PhotonAnimatorView_SynchronizeType value) {
            static BNM::Field<::Photon_Pun::PhotonAnimatorView_SynchronizeType> _field = GetClass().GetField(O("SynchronizeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::Photon_Pun::PhotonAnimatorView_ParameterType value) {
            static BNM::Field<::Photon_Pun::PhotonAnimatorView_ParameterType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
