#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonSignal.hpp"
#include "PhotonSignalInfo.hpp"
#include "../Photon_Realtime/ReceiverGroup.hpp"

namespace GlobalNamespace {
    template <typename T1, typename T2, typename T3>
    struct PhotonSignal$3 : ::GlobalNamespace::PhotonSignal {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PhotonSignal`3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetArgCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_argCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int GetKSignature() {
            static BNM::Field<int> _field = GetClass().GetField(O("kSignature"));
            return _field.Get();
        }
        void _Relay(::BNM::Structures::Mono::Array<void*>* args, ::GlobalNamespace::PhotonSignalInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Relay"), {"args", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(args, info);
        }
        void ClearListeners() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearListeners"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_argCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_argCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Raise(T1 arg1, T2 arg2, T3 arg3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Raise"), {"arg1", "arg2", "arg3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(arg1, arg2, arg3);
        }
        void Raise(::Photon_Realtime::ReceiverGroup receivers, T1 arg1, T2 arg2, T3 arg3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Raise"), {"receivers", "arg1", "arg2", "arg3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(receivers, arg1, arg2, arg3);
        }
    };
}
