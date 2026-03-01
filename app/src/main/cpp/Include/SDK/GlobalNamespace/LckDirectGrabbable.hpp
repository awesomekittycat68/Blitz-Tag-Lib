#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LckDirectGrabbable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckDirectGrabbable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaGrabber* GetGrabber() {
            static BNM::Method<::GlobalNamespace::GorillaGrabber*> _method = GetClass().GetMethod(O("get_grabber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsGrabbed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isGrabbed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void add_onGrabbed(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onGrabbed(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_onReleased(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_onReleased(::BNM::Structures::Mono::Action<>* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onReleased"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        ::GlobalNamespace::GorillaGrabber* GetGrabber_f() {
            static BNM::Field<::GlobalNamespace::GorillaGrabber*> _field = GetClass().GetField(O("_grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetOriginalTargetParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_originalTargetParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPrecise() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_precise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnGrabbed() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<>* GetOnReleased() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTabletGrabbed() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTabletGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTabletReleased() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTabletReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTarget() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabber(::GlobalNamespace::GorillaGrabber* value) {
            static BNM::Field<::GlobalNamespace::GorillaGrabber*> _field = GetClass().GetField(O("_grabber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalTargetParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_originalTargetParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrecise(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_precise"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnGrabbed(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnReleased(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTabletGrabbed(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTabletGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTabletReleased(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTabletReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_onGrabbed_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onGrabbed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_onReleased_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_onReleased"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool CanBeGrabbed(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanBeGrabbed"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabber);
        }
        void ForceGrab(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceGrab"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabber);
        }
        void ForceRelease() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceRelease"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GorillaGrabber* get_grabber() {
            static BNM::Method<::GlobalNamespace::GorillaGrabber*> _m = GetClass().GetMethod(O("get_grabber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isGrabbed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isGrabbed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 GetLocalGrabbedPosition(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GetLocalGrabbedPosition"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(grabber);
        }
        bool IsSlingshotHeldInHand(bool& leftHand, bool& rightHand) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSlingshotHeldInHand"), {"leftHand", "rightHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&leftHand, &rightHand);
        }
        bool MomentaryGrabOnly() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MomentaryGrabOnly"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnGrabbed(::GlobalNamespace::GorillaGrabber* grabber, ::Transform*& grabbedTransform, ::BNM::Structures::Unity::Vector3& localGrabbedPosition) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbed"), {"grabber", "grabbedTransform", "localGrabbedPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabber, &grabbedTransform, &localGrabbedPosition);
        }
        void OnGrabReleased(::GlobalNamespace::GorillaGrabber* grabber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabReleased"), {"grabber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(grabber);
        }
        void remove_onGrabbed_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onGrabbed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_onReleased_1(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_onReleased"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetOriginalTargetParent_1(::Transform* parent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOriginalTargetParent"), {"parent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent);
        }
    };
}
