#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "StatusCode.hpp"

namespace ExitGames_Client_Photon {
    struct PeerBase_$$c__DisplayClass109_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "PeerBase").GetInnerClass("<>c__DisplayClass109_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::ExitGames_Client_Photon::StatusCode GetStatusValue() {
            static BNM::Field<::ExitGames_Client_Photon::StatusCode> _field = GetClass().GetField(O("statusValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetStatusValue(::ExitGames_Client_Photon::StatusCode value) {
            static BNM::Field<::ExitGames_Client_Photon::StatusCode> _field = GetClass().GetField(O("statusValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
