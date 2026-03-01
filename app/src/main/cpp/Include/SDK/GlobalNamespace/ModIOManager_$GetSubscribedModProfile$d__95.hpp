#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ModIOManager_$GetSubscribedModProfile$d__95 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModIOManager").GetInnerClass("<GetSubscribedModProfile>d__95");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<bool, ::BNM::IL2CPP::Il2CppObject*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetModId() {
            static BNM::Field<void*> _field = GetClass().GetField(O("modId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<bool, ::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, ::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetModId(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("modId"));
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
