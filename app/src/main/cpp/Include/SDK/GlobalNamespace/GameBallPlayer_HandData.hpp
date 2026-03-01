#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameBallId.hpp"

namespace GlobalNamespace {
    struct GameBallPlayer_HandData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameBallPlayer").GetInnerClass("HandData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameBallId GetGrabbedGameBallId() {
            static BNM::Field<::GlobalNamespace::GameBallId> _field = GetClass().GetField(O("grabbedGameBallId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbedGameBallId(::GlobalNamespace::GameBallId value) {
            static BNM::Field<::GlobalNamespace::GameBallId> _field = GetClass().GetField(O("grabbedGameBallId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
