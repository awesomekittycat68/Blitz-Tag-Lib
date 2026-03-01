#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SplineWalkerMode.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct SplineWalker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SplineWalker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun::PhotonView* GetView() {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("_view"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDoNetworkSync() {
            static BNM::Field<bool> _field = GetClass().GetField(O("DoNetworkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGoingForward() {
            static BNM::Field<bool> _field = GetClass().GetField(O("goingForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LinearSpline* GetLinearSpline() {
            static BNM::Field<::GlobalNamespace::LinearSpline*> _field = GetClass().GetField(O("linearSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLookForward() {
            static BNM::Field<bool> _field = GetClass().GetField(O("lookForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SplineWalkerMode GetMode() {
            static BNM::Field<::GlobalNamespace::SplineWalkerMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetProgress() {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BezierSpline* GetSpline() {
            static BNM::Field<::GlobalNamespace::BezierSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseWorldPosition() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useWorldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWalkLinearPath() {
            static BNM::Field<bool> _field = GetClass().GetField(O("walkLinearPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetView(::Photon_Pun::PhotonView* value) {
            static BNM::Field<::Photon_Pun::PhotonView*> _field = GetClass().GetField(O("_view"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoNetworkSync(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("DoNetworkSync"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGoingForward(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("goingForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearSpline(::GlobalNamespace::LinearSpline* value) {
            static BNM::Field<::GlobalNamespace::LinearSpline*> _field = GetClass().GetField(O("linearSpline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookForward(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("lookForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::GlobalNamespace::SplineWalkerMode value) {
            static BNM::Field<::GlobalNamespace::SplineWalkerMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgress(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("progress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpline(::GlobalNamespace::BezierSpline* value) {
            static BNM::Field<::GlobalNamespace::BezierSpline*> _field = GetClass().GetField(O("spline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseWorldPosition(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useWorldPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWalkLinearPath(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("walkLinearPath"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPhotonSerializeView(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonSerializeView"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
