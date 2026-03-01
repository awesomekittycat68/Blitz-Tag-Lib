#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipWebSocketDelegateWrapper_SwigDelegateMothershipWebSocketDelegateWrapper_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWebSocketDelegateWrapper").GetInnerClass("SwigDelegateMothershipWebSocketDelegateWrapper_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(::BNM::Types::nint request, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"request", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request, callback, object);
        }
        template <typename TP0 = void*>
        bool EndInvoke(TP0 result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        bool Invoke(::BNM::Types::nint request) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Invoke"), {"request"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(request);
        }
    };
}
