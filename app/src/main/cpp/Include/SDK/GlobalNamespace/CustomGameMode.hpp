#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaGameManager.hpp"
#include "lua_State.hpp"
#include "../GorillaGameModes/GameModeType.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct CustomGameMode : ::GlobalNamespace::GorillaGameManager {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomGameMode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool GetGameModeInitialized() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GameModeInitialized"));
            return _field.Get();
        }
        static ::GlobalNamespace::LuauScriptRunner* GetGameScriptRunner() {
            static BNM::Field<::GlobalNamespace::LuauScriptRunner*> _field = GetClass().GetField(O("gameScriptRunner"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetLuaScript() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LuaScript"));
            return _field.Get();
        }
        static bool GetWasInRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("WasInRoom"));
            return _field.Get();
        }
        static void SetGameModeInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GameModeInitialized"));
            _field.Set(value);
        }
        static void SetGameScriptRunner(::GlobalNamespace::LuauScriptRunner* value) {
            static BNM::Field<::GlobalNamespace::LuauScriptRunner*> _field = GetClass().GetField(O("gameScriptRunner"));
            _field.Set(value);
        }
        static void SetLuaScript(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("LuaScript"));
            _field.Set(value);
        }
        static void SetWasInRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("WasInRoom"));
            _field.Set(value);
        }
        void AddFusionDataBehaviour(::BNM::IL2CPP::Il2CppObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddFusionDataBehaviour"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        static int AfterTickGamemode(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AfterTickGamemode"), {"L"});
            return _m.Call(L);
        }
        static int GameModeBindings(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GameModeBindings"), {"L"});
            return _m.Call(L);
        }
        ::GorillaGameModes::GameModeType GameType() {
            static BNM::Method<::GorillaGameModes::GameModeType> _m = GetClass().GetMethod(O("GameType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void HitPlayer(::GlobalNamespace::NetPlayer* taggedPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HitPlayer"), {"taggedPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(taggedPlayer);
        }
        ::BNM::Structures::Mono::Array<float>* LocalPlayerSpeed() {
            static BNM::Method<::BNM::Structures::Mono::Array<float>*> _m = GetClass().GetMethod(O("LocalPlayerSpeed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void LuaStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LuaStart"));
            _m.Call();
        }
        int MyMatIndex(::GlobalNamespace::NetPlayer* forPlayer) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("MyMatIndex"), {"forPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(forPlayer);
        }
        static void OnEntityGrabbed(::GlobalNamespace::GameEntity* entity, bool isGrabbed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityGrabbed"), {"entity", "isGrabbed"});
            _m.Call(entity, isGrabbed);
        }
        static void OnGameEntityRemoved(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGameEntityRemoved"), {"entity"});
            _m.Call(entity);
        }
        void OnMasterClientSwitched(::GlobalNamespace::NetPlayer* newMasterClient) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnMasterClientSwitched"), {"newMasterClient"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMasterClient);
        }
        void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerEnteredRoom"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        static void OnPlayerHit(::GlobalNamespace::GameEntity* entity, int hitPlayer, float damage) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerHit"), {"entity", "hitPlayer", "damage"});
            _m.Call(entity, hitPlayer, damage);
        }
        void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlayerLeftRoom"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        template <typename TP0 = void*>
        void OnSerializeRead(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void OnSerializeRead(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeRead"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        void* OnSerializeWrite() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("OnSerializeWrite"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnSerializeWrite(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSerializeWrite"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream, info);
        }
        static int PreTickGamemode(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PreTickGamemode"), {"L"});
            return _m.Call(L);
        }
        static void RunGamemodeScript(::BNM::Structures::Mono::String* script) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunGamemodeScript"), {"script"});
            _m.Call(script);
        }
        static void RunGamemodeScriptFromFile(::BNM::Structures::Mono::String* filename) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunGamemodeScriptFromFile"), {"filename"});
            _m.Call(filename);
        }
        void StartPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StartPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StopPlaying() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void StopScript() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StopScript"));
            _m.Call();
        }
        static void TaggedByAI(::GlobalNamespace::GameEntity* entity, int taggedPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TaggedByAI"), {"entity", "taggedPlayer"});
            _m.Call(entity, taggedPlayer);
        }
        static void TaggedByEnvironment() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TaggedByEnvironment"));
            _m.Call();
        }
        static void TouchPlayer(::GlobalNamespace::NetPlayer* touchedPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TouchPlayer"), {"touchedPlayer"});
            _m.Call(touchedPlayer);
        }
    };
}
