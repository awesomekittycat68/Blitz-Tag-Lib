#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameAgent_NavigationFailedEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameAgent").GetInnerClass("NavigationFailedEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*, typename TP4 = void*>
        void* BeginInvoke(TP0 status, ::BNM::Structures::Unity::Vector3 destination, float remainingDistance, ::BNM::IL2CPP::Il2CppObject* callback, TP4 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"status", "destination", "remainingDistance", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(status, destination, remainingDistance, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        template <typename TP0 = void*>
        void Invoke(TP0 status, ::BNM::Structures::Unity::Vector3 destination, float remainingDistance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"status", "destination", "remainingDistance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(status, destination, remainingDistance);
        }
    };
}
