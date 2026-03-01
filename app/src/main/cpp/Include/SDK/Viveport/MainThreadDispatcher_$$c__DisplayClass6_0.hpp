#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Viveport {
    struct MainThreadDispatcher_$$c__DisplayClass6_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Viveport", "MainThreadDispatcher").GetInnerClass("<>c__DisplayClass6_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Coroutine::IEnumerator* GetAction() {
            static BNM::Field<::BNM::Coroutine::IEnumerator*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAction(::BNM::Coroutine::IEnumerator* value) {
            static BNM::Field<::BNM::Coroutine::IEnumerator*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
