#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HandTrackingFingerCurl : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandTrackingFingerCurl");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetGripCurl() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_GripCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetGripCurl(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_GripCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetThumbCurl() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_ThumbCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetThumbCurl(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ThumbCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetTriggerCurl() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_TriggerCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTriggerCurl(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TriggerCurl"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetActivationEnd() {
            static BNM::Field<float> _field = GetClass().GetField(O("ActivationEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetActivationStart() {
            static BNM::Field<float> _field = GetClass().GetField(O("ActivationStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetBoneXforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("boneXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurlMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("CurlMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSkeleton() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("skeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivationEnd(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ActivationEnd"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActivationStart(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ActivationStart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBoneXforms(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("boneXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurlMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("CurlMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkeleton(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("skeleton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*, typename TP1 = void*, typename TP2 = void*, typename TP3 = void*>
        float CalcFingerCurl(TP0 distal, TP1 intermediate, TP2 proximal, TP3 metacarpal) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CalcFingerCurl"), {"distal", "intermediate", "proximal", "metacarpal"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(distal, intermediate, proximal, metacarpal);
        }
        float get_GripCurl() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_GripCurl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_ThumbCurl() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_ThumbCurl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_TriggerCurl() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_TriggerCurl"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_GripCurl(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_GripCurl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ThumbCurl(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ThumbCurl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TriggerCurl(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TriggerCurl"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
