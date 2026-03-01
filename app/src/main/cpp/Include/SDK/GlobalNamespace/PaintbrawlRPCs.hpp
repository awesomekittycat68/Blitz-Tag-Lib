#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RPCNetworkBase.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct PaintbrawlRPCs : ::GlobalNamespace::RPCNetworkBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PaintbrawlRPCs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaPaintbrawlManager* GetPaintbrawlManager() {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager*> _field = GetClass().GetField(O("paintbrawlManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameModeSerializer* GetSerializer() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPaintbrawlManager(::GlobalNamespace::GorillaPaintbrawlManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager*> _field = GetClass().GetField(O("paintbrawlManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializer(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void RPC_ReportSlingshotHit(::Photon_Realtime::Player* taggedPlayer, ::BNM::Structures::Unity::Vector3 hitLocation, int projectileCount, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_ReportSlingshotHit"), {"taggedPlayer", "hitLocation", "projectileCount", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer, hitLocation, projectileCount, info);
        }
        template <typename TP0 = void*>
        void SetClassTarget(TP0 target, ::GlobalNamespace::GorillaWrappedSerializer* netHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClassTarget"), {"target", "netHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, netHandler);
        }
    };
}
