#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameStateFx_BehaviourInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameStateFx").GetInnerClass("BehaviourInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Behaviour* GetBehaviour() {
            static BNM::Field<::Behaviour*> _field = GetClass().GetField(O("behaviour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBehaviour(::Behaviour* value) {
            static BNM::Field<::Behaviour*> _field = GetClass().GetField(O("behaviour"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
