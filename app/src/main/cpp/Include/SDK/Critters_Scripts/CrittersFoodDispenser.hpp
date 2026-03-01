#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/CrittersActor.hpp"

namespace Critters_Scripts {
    struct CrittersFoodDispenser : ::GlobalNamespace::CrittersActor {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Critters.Scripts", "CrittersFoodDispenser");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHeldByPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("heldByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHeldByPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("heldByPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor, bool positionOverride, ::BNM::Structures::Unity::Quaternion localRotation, ::BNM::Structures::Unity::Vector3 localOffset, bool disableGrabbing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbedBy"), {"grabbingActor", "positionOverride", "localRotation", "localOffset", "disableGrabbing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor, positionOverride, localRotation, localOffset, disableGrabbing);
        }
        void HandleRemoteReleased() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleRemoteReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Released(bool keepWorldPosition, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Vector3 impulseVelocity, ::BNM::Structures::Unity::Vector3 impulseAngularVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Released"), {"keepWorldPosition", "rotation", "position", "impulseVelocity", "impulseAngularVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(keepWorldPosition, rotation, position, impulseVelocity, impulseAngularVelocity);
        }
        void RemoteGrabbedBy(::GlobalNamespace::CrittersActor* grabbingActor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoteGrabbedBy"), {"grabbingActor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabbingActor);
        }
    };
}
