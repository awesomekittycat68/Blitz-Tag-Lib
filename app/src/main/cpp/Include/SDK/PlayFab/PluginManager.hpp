#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PluginContract.hpp"
#include "PluginContractKey.hpp"

namespace PlayFab {
    struct PluginManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PluginManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::PlayFab::PluginManager* GetInstance() {
            static BNM::Field<::PlayFab::PluginManager*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::PlayFab::PluginContractKey, void*>* GetPlugins() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::PlayFab::PluginContractKey, void*>*> _field = GetClass().GetField(O("plugins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlugins(::BNM::Structures::Mono::Dictionary<::PlayFab::PluginContractKey, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::PlayFab::PluginContractKey, void*>*> _field = GetClass().GetField(O("plugins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* CreatePlayFabTransportPlugin() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreatePlayFabTransportPlugin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        void* CreatePlugin() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("CreatePlugin"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename T>
        static T GetPlugin(::PlayFab::PluginContract contract, ::BNM::Structures::Mono::String* instanceName) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("GetPlugin"), {"contract", "instanceName"});
            return _m.Call(contract, instanceName);
        }
        void* GetPluginInternal(::PlayFab::PluginContract contract, ::BNM::Structures::Mono::String* instanceName) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetPluginInternal"), {"contract", "instanceName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(contract, instanceName);
        }
        template <typename TP0 = void*>
        static void SetPlugin(TP0 plugin, ::PlayFab::PluginContract contract, ::BNM::Structures::Mono::String* instanceName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlugin"), {"plugin", "contract", "instanceName"});
            _m.Call(plugin, contract, instanceName);
        }
        template <typename TP0 = void*>
        void SetPluginInternal(TP0 plugin, ::PlayFab::PluginContract contract, ::BNM::Structures::Mono::String* instanceName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPluginInternal"), {"plugin", "contract", "instanceName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(plugin, contract, instanceName);
        }
    };
}
