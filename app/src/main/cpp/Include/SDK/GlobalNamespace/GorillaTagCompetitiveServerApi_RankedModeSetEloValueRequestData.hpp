#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_RankedModeSetEloValueRequestData : ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("RankedModeSetEloValueRequestData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetElo() {
            static BNM::Field<float> _field = GetClass().GetField(O("elo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElo(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("elo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
