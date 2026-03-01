#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonAnimatorView_SynchronizeType.hpp"

namespace Photon_Pun {
    struct PhotonAnimatorView_SynchronizedLayer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonAnimatorView").GetInnerClass("SynchronizedLayer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetLayerIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("LayerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonAnimatorView_SynchronizeType GetSynchronizeType() {
            static BNM::Field<::Photon_Pun::PhotonAnimatorView_SynchronizeType> _field = GetClass().GetField(O("SynchronizeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLayerIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LayerIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchronizeType(::Photon_Pun::PhotonAnimatorView_SynchronizeType value) {
            static BNM::Field<::Photon_Pun::PhotonAnimatorView_SynchronizeType> _field = GetClass().GetField(O("SynchronizeType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
