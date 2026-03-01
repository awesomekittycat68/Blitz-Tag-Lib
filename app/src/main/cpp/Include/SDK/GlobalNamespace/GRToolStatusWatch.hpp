#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRToolStatusWatch_WatchState.hpp"

namespace GlobalNamespace {
    struct GRToolStatusWatch : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRToolStatusWatch");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRPlayer* GetCurrentPlayer() {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("currentPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetDisabledText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("disabledText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDisabledVisuals() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disabledVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetEnabledVisuals() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("enabledVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameEntity* GetGameEntity() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGimbaledCompass() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gimbaledCompass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetHealthHearts() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("healthHearts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetHomeBase() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("homeBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastCredits() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastGrade() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastGrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastJuice() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastKills() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastKills"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolProgressionManager* GetProgression() {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("progression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSb() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetShieldSymbol() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shieldSymbol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRToolStatusWatch_WatchState GetState() {
            static BNM::Field<::GlobalNamespace::GRToolStatusWatch_WatchState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetStatsText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("statsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVisibleHP() {
            static BNM::Field<int> _field = GetClass().GetField(O("visibleHP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetVisibleShield() {
            static BNM::Field<int> _field = GetClass().GetField(O("visibleShield"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentPlayer(::GlobalNamespace::GRPlayer* value) {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("currentPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("disabledText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisabledVisuals(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("disabledVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnabledVisuals(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("enabledVisuals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEntity(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("gameEntity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGimbaledCompass(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gimbaledCompass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHealthHearts(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("healthHearts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHomeBase(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("homeBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastCredits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastCredits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGrade(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastGrade"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastJuice(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastKills(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastKills"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgression(::GlobalNamespace::GRToolProgressionManager* value) {
            static BNM::Field<::GlobalNamespace::GRToolProgressionManager*> _field = GetClass().GetField(O("progression"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSb(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShieldSymbol(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shieldSymbol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::GRToolStatusWatch_WatchState value) {
            static BNM::Field<::GlobalNamespace::GRToolStatusWatch_WatchState> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatsText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("statsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleHP(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("visibleHP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVisibleShield(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("visibleShield"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEntityDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityInit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityInit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEntityStateChange(int64_t prevState, int64_t newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEntityStateChange"), {"prevState", "newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevState, newState);
        }
        void RemoveSnappedPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSnappedPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSnappedPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSnappedPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
