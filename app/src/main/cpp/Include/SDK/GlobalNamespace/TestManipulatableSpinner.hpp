#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TestManipulatableSpinner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TestManipulatableSpinner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetRotationScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ManipulatableSpinner* GetSpinner() {
            static BNM::Field<::GlobalNamespace::ManipulatableSpinner*> _field = GetClass().GetField(O("spinner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRotationScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotationScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpinner(::GlobalNamespace::ManipulatableSpinner* value) {
            static BNM::Field<::GlobalNamespace::ManipulatableSpinner*> _field = GetClass().GetField(O("spinner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
