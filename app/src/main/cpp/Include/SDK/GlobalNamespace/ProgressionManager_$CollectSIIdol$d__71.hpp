#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_$CollectSIIdol$d__71 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("<CollectSIIdol>d__71");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnFailure() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* GetOnSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*> _field = GetClass().GetField(O("OnSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnFailure(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSuccess(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserQuestsStatusResponse*>*> _field = GetClass().GetField(O("OnSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void MoveNext() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SetStateMachine(TP0 stateMachine) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStateMachine"), {"stateMachine"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stateMachine);
        }
    };
}
