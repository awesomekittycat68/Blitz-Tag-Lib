#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderPieceEffectInfo : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderPieceEffectInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetDisconnectVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disconnectVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGrabbedVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLocationLockVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("locationLockVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlaceVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("placeVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRecycleVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("recycleVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTooHeavyVFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tooHeavyVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisconnectVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disconnectVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("grabbedVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocationLockVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("locationLockVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlaceVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("placeVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecycleVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("recycleVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTooHeavyVFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tooHeavyVFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
