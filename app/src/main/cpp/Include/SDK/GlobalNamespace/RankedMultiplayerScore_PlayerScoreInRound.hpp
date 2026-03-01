#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerScore_PlayerScoreInRound : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerScore").GetInnerClass("PlayerScoreInRound");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInfected() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Infected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetJoinTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("JoinTime"));
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
        float GetTaggedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("TaggedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInfected(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Infected"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJoinTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("JoinTime"));
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
        void SetTaggedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("TaggedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
