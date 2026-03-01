#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct ReportPlayerClientResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "ReportPlayerClientResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetSubmissionsRemaining() {
            static BNM::Field<int> _field = GetClass().GetField(O("SubmissionsRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSubmissionsRemaining(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SubmissionsRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
