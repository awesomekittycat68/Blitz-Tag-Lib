#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonTransformViewScaleModel_InterpolateOptions.hpp"

namespace Photon_Pun {
    struct PhotonTransformViewScaleModel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonTransformViewScaleModel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetInterpolateLerpSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("InterpolateLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInterpolateMoveTowardsSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("InterpolateMoveTowardsSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewScaleModel_InterpolateOptions GetInterpolateOption() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewScaleModel_InterpolateOptions> _field = GetClass().GetField(O("InterpolateOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSynchronizeEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SynchronizeEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInterpolateLerpSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("InterpolateLerpSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterpolateMoveTowardsSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("InterpolateMoveTowardsSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterpolateOption(::Photon_Pun::PhotonTransformViewScaleModel_InterpolateOptions value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewScaleModel_InterpolateOptions> _field = GetClass().GetField(O("InterpolateOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchronizeEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SynchronizeEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
