#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaHandNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaHandNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsGripping() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isGripping"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLeftHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isLeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsRightHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isRightHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsLeftHand_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRightHand_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaHandSocket* GetAttachedToSocket() {
            static BNM::Field<::GlobalNamespace::GorillaHandSocket*> _field = GetClass().GetField(O("attachedToSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIgnoreSockets() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreSockets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapIndex* GetVrIndex() {
            static BNM::Field<::GlobalNamespace::VRMapIndex*> _field = GetClass().GetField(O("vrIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapMiddle* GetVrMiddle() {
            static BNM::Field<::GlobalNamespace::VRMapMiddle*> _field = GetClass().GetField(O("vrMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRMapThumb* GetVrThumb() {
            static BNM::Field<::GlobalNamespace::VRMapThumb*> _field = GetClass().GetField(O("vrThumb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRightHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachedToSocket(::GlobalNamespace::GorillaHandSocket* value) {
            static BNM::Field<::GlobalNamespace::GorillaHandSocket*> _field = GetClass().GetField(O("attachedToSocket"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIgnoreSockets(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ignoreSockets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrIndex(::GlobalNamespace::VRMapIndex* value) {
            static BNM::Field<::GlobalNamespace::VRMapIndex*> _field = GetClass().GetField(O("vrIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrMiddle(::GlobalNamespace::VRMapMiddle* value) {
            static BNM::Field<::GlobalNamespace::VRMapMiddle*> _field = GetClass().GetField(O("vrMiddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrThumb(::GlobalNamespace::VRMapThumb* value) {
            static BNM::Field<::GlobalNamespace::VRMapThumb*> _field = GetClass().GetField(O("vrThumb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_isGripping() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isGripping"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isLeftHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isLeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_isRightHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isRightHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        bool PollGrip() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PollGrip"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float PollIndex() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PollIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float PollMiddle() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PollMiddle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float PollThumb() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("PollThumb"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
