#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct LinearSetIntersectionRuleExpansion : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "LinearSetIntersectionRuleExpansion");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint32_t GetDelta() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("Delta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetSecondsBetweenExpansions() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("SecondsBetweenExpansions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDelta(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("Delta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsBetweenExpansions(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("SecondsBetweenExpansions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
