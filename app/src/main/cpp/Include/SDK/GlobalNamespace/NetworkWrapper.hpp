#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkSystemConfig.hpp"

namespace GlobalNamespace {
    struct NetworkWrapper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetworkWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* WrapperResourcePath = "P_NetworkWrapper";
        ::GlobalNamespace::NetworkSystem* GetActiveNetworkSystem() {
            static BNM::Field<::GlobalNamespace::NetworkSystem*> _field = GetClass().GetField(O("activeNetworkSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetDevNetworkRegionNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("devNetworkRegionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::NetworkSystemConfig GetNetSysConfig() {
            static BNM::Field<::GlobalNamespace::NetworkSystemConfig> _field = GetClass().GetField(O("netSysConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetNetworkRegionNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("networkRegionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetPlayerCountTextRef() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("playerCountTextRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetStateTextRef() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("stateTextRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetTitleRef() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("titleRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::SO_NetworkVoiceSettings* GetVoiceSettings() {
            static BNM::Field<::GorillaNetworking::SO_NetworkVoiceSettings*> _field = GetClass().GetField(O("VoiceSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActiveNetworkSystem(::GlobalNamespace::NetworkSystem* value) {
            static BNM::Field<::GlobalNamespace::NetworkSystem*> _field = GetClass().GetField(O("activeNetworkSystem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDevNetworkRegionNames(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("devNetworkRegionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetSysConfig(::GlobalNamespace::NetworkSystemConfig value) {
            static BNM::Field<::GlobalNamespace::NetworkSystemConfig> _field = GetClass().GetField(O("netSysConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkRegionNames(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("networkRegionNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerCountTextRef(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("playerCountTextRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateTextRef(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("stateTextRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleRef(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("titleRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVoiceSettings(::GorillaNetworking::SO_NetworkVoiceSettings* value) {
            static BNM::Field<::GorillaNetworking::SO_NetworkVoiceSettings*> _field = GetClass().GetField(O("VoiceSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void AutoInstantiate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AutoInstantiate"));
            _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerCount() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlayerCountWrapper(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlayerCountWrapper"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
    };
}
