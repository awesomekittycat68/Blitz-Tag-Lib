#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetPlayerSegmentsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetPlayerSegmentsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::GetSegmentResult*>* GetSegments() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::GetSegmentResult*>*> _field = GetClass().GetField(O("Segments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSegments(::BNM::Structures::Mono::List<::PlayFab_ClientModels::GetSegmentResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::GetSegmentResult*>*> _field = GetClass().GetField(O("Segments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
