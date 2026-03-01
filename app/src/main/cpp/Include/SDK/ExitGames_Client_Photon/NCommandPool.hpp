#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct NCommandPool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "NCommandPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetPool() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::NCommand* Acquire(::ExitGames_Client_Photon::EnetPeer* peer, ::BNM::Structures::Mono::Array<uint8_t>* inBuff, int& readingOffset) {
            static BNM::Method<::ExitGames_Client_Photon::NCommand*> _m = GetClass().GetMethod(O("Acquire"), {"peer", "inBuff", "readingOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(peer, inBuff, &readingOffset);
        }
        ::ExitGames_Client_Photon::NCommand* Acquire(::ExitGames_Client_Photon::EnetPeer* peer, uint8_t commandType, ::ExitGames_Client_Photon::StreamBuffer* payload, uint8_t channel) {
            static BNM::Method<::ExitGames_Client_Photon::NCommand*> _m = GetClass().GetMethod(O("Acquire"), {"peer", "commandType", "payload", "channel"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(peer, commandType, payload, channel);
        }
        void Release(::ExitGames_Client_Photon::NCommand* nCommand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Release"), {"nCommand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(nCommand);
        }
    };
}
