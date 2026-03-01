#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PhotonMessageInfoWrapped.hpp"
#include "RPCUtil_RPCCallID.hpp"

namespace GlobalNamespace {
    struct RPCUtil : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RPCUtil");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::RPCUtil_RPCCallID, float>* GetRPCCallLog() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::RPCUtil_RPCCallID, float>*> _field = GetClass().GetField(O("RPCCallLog"));
            return _field.Get();
        }
        static void SetRPCCallLog(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::RPCUtil_RPCCallID, float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::RPCUtil_RPCCallID, float>*> _field = GetClass().GetField(O("RPCCallLog"));
            _field.Set(value);
        }
        static bool NotSpam(::BNM::Structures::Mono::String* id, ::GlobalNamespace::PhotonMessageInfoWrapped info, float delay) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NotSpam"), {"id", "info", "delay"});
            return _m.Call(id, info, delay);
        }
        static bool SafeValue(float v) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SafeValue"), {"v"});
            return _m.Call(v);
        }
        static bool SafeValue(float v, float min, float max) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("SafeValue"), {"v", "min", "max"});
            return _m.Call(v, min, max);
        }
    };
}
