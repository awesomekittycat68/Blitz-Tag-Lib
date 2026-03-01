#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "OnCollisionEventsCosmetic_EventType.hpp"

namespace GorillaTag_Cosmetics {
    struct OnCollisionEventsCosmetic_Listener : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "OnCollisionEventsCosmetic").GetInnerClass("Listener");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetCollisionLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetCollisionTagsList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("collisionTagsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_EventType GetEventType() {
            static BNM::Field<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_EventType> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFireOnlyWhileHeld() {
            static BNM::Field<bool> _field = GetClass().GetField(O("fireOnlyWhileHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetListenerComponent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("listenerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetListenerComponentContactPoint() {
            static BNM::Field<void*> _field = GetClass().GetField(O("listenerComponentContactPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnCollidedVRRig() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCollidedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSyncForEveryoneInRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncForEveryoneInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTagSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tagSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollisionLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionTagsList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("collisionTagsList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventType(::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_EventType value) {
            static BNM::Field<::GorillaTag_Cosmetics::OnCollisionEventsCosmetic_EventType> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFireOnlyWhileHeld(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("fireOnlyWhileHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetListenerComponent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("listenerComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetListenerComponentContactPoint(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("listenerComponentContactPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCollidedVRRig(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onCollidedVRRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSyncForEveryoneInRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("syncForEveryoneInRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagSet(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tagSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
