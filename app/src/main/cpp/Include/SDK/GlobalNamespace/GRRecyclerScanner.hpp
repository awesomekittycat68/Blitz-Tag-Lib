#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameEntityId.hpp"

namespace GlobalNamespace {
    struct GRRecyclerScanner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRRecyclerScanner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TextMeshPro* GetAnnotationText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("annotationText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetDescriptionText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("descriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRRecycler* GetRecycler() {
            static BNM::Field<::GlobalNamespace::GRRecycler*> _field = GetClass().GetField(O("recycler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetRecyclerBarcodeAudio() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("recyclerBarcodeAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRecyclerBarcodeAudioVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("recyclerBarcodeAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetRecycleValueText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("recycleValueText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetTitleText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("titleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnnotationText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("annotationText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescriptionText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("descriptionText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecycler(::GlobalNamespace::GRRecycler* value) {
            static BNM::Field<::GlobalNamespace::GRRecycler*> _field = GetClass().GetField(O("recycler"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecyclerBarcodeAudio(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("recyclerBarcodeAudio"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecyclerBarcodeAudioVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("recyclerBarcodeAudioVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecycleValueText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("recycleValueText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("titleText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void ScanItem(::GlobalNamespace::GameEntityId id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ScanItem"), {"id"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id);
        }
    };
}
