#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FingerFlexReactor_FingerMap.hpp"

namespace GlobalNamespace {
    struct FingerFlexReactor_BlendShapeTarget : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FingerFlexReactor").GetInnerClass("BlendShapeTarget");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBlendShapeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("blendShapeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetInputRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("inputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetOutputRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("outputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FingerFlexReactor_FingerMap GetSourceFinger() {
            static BNM::Field<::GlobalNamespace::FingerFlexReactor_FingerMap> _field = GetClass().GetField(O("sourceFinger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetTargetRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("targetRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlendShapeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("blendShapeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInputRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("inputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("outputRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSourceFinger(::GlobalNamespace::FingerFlexReactor_FingerMap value) {
            static BNM::Field<::GlobalNamespace::FingerFlexReactor_FingerMap> _field = GetClass().GetField(O("sourceFinger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("targetRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
