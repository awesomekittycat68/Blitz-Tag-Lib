#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "RoomSystem_ImpactFxContainer.hpp"
#include "RoomSystem_ProjectileSource.hpp"

namespace GlobalNamespace {
    struct RoomSystem_LaunchProjectileContainer : ::GlobalNamespace::RoomSystem_ImpactFxContainer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RoomSystem").GetInnerClass("LaunchProjectileContainer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::PhotonMessageInfoWrapped GetMessageInfo() {
            static BNM::Field<::GlobalNamespace::PhotonMessageInfoWrapped> _field = GetClass().GetField(O("messageInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverridecolour() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overridecolour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::RoomSystem_ProjectileSource GetProjectileSource() {
            static BNM::Field<::GlobalNamespace::RoomSystem_ProjectileSource> _field = GetClass().GetField(O("projectileSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTempThrowableGO() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tempThrowableGO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SnowballThrowable* GetTempThrowableRef() {
            static BNM::Field<::GlobalNamespace::SnowballThrowable*> _field = GetClass().GetField(O("tempThrowableRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetVelocity() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMessageInfo(::GlobalNamespace::PhotonMessageInfoWrapped value) {
            static BNM::Field<::GlobalNamespace::PhotonMessageInfoWrapped> _field = GetClass().GetField(O("messageInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverridecolour(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overridecolour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProjectileSource(::GlobalNamespace::RoomSystem_ProjectileSource value) {
            static BNM::Field<::GlobalNamespace::RoomSystem_ProjectileSource> _field = GetClass().GetField(O("projectileSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempThrowableGO(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tempThrowableGO"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempThrowableRef(::GlobalNamespace::SnowballThrowable* value) {
            static BNM::Field<::GlobalNamespace::SnowballThrowable*> _field = GetClass().GetField(O("tempThrowableRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnPlayFX() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayFX"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
