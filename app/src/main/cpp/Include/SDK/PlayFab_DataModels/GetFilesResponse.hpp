#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_DataModels {
    struct GetFilesResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.DataModels", "GetFilesResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_DataModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_DataModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_DataModels::GetFileMetadata*>* GetMetadata() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_DataModels::GetFileMetadata*>*> _field = GetClass().GetField(O("Metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProfileVersion() {
            static BNM::Field<int> _field = GetClass().GetField(O("ProfileVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_DataModels::EntityKey* value) {
            static BNM::Field<::PlayFab_DataModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMetadata(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_DataModels::GetFileMetadata*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::PlayFab_DataModels::GetFileMetadata*>*> _field = GetClass().GetField(O("Metadata"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProfileVersion(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ProfileVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
