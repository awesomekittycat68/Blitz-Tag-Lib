#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_GhostReactor_SoakTasks {
    struct SoakTaskHitEnemy : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.GhostReactor.SoakTasks", "SoakTaskHitEnemy");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float TIME_BETWEEN_HITS = 0.1f;
        bool GetComplete() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Complete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetComplete(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Complete"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::GameEntity* GetEnemy() {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("_enemy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRPlayer* GetGrPlayer() {
            static BNM::Field<::GlobalNamespace::GRPlayer*> _field = GetClass().GetField(O("_grPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNextHitTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nextHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnemy(::GlobalNamespace::GameEntity* value) {
            static BNM::Field<::GlobalNamespace::GameEntity*> _field = GetClass().GetField(O("_enemy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextHitTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_nextHitTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_Complete() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Complete"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::GameEntity* GetRandomTool() {
            static BNM::Method<::GlobalNamespace::GameEntity*> _m = GetClass().GetMethod(O("GetRandomTool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsEnemy(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEnemy"), {"entity"});
            return _m.Call(entity);
        }
        static bool IsLivingEnemy(::GlobalNamespace::GameEntity* entity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLivingEnemy"), {"entity"});
            return _m.Call(entity);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Complete(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Complete"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool Update() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
