#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_MultiplayerModels {
    struct ListQosServersResponse : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "ListQosServersResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPageSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("PageSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::QosServer*>* GetQosServers() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::QosServer*>*> _field = GetClass().GetField(O("QosServers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSkipToken() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SkipToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPageSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PageSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQosServers(::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::QosServer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_MultiplayerModels::QosServer*>*> _field = GetClass().GetField(O("QosServers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipToken(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SkipToken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
