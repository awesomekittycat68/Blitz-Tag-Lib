#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Bindings_GorillaLocomotionSettings.hpp"
#include "Bindings_LuauGameObjectInitialState.hpp"
#include "Bindings_LuauRoomState.hpp"
#include "Bindings_PlayerInput.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct Bindings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::Bindings_PlayerInput* GetLocalPlayerInput() {
            static BNM::Field<::GlobalNamespace::Bindings_PlayerInput*> _field = GetClass().GetField(O("LocalPlayerInput"));
            return _field.Get();
        }
        static ::GlobalNamespace::Bindings_GorillaLocomotionSettings* GetLocomotionSettings() {
            static BNM::Field<::GlobalNamespace::Bindings_GorillaLocomotionSettings*> _field = GetClass().GetField(O("LocomotionSettings"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>* GetLuauAIAgentList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauAIAgentList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<void*>* GetLuauGameObjectDepthList() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("LuauGameObjectDepthList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Types::nint>* GetLuauGameObjectList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauGameObjectList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, ::GameObject*>* GetLuauGameObjectListReverse() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, ::GameObject*>*> _field = GetClass().GetField(O("LuauGameObjectListReverse"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::Bindings_LuauGameObjectInitialState>* GetLuauGameObjectStates() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::Bindings_LuauGameObjectInitialState>*> _field = GetClass().GetField(O("LuauGameObjectStates"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>* GetLuauGrabbablesList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauGrabbablesList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>* GetLuauPlayerList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauPlayerList"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GameObject*, int>* GetLuauTriggerCallbacks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, int>*> _field = GetClass().GetField(O("LuauTriggerCallbacks"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::VRRig*>* GetLuauVRRigList() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("LuauVRRigList"));
            return _field.Get();
        }
        static ::GlobalNamespace::Bindings_LuauRoomState* GetRoomState() {
            static BNM::Field<::GlobalNamespace::Bindings_LuauRoomState*> _field = GetClass().GetField(O("RoomState"));
            return _field.Get();
        }
        static void SetLocalPlayerInput(::GlobalNamespace::Bindings_PlayerInput* value) {
            static BNM::Field<::GlobalNamespace::Bindings_PlayerInput*> _field = GetClass().GetField(O("LocalPlayerInput"));
            _field.Set(value);
        }
        static void SetLocomotionSettings(::GlobalNamespace::Bindings_GorillaLocomotionSettings* value) {
            static BNM::Field<::GlobalNamespace::Bindings_GorillaLocomotionSettings*> _field = GetClass().GetField(O("LocomotionSettings"));
            _field.Set(value);
        }
        static void SetLuauAIAgentList(::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauAIAgentList"));
            _field.Set(value);
        }
        static void SetLuauGameObjectDepthList(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("LuauGameObjectDepthList"));
            _field.Set(value);
        }
        static void SetLuauGameObjectList(::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauGameObjectList"));
            _field.Set(value);
        }
        static void SetLuauGameObjectListReverse(::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, ::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Types::nint, ::GameObject*>*> _field = GetClass().GetField(O("LuauGameObjectListReverse"));
            _field.Set(value);
        }
        static void SetLuauGameObjectStates(::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::Bindings_LuauGameObjectInitialState>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::Bindings_LuauGameObjectInitialState>*> _field = GetClass().GetField(O("LuauGameObjectStates"));
            _field.Set(value);
        }
        static void SetLuauGrabbablesList(::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauGrabbablesList"));
            _field.Set(value);
        }
        static void SetLuauPlayerList(::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::Types::nint>*> _field = GetClass().GetField(O("LuauPlayerList"));
            _field.Set(value);
        }
        static void SetLuauTriggerCallbacks(::BNM::Structures::Mono::Dictionary<::GameObject*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, int>*> _field = GetClass().GetField(O("LuauTriggerCallbacks"));
            _field.Set(value);
        }
        static void SetLuauVRRigList(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("LuauVRRigList"));
            _field.Set(value);
        }
        static void SetRoomState(::GlobalNamespace::Bindings_LuauRoomState* value) {
            static BNM::Field<::GlobalNamespace::Bindings_LuauRoomState*> _field = GetClass().GetField(O("RoomState"));
            _field.Set(value);
        }
        static void AIAgentBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AIAgentBuilder"), {"L"});
            _m.Call(L);
        }
        static void GameObjectBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GameObjectBuilder"), {"L"});
            _m.Call(L);
        }
        static void GorillaLocomotionSettingsBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GorillaLocomotionSettingsBuilder"), {"L"});
            _m.Call(L);
        }
        static void GrabbableEntityBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabbableEntityBuilder"), {"L"});
            _m.Call(L);
        }
        static int LuaPlaySound(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("LuaPlaySound"), {"L"});
            return _m.Call(L);
        }
        static int LuaStartVibration(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("LuaStartVibration"), {"L"});
            return _m.Call(L);
        }
        static void PlayerBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerBuilder"), {"L"});
            _m.Call(L);
        }
        static void PlayerInputBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerInputBuilder"), {"L"});
            _m.Call(L);
        }
        static void QuatBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QuatBuilder"), {"L"});
            _m.Call(L);
        }
        static void RoomStateBuilder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RoomStateBuilder"), {"L"});
            _m.Call(L);
        }
        static void UpdateInputs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateInputs"));
            _m.Call();
        }
        static void UpdateRoomState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRoomState"));
            _m.Call();
        }
        static void Vec3Builder(::GlobalNamespace::lua_State* L) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Vec3Builder"), {"L"});
            _m.Call(L);
        }
    };
}
