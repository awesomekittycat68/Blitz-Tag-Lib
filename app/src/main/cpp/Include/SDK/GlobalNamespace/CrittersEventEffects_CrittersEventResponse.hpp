#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CrittersManager_CritterEvent.hpp"

namespace GlobalNamespace {
    struct CrittersEventEffects_CrittersEventResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CrittersEventEffects").GetInnerClass("CrittersEventResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetEffect() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("effect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CrittersManager_CritterEvent GetEventType() {
            static BNM::Field<::GlobalNamespace::CrittersManager_CritterEvent> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEffect(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("effect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEventType(::GlobalNamespace::CrittersManager_CritterEvent value) {
            static BNM::Field<::GlobalNamespace::CrittersManager_CritterEvent> _field = GetClass().GetField(O("eventType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
