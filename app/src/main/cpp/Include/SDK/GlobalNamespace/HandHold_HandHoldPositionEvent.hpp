#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct HandHold_HandHoldPositionEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandHold").GetInnerClass("HandHoldPositionEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP4 = void*>
        void* BeginInvoke(::GlobalNamespace::HandHold* hh, bool lh, ::BNM::Structures::Unity::Vector3 pos, ::BNM::IL2CPP::Il2CppObject* callback, TP4 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"hh", "lh", "pos", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(hh, lh, pos, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::GlobalNamespace::HandHold* hh, bool lh, ::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"hh", "lh", "pos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hh, lh, pos);
        }
    };
}
