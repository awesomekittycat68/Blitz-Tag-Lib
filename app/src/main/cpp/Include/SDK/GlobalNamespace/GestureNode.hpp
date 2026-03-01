#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GestureAlignment.hpp"
#include "GestureDigitFlexion.hpp"
#include "GestureHandState.hpp"
#include "GestureNodeFlags.hpp"

namespace GlobalNamespace {
    struct GestureNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GestureNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GestureAlignment GetAlignment() {
            static BNM::Field<::GlobalNamespace::GestureAlignment> _field = GetClass().GetField(O("alignment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GestureNodeFlags GetFlags() {
            static BNM::Field<::GlobalNamespace::GestureNodeFlags> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GestureDigitFlexion GetFlexion() {
            static BNM::Field<::GlobalNamespace::GestureDigitFlexion> _field = GetClass().GetField(O("flexion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GestureHandState GetState() {
            static BNM::Field<::GlobalNamespace::GestureHandState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTrack() {
            static BNM::Field<bool> _field = GetClass().GetField(O("track"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAlignment(::GlobalNamespace::GestureAlignment value) {
            static BNM::Field<::GlobalNamespace::GestureAlignment> _field = GetClass().GetField(O("alignment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlags(::GlobalNamespace::GestureNodeFlags value) {
            static BNM::Field<::GlobalNamespace::GestureNodeFlags> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlexion(::GlobalNamespace::GestureDigitFlexion value) {
            static BNM::Field<::GlobalNamespace::GestureDigitFlexion> _field = GetClass().GetField(O("flexion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GestureHandState value) {
            static BNM::Field<::GlobalNamespace::GestureHandState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrack(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("track"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
