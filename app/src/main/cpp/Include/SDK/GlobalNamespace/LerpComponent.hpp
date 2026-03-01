#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LerpComponent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LerpComponent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCanRender() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanRender"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLerp() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Lerp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLerp(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Lerp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetLerpTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LerpTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLerpTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LerpTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetCancelPreview() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_cancelPreview"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastState() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerp_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpLength() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lerpLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LerpChangedEvent* GetOnLerpChanged() {
            static BNM::Field<::GlobalNamespace::LerpChangedEvent*> _field = GetClass().GetField(O("_onLerpChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreviewInEditor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_previewInEditor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPreviewing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_previewing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPrevLerpFrom() {
            static BNM::Field<float> _field = GetClass().GetField(O("_prevLerpFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPrevLerpTo() {
            static BNM::Field<float> _field = GetClass().GetField(O("_prevLerpTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRendering() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rendering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCancelPreview(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_cancelPreview"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastState(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerp_fs(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpLength(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lerpLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLerpChanged(::GlobalNamespace::LerpChangedEvent* value) {
            static BNM::Field<::GlobalNamespace::LerpChangedEvent*> _field = GetClass().GetField(O("_onLerpChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviewInEditor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_previewInEditor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviewing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_previewing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevLerpFrom(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_prevLerpFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevLerpTo(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_prevLerpTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRendering(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_rendering"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_CanRender() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanRender"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_Lerp() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Lerp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_LerpTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LerpTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LerpToOne() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LerpToOne"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LerpToZero() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LerpToZero"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmosSelected() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmosSelected"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLerp(float t) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLerp"), {"t"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(t);
        }
        void RenderLerp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RenderLerp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Lerp(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Lerp"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LerpTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LerpTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void StartPreview(float lerpFrom, float lerpTo) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPreview"), {"lerpFrom", "lerpTo"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lerpFrom, lerpTo);
        }
        void TryEditorRender(bool playModeCheck) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryEditorRender"), {"playModeCheck"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playModeCheck);
        }
        void Validate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Validate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
