#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FusionInternalRPCs : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FusionInternalRPCs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::NetworkSystemFusion* GetNetSys() {
            static BNM::Field<::GlobalNamespace::NetworkSystemFusion*> _field = GetClass().GetField(O("netSys"));
            return _field.Get();
        }
        static void SetNetSys(::GlobalNamespace::NetworkSystemFusion* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystemFusion*> _field = GetClass().GetField(O("netSys"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*, typename TP2 = void*>
        static void RPC_SendPlayerSyncProp(::BNM::IL2CPP::Il2CppObject* runner, TP1 player, TP2 playerData, ::BNM::Structures::Mono::String* propKey, ::BNM::Structures::Mono::String* propValue) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendPlayerSyncProp"), {"runner", "player", "playerData", "propKey", "propValue"});
            _m.Call(runner, player, playerData, propKey, propValue);
        }
        static void RPC_SendPlayerSyncProp$Invoker(::BNM::IL2CPP::Il2CppObject* runner, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_SendPlayerSyncProp@Invoker"), {"runner", "message"});
            _m.Call(runner, message);
        }
    };
}
