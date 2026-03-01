#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct ListUsersCharactersResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "ListUsersCharactersResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>* GetCharacters() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>*> _field = GetClass().GetField(O("Characters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCharacters(::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::CharacterResult*>*> _field = GetClass().GetField(O("Characters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
