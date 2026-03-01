#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GrabbingColorPicker : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GrabbingColorPicker");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::PushableSlider* GetBPushSlider() {
            static BNM::Field<::GlobalNamespace::PushableSlider*> _field = GetClass().GetField(O("B_PushSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetBSliderAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("B_SliderAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetColorSwatch() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ColorSwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PushableSlider* GetGPushSlider() {
            static BNM::Field<::GlobalNamespace::PushableSlider*> _field = GetClass().GetField(O("G_PushSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetGSliderAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("G_SliderAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasUpdated() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PushableSlider* GetRPushSlider() {
            static BNM::Field<::GlobalNamespace::PushableSlider*> _field = GetClass().GetField(O("R_PushSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetRSliderAudio() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("R_SliderAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSegment1() {
            static BNM::Field<int> _field = GetClass().GetField(O("Segment1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSegment2() {
            static BNM::Field<int> _field = GetClass().GetField(O("Segment2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSegment3() {
            static BNM::Field<int> _field = GetClass().GetField(O("Segment3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSetPlayerColor() {
            static BNM::Field<bool> _field = GetClass().GetField(O("setPlayerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTextB() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("textB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTextG() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("textG"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTextR() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("textR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUpdateColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("UpdateColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBPushSlider(::GlobalNamespace::PushableSlider* value) {
            static BNM::Field<::GlobalNamespace::PushableSlider*> _field = GetClass().GetField(O("B_PushSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBSliderAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("B_SliderAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorSwatch(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("ColorSwatch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGPushSlider(::GlobalNamespace::PushableSlider* value) {
            static BNM::Field<::GlobalNamespace::PushableSlider*> _field = GetClass().GetField(O("G_PushSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGSliderAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("G_SliderAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasUpdated(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRPushSlider(::GlobalNamespace::PushableSlider* value) {
            static BNM::Field<::GlobalNamespace::PushableSlider*> _field = GetClass().GetField(O("R_PushSlider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRSliderAudio(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("R_SliderAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegment1(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Segment1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegment2(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Segment2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSegment3(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Segment3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetPlayerColor(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("setPlayerColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextB(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("textB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextG(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("textG"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextR(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("textR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("UpdateColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void HandleLocalColorChanged(::BNM::Structures::Unity::Color newColor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleLocalColorChanged"), {"newColor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newColor);
        }
        void LoadPlayerColor(float r, float g, float b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadPlayerColor"), {"r", "g", "b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(r, g, b);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetSliders(::BNM::Structures::Unity::Vector3 v) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetSliders"), {"v"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(v);
        }
        void SetPlayerColor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlayerColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetSliderColors(float r, float g, float b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetSliderColors"), {"r", "g", "b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(r, g, b);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateDisplay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDisplay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
