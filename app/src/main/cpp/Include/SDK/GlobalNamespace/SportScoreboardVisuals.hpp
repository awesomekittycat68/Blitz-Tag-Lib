#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SportScoreboardVisuals : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SportScoreboardVisuals");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MaterialUVOffsetListSetter* GetScore10s() {
            static BNM::Field<::GlobalNamespace::MaterialUVOffsetListSetter*> _field = GetClass().GetField(O("score10s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MaterialUVOffsetListSetter* GetScore1s() {
            static BNM::Field<::GlobalNamespace::MaterialUVOffsetListSetter*> _field = GetClass().GetField(O("score1s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTeamIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("TeamIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetScore10s(::GlobalNamespace::MaterialUVOffsetListSetter* value) {
            static BNM::Field<::GlobalNamespace::MaterialUVOffsetListSetter*> _field = GetClass().GetField(O("score10s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScore1s(::GlobalNamespace::MaterialUVOffsetListSetter* value) {
            static BNM::Field<::GlobalNamespace::MaterialUVOffsetListSetter*> _field = GetClass().GetField(O("score1s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TeamIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
