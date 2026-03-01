#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_DataModels {
    struct SetObjectsResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.DataModels", "SetObjectsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetProfileVersion() {
            static BNM::Field<int> _field = GetClass().GetField(O("ProfileVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObjectInfo*>* GetSetResults() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObjectInfo*>*> _field = GetClass().GetField(O("SetResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetProfileVersion(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ProfileVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetResults(::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObjectInfo*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObjectInfo*>*> _field = GetClass().GetField(O("SetResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
