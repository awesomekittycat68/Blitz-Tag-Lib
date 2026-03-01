#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct OnCollisionEventsCosmetic : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "OnCollisionEventsCosmetic");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* GetEnterListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("enterListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* GetEventListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("eventListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* GetExitListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("exitListeners"));
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
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* GetStayListeners() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("stayListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnterListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("enterListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("eventListeners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("exitListeners"));
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
        void SetStayListeners(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>*> _field = GetClass().GetField(O("stayListeners"));
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
        void Dispatch(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener*>* listeners, ::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispatch"), {"listeners", "collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(listeners, collision);
        }
        static bool IsCollisionUsable(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCollisionUsable"), {"collision"});
            return _m.Call(collision);
        }
        bool IsMyItem() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMyItem"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsTagValid(::GameObject* obj, ::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_Listener* listener) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsTagValid"), {"obj", "listener"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj, listener);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnCollisionExit(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionExit"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
        void OnCollisionStay(::BNM::IL2CPP::Il2CppObject* collision) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionStay"), {"collision"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(collision);
        }
    };
}
