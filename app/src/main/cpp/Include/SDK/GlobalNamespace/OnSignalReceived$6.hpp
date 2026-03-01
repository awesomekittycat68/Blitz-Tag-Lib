#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonSignalInfo.hpp"

namespace GlobalNamespace {
    template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
    struct OnSignalReceived$6 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OnSignalReceived`6");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP8 = void*>
        void* BeginInvoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, ::GlobalNamespace::PhotonSignalInfo info, ::BNM::IL2CPP::Il2CppObject* callback, TP8 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "info", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(arg1, arg2, arg3, arg4, arg5, arg6, info, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(T1 arg1, T2 arg2, T3 arg3, T4 arg4, T5 arg5, T6 arg6, ::GlobalNamespace::PhotonSignalInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"arg1", "arg2", "arg3", "arg4", "arg5", "arg6", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(arg1, arg2, arg3, arg4, arg5, arg6, info);
        }
    };
}
