#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_RankedModeUnlockCompetitiveQueueRequestData : ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("RankedModeUnlockCompetitiveQueueRequestData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetUnlocked() {
            static BNM::Field<bool> _field = GetClass().GetField(O("unlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetUnlocked(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("unlocked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
