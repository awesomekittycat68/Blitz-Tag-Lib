#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonTransformViewPositionModel_ExtrapolateOptions.hpp"
#include "PhotonTransformViewPositionModel_InterpolateOptions.hpp"

namespace Photon_Pun {
    struct PhotonTransformViewPositionModel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonTransformViewPositionModel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetExtrapolateIncludingRoundTripTime() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExtrapolateIncludingRoundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetExtrapolateNumberOfStoredPositions() {
            static BNM::Field<int> _field = GetClass().GetField(O("ExtrapolateNumberOfStoredPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Pun::PhotonTransformViewPositionModel_ExtrapolateOptions GetExtrapolateOption() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel_ExtrapolateOptions> _field = GetClass().GetField(O("ExtrapolateOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetExtrapolateSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("ExtrapolateSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
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
        ::Photon_Pun::PhotonTransformViewPositionModel_InterpolateOptions GetInterpolateOption() {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel_InterpolateOptions> _field = GetClass().GetField(O("InterpolateOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSynchronizeEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("SynchronizeEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTeleportEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TeleportEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTeleportIfDistanceGreaterThan() {
            static BNM::Field<float> _field = GetClass().GetField(O("TeleportIfDistanceGreaterThan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExtrapolateIncludingRoundTripTime(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ExtrapolateIncludingRoundTripTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtrapolateNumberOfStoredPositions(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ExtrapolateNumberOfStoredPositions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtrapolateOption(::Photon_Pun::PhotonTransformViewPositionModel_ExtrapolateOptions value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel_ExtrapolateOptions> _field = GetClass().GetField(O("ExtrapolateOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExtrapolateSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ExtrapolateSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void SetInterpolateOption(::Photon_Pun::PhotonTransformViewPositionModel_InterpolateOptions value) {
            static BNM::Field<::Photon_Pun::PhotonTransformViewPositionModel_InterpolateOptions> _field = GetClass().GetField(O("InterpolateOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSynchronizeEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("SynchronizeEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TeleportEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportIfDistanceGreaterThan(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("TeleportIfDistanceGreaterThan"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
