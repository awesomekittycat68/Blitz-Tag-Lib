#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/XSceneRef.hpp"

namespace GorillaLocomotion_Climbing {
    struct HandHoldXSceneRef : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Climbing", "HandHoldXSceneRef");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::HandHold* GetTarget() {
            static BNM::Method<::GlobalNamespace::HandHold*> _method = GetClass().GetMethod(O("get_target"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GameObject* GetTargetObject() {
            static BNM::Method<::GameObject*> _method = GetClass().GetMethod(O("get_targetObject"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::XSceneRef GetReference() {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("reference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetReference(::GlobalNamespace::XSceneRef value) {
            static BNM::Field<::GlobalNamespace::XSceneRef> _field = GetClass().GetField(O("reference"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::HandHold* get_target() {
            static BNM::Method<::GlobalNamespace::HandHold*> _m = GetClass().GetMethod(O("get_target"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GameObject* get_targetObject() {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("get_targetObject"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
