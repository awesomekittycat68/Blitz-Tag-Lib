#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_ClientModels {
    struct UserSettings : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "UserSettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetGatherDeviceInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GatherDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGatherFocusInfo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GatherFocusInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNeedsAttribution() {
            static BNM::Field<bool> _field = GetClass().GetField(O("NeedsAttribution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGatherDeviceInfo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GatherDeviceInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGatherFocusInfo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GatherFocusInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeedsAttribution(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("NeedsAttribution"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
