#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RPCNetworkBase.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveRPCs : ::GlobalNamespace::RPCNetworkBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveRPCs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameModeSerializer* GetSerializer() {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveManager* GetTagCompManager() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager*> _field = GetClass().GetField(O("tagCompManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSerializer(::GlobalNamespace::GameModeSerializer* value) {
            static BNM::Field<::GlobalNamespace::GameModeSerializer*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagCompManager(::GlobalNamespace::GorillaTagCompetitiveManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveManager*> _field = GetClass().GetField(O("tagCompManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SendScoresToLateJoinerRPC(::BNM::Structures::Mono::Array<int>* playerId, ::BNM::Structures::Mono::Array<int>* numTags, ::BNM::Structures::Mono::Array<float>* pointsOnDefense, ::BNM::Structures::Mono::Array<float>* joinTime, ::BNM::Structures::Mono::Array<bool>* infected, ::BNM::Structures::Mono::Array<float>* taggedTime, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendScoresToLateJoinerRPC"), {"playerId", "numTags", "pointsOnDefense", "joinTime", "infected", "taggedTime", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerId, numTags, pointsOnDefense, joinTime, infected, taggedTime, info);
        }
        template <typename TP0 = void*>
        void SetClassTarget(TP0 target, ::GlobalNamespace::GorillaWrappedSerializer* netHandler) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetClassTarget"), {"target", "netHandler"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(target, netHandler);
        }
    };
}
