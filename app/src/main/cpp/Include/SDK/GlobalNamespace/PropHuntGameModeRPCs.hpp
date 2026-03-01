#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RPCNetworkBase.hpp"

namespace GlobalNamespace {
    struct PropHuntGameModeRPCs : ::GlobalNamespace::RPCNetworkBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntGameModeRPCs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaPropHuntGameManager* GetPropHuntManager() {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager*> _field = GetClass().GetField(O("propHuntManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameModeSerializer* GetSerializer() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPropHuntManager(::GlobalNamespace::GorillaPropHuntGameManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager*> _field = GetClass().GetField(O("propHuntManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializer(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void SetClassTarget(TP0 target, ::GlobalNamespace::GorillaWrappedSerializer* netHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClassTarget"), {"target", "netHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, netHandler);
        }
    };
}
