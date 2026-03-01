#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandSocketConstraint.hpp"
#include "TimeSince.hpp"

namespace GlobalNamespace {
    struct GorillaHandSocket : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaHandSocket");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaHandNode* GetAttachedHand() {
            static BNM::Method<::GlobalNamespace::GorillaHandNode*> _method = GetClass().GetMethod(O("get_attachedHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetInUse() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_inUse"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::GorillaHandNode* GetAttachedHand_f() {
            static BNM::Field<::GlobalNamespace::GorillaHandNode*> _field = GetClass().GetField(O("_attachedHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInUse_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_inUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSince GetSinceSocketStateChange() {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceSocketStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAttachCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("attachCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandSocketConstraint GetConstraint() {
            static BNM::Field<::GlobalNamespace::HandSocketConstraint> _field = GetClass().GetField(O("constraint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::Collider*, ::GlobalNamespace::GorillaHandSocket*>* GetGColliderToSocket() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Collider*, ::GlobalNamespace::GorillaHandSocket*>*> _field = GetClass().GetField(O("gColliderToSocket"));
            return _field.Get();
        }
        void SetAttachedHand(::GlobalNamespace::GorillaHandNode* value) {
            static BNM::Field<::GlobalNamespace::GorillaHandNode*> _field = GetClass().GetField(O("_attachedHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInUse(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_inUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSinceSocketStateChange(::GlobalNamespace::TimeSince value) {
            static BNM::Field<::GlobalNamespace::TimeSince> _field = GetClass().GetField(O("_sinceSocketStateChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("attachCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("collider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConstraint(::GlobalNamespace::HandSocketConstraint value) {
            static BNM::Field<::GlobalNamespace::HandSocketConstraint> _field = GetClass().GetField(O("constraint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Attach(::GlobalNamespace::GorillaHandNode* hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Attach"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hand);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanAttach() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanAttach"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Detach() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Detach"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Detach(::GlobalNamespace::GorillaHandNode*& hand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Detach"), {"hand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&hand);
        }
        static bool FetchSocket(::Collider* collider, ::GlobalNamespace::GorillaHandSocket*& socket) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("FetchSocket"), {"collider", "socket"});
            return _m.Call(collider, &socket);
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::GorillaHandNode* get_attachedHand() {
            static BNM::Method<::GlobalNamespace::GorillaHandNode*> _m = GetClass().GetMethod(O("get_attachedHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_inUse() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_inUse"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHandAttach() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandAttach"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnHandDetach() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnHandDetach"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnUpdateAttached() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpdateAttached"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
