#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VoiceLoudnessReactorBlendShapeTarget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VoiceLoudnessReactorBlendShapeTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBlendShapeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("BlendShapeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetSkinnedMeshRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("SkinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseSmoothedLoudness() {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseSmoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlendShapeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("BlendShapeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkinnedMeshRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("SkinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSmoothedLoudness(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("UseSmoothedLoudness"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
