#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_DataModels {
    struct SetObjectsRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.DataModels", "SetObjectsRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_DataModels::EntityKey* GetEntity() {
            static BNM::Field<::PlayFab_DataModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetExpectedProfileVersion() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ExpectedProfileVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObject*>* GetObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObject*>*> _field = GetClass().GetField(O("Objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntity(::PlayFab_DataModels::EntityKey* value) {
            static BNM::Field<::PlayFab_DataModels::EntityKey*> _field = GetClass().GetField(O("Entity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpectedProfileVersion(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ExpectedProfileVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjects(::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_DataModels::SetObject*>*> _field = GetClass().GetField(O("Objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
