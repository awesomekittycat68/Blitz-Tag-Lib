#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct OnTriggerEventsCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "OnTriggerEventsCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* GetEnterListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("enterListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* GetEventListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("eventListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* GetExitListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("exitListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetMyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetParentTransferable() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* GetStayListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("stayListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnterListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("enterListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("eventListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("exitListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("rig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStayListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("stayListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        static bool CompareTagAny(::GameObject* go, TP1 tagSet) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CompareTagAny"), {"go", "tagSet"});
            return _m.Call(go, tagSet);
        }
        void Dispatch(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener*>* listeners, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispatch"), {"listeners", "other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(listeners, other);
        }
        bool IsMyItem() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMyItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsOtherUsable(::Collider* other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsOtherUsable"), {"other"});
            return _m.Call(other);
        }
        bool IsTagValid(::GameObject* obj, ::GorillaTag_Cosmetics::OnTriggerEventsCosmetic_Listener* listener) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTagValid"), {"obj", "listener"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, listener);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
