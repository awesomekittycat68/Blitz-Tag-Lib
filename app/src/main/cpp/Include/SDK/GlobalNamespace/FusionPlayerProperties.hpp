#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FusionPlayerProperties_PlayerInfo.hpp"

namespace GlobalNamespace {
    struct FusionPlayerProperties : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FusionPlayerProperties");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FusionPlayerProperties_PlayerInfo GetPlayerProperties() {
            static BNM::Method<::GlobalNamespace::FusionPlayerProperties_PlayerInfo> _method = GetClass().GetMethod(O("get_PlayerProperties"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged* GetPlayerAttributeOnChanged() {
            static BNM::Field<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*> _field = GetClass().GetField(O("playerAttributeOnChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayerAttributeOnChanged(::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged* value) {
            static BNM::Field<::GlobalNamespace::FusionPlayerProperties_PlayerAttributeOnChanged*> _field = GetClass().GetField(O("playerAttributeOnChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CopyBackingFieldsToState(bool ) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyBackingFieldsToState"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyStateToBackingFields() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyStateToBackingFields"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* get_netPlayerAttributes() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_netPlayerAttributes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::FusionPlayerProperties_PlayerInfo get_PlayerProperties() {
            static BNM::Method<::GlobalNamespace::FusionPlayerProperties_PlayerInfo> _m = GetClass().GetMethod(O("get_PlayerProperties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        ::BNM::Structures::Mono::String* GetDisplayName(TP0 player) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDisplayName"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        ::BNM::Structures::Mono::String* GetLocalDisplayName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetLocalDisplayName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        bool GetProperty(TP0 player, ::BNM::Structures::Mono::String* propertyName, ::BNM::Structures::Mono::String*& propertyValue) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetProperty"), {"player", "propertyName", "propertyValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, propertyName, &propertyValue);
        }
        void OnAttributesChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAttributesChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        bool PlayerHasEntry(TP0 player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PlayerHasEntry"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player);
        }
        template <typename TP0 = void*>
        void RemovePlayerEntry(TP0 player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePlayerEntry"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        template <typename TP1 = void*>
        void RPC_UpdatePlayerAttributes(::GlobalNamespace::FusionPlayerProperties_PlayerInfo newInfo, TP1 info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdatePlayerAttributes"), {"newInfo", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newInfo, info);
        }
        static void RPC_UpdatePlayerAttributes$Invoker(::BNM::IL2CPP::Il2CppObject* behaviour, void** message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RPC_UpdatePlayerAttributes@Invoker"), {"behaviour", "message"});
            _m.Call(behaviour, message);
        }
        void Spawned() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Spawned"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
