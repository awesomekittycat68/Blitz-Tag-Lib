#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MouthFlapLevel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MouthFlapLevel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCycleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>* GetFaces() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("faces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxRequiredVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRequiredVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinRequiredVolume() {
            static BNM::Field<float> _field = GetClass().GetField(O("minRequiredVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCycleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFaces(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector2>*> _field = GetClass().GetField(O("faces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRequiredVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxRequiredVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinRequiredVolume(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minRequiredVolume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
