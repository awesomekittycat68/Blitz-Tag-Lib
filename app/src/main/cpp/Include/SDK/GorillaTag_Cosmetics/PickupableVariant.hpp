#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct PickupableVariant : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "PickupableVariant");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void DelayedPickup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DelayedPickup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Pickup(bool isAutoPickup) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Pickup"), {"isAutoPickup"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isAutoPickup);
        }
        void Release(::GlobalNamespace::HoldableObject* holdable, ::BNM::Structures::Unity::Vector3 startPosition, ::BNM::Structures::Unity::Vector3 releaseVelocity, float playerScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"), {"holdable", "startPosition", "releaseVelocity", "playerScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(holdable, startPosition, releaseVelocity, playerScale);
        }
    };
}
