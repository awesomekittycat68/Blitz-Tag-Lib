#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace NetSynchrony {
    struct RandomDispatcher_RandomDispatcherEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("NetSynchrony", "RandomDispatcher").GetInnerClass("RandomDispatcherEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(::NetSynchrony::RandomDispatcher* randomDispatcher, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"randomDispatcher", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(randomDispatcher, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::NetSynchrony::RandomDispatcher* randomDispatcher) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"randomDispatcher"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(randomDispatcher);
        }
    };
}
