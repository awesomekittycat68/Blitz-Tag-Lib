#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PlayableBoundaryTracker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayableBoundaryTracker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetPrevSignedDistanceToBoundary() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_prevSignedDistanceToBoundary"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPrevSignedDistanceToBoundary(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_prevSignedDistanceToBoundary"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetSignedDistanceToBoundary() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_signedDistanceToBoundary"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetSignedDistanceToBoundary(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_signedDistanceToBoundary"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetTimeSinceCrossingBorder() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_timeSinceCrossingBorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimeSinceCrossingBorder(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_timeSinceCrossingBorder"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("radius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float get_prevSignedDistanceToBoundary() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_prevSignedDistanceToBoundary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_signedDistanceToBoundary() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_signedDistanceToBoundary"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_timeSinceCrossingBorder() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_timeSinceCrossingBorder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsInsideZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInsideZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ResetValues() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetValues"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_prevSignedDistanceToBoundary(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_prevSignedDistanceToBoundary"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_signedDistanceToBoundary(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_signedDistanceToBoundary"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_timeSinceCrossingBorder(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_timeSinceCrossingBorder"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void UpdateSignedDistanceToBoundary(float newDistance, float elapsed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSignedDistanceToBoundary"), {"newDistance", "elapsed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newDistance, elapsed);
        }
    };
}
