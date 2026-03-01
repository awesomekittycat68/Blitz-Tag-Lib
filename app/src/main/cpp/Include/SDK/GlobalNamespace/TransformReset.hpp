#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TransformReset_OriginalGameObjectTransform.hpp"

namespace GlobalNamespace {
    struct TransformReset : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransformReset");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>* GetTempTransformList() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>*> _field = GetClass().GetField(O("tempTransformList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>* GetTransformList() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>*> _field = GetClass().GetField(O("transformList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTempTransformList(::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>*> _field = GetClass().GetField(O("tempTransformList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformList(::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::TransformReset_OriginalGameObjectTransform>*> _field = GetClass().GetField(O("transformList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetTransforms() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetTransforms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReturnTransforms() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnTransforms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetScale(float ratio) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScale"), {"ratio"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ratio);
        }
    };
}
