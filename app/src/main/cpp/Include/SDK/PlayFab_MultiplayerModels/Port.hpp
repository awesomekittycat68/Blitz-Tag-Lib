#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProtocolType.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct Port : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "Port");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNum() {
            static BNM::Field<int> _field = GetClass().GetField(O("Num"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::ProtocolType GetProtocol() {
            static BNM::Field<::PlayFab_MultiplayerModels::ProtocolType> _field = GetClass().GetField(O("Protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNum(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Num"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProtocol(::PlayFab_MultiplayerModels::ProtocolType value) {
            static BNM::Field<::PlayFab_MultiplayerModels::ProtocolType> _field = GetClass().GetField(O("Protocol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
