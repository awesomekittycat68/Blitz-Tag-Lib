#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerScore_PlayerScore : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerScore").GetInnerClass("PlayerScore");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetEloScore() {
            static BNM::Field<float> _field = GetClass().GetField(O("EloScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameScore() {
            static BNM::Field<float> _field = GetClass().GetField(O("GameScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumTags() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("PlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPointsOnDefense() {
            static BNM::Field<float> _field = GetClass().GetField(O("PointsOnDefense"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeUntagged() {
            static BNM::Field<float> _field = GetClass().GetField(O("TimeUntagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEloScore(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("EloScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameScore(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("GameScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumTags(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointsOnDefense(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("PointsOnDefense"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeUntagged(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("TimeUntagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
