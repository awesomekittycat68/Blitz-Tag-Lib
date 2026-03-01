#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct CollectionFilter : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "CollectionFilter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>* GetExcludes() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>*> _field = GetClass().GetField(O("Excludes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>* GetIncludes() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>*> _field = GetClass().GetField(O("Includes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetExcludes(::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>*> _field = GetClass().GetField(O("Excludes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludes(::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::Container_Dictionary_String_String*>*> _field = GetClass().GetField(O("Includes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
