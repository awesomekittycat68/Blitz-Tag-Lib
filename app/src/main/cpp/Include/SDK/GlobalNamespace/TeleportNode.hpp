#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTriggerBox.hpp"
#include "XSceneRef.hpp"

namespace GlobalNamespace {
    struct TeleportNode : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TeleportNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::XSceneRef GetTeleportFromRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("teleportFromRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTeleportTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::XSceneRef GetTeleportToRef() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("teleportToRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTeleportFromRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("teleportFromRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("teleportTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeleportToRef(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("teleportToRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Coroutine::IEnumerator* DelayedTeleport(::GorillaLocomotion::GTPlayer* p, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("DelayedTeleport"), {"p", "position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p, position, rotation);
        }
        void OnBoxTriggered() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBoxTriggered"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
