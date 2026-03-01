#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Region.hpp"
#include "../PlayFab_SharedModels/PlayFabRequestCommon.hpp"

namespace PlayFab_ClientModels {
    struct CurrentGamesRequest : ::PlayFab_SharedModels::PlayFabRequestCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "CurrentGamesRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetBuildVersion() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BuildVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetGameMode() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("GameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRegion() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Region"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStatisticName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StatisticName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::CollectionFilter* GetTagFilter() {
            static BNM::Field<::PlayFab_ClientModels::CollectionFilter*> _field = GetClass().GetField(O("TagFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuildVersion(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("BuildVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameMode(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("GameMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegion(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Region"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatisticName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("StatisticName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTagFilter(::PlayFab_ClientModels::CollectionFilter* value) {
            static BNM::Field<::PlayFab_ClientModels::CollectionFilter*> _field = GetClass().GetField(O("TagFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
