#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonSignalInfo.hpp"

namespace GlobalNamespace {
    template <typename T1, typename T2, typename T3>
    struct OnSignalReceived$3 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OnSignalReceived`3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP5 = void*>
        void* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, ::GlobalNamespace::PhotonSignalInfo info, ::BNM::IL2CPP::Il2CppObject* callback, TP5 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"arg1", "arg2", "arg3", "info", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(arg1, arg2, arg3, info, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(T1 arg1, T2 arg2, T3 arg3, ::GlobalNamespace::PhotonSignalInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"arg1", "arg2", "arg3", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(arg1, arg2, arg3, info);
        }
    };
}
