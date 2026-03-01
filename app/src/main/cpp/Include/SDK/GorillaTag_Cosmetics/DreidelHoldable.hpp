#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/PhotonMessageInfoWrapped.hpp"
#include "../GlobalNamespace/TransferrableObject.hpp"
#include "Dreidel_Side.hpp"
#include "Dreidel_Variation.hpp"

namespace GorillaTag_Cosmetics {
    struct DreidelHoldable : ::GlobalNamespace::TransferrableObject {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "DreidelHoldable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RubberDuckEvents* GetEvents() {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::Dreidel* GetDreidelAnimation() {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel*> _field = GetClass().GetField(O("dreidelAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEvents(::GlobalNamespace::RubberDuckEvents* value) {
            static BNM::Field<::GlobalNamespace::RubberDuckEvents*> _field = GetClass().GetField(O("_events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDreidelAnimation(::GorillaTag_Cosmetics::Dreidel* value) {
            static BNM::Field<::GorillaTag_Cosmetics::Dreidel*> _field = GetClass().GetField(O("dreidelAnimation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DebugSpinDreidel() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DebugSpinDreidel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDreidelSpin(int sender, int target, ::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDreidelSpin"), {"sender", "target", "args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sender, target, args, info);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGrab(::GlobalNamespace::InteractionPoint* pointGrabbed, ::GameObject* grabbingHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrab"), {"pointGrabbed", "grabbingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pointGrabbed, grabbingHand);
        }
        bool OnRelease(::GlobalNamespace::DropZone* zoneReleased, ::GameObject* releasingHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("OnRelease"), {"zoneReleased", "releasingHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(zoneReleased, releasingHand);
        }
        void StartSpinLocal(::BNM::Structures::Unity::Vector3 surfacePoint, ::BNM::Structures::Unity::Vector3 surfaceNormal, float duration, bool counterClockwise, ::GorillaTag_Cosmetics::Dreidel_Side side, ::GorillaTag_Cosmetics::Dreidel_Variation variation, double startTime) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartSpinLocal"), {"surfacePoint", "surfaceNormal", "duration", "counterClockwise", "side", "variation", "startTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(surfacePoint, surfaceNormal, duration, counterClockwise, side, variation, startTime);
        }
    };
}
