#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTagScripts_GhostReactor/GREnemyType.hpp"

namespace GlobalNamespace {
    struct GREnemyCount : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GREnemyCount");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("Count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_GhostReactor::GREnemyType GetEnemyType() {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GREnemyType> _field = GetClass().GetField(O("EnemyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnemyType(::GorillaTagScripts_GhostReactor::GREnemyType value) {
            static BNM::Field<::GorillaTagScripts_GhostReactor::GREnemyType> _field = GetClass().GetField(O("EnemyType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* GetEnemyName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetEnemyName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts_GhostReactor::GREnemyType GetEnemyType_1() {
            static BNM::Method<::GorillaTagScripts_GhostReactor::GREnemyType> _m = GetClass().GetMethod(O("GetEnemyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
