#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_AI {
    struct StateMachine_Transition : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.AI", "StateMachine").GetInnerClass("Transition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Func<bool>* GetCondition() {
            static BNM::Method<::BNM::Structures::Mono::Func<bool>*> _method = GetClass().GetMethod(O("get_Condition"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Func<bool>* get_Condition() {
            static BNM::Method<::BNM::Structures::Mono::Func<bool>*> _m = GetClass().GetMethod(O("get_Condition"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_To() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_To"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
