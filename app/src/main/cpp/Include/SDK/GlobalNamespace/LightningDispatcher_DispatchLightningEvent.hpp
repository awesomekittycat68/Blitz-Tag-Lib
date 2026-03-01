#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LightningDispatcher_DispatchLightningEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LightningDispatcher").GetInnerClass("DispatchLightningEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"p1", "p2", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p1, p2, callback, object);
        }
        template <typename TP0 = void*>
        ::GlobalNamespace::LightningStrike* EndInvoke(TP0 result) {
            static BNM::Method<::GlobalNamespace::LightningStrike*> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        ::GlobalNamespace::LightningStrike* Invoke(::BNM::Structures::Unity::Vector3 p1, ::BNM::Structures::Unity::Vector3 p2) {
            static BNM::Method<::GlobalNamespace::LightningStrike*> _m = GetClass().GetMethod(O("Invoke"), {"p1", "p2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(p1, p2);
        }
    };
}
