#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VoiceLoudnessReactorRendererColorTarget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VoiceLoudnessReactorRendererColorTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Color GetLastColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_lastColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Material*>* GetMaterials() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_materials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetColorProperty() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("colorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Gradient* GetGradient() {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("gradient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaterialIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("materialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetRenderer() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseSmoothedLoudness() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSmoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("_lastColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterials(::BNM::Structures::Mono::List<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_materials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorProperty(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("colorProperty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGradient(::Gradient* value) {
            static BNM::Field<::Gradient*> _field = GetClass().GetField(O("gradient"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("materialIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderer(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("renderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSmoothedLoudness(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSmoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Inititialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Inititialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateMaterialColor(float level) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMaterialColor"), {"level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(level);
        }
    };
}
