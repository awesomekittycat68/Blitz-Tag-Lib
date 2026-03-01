#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RankedMultiplayerScore_ResultData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RankedMultiplayerScore").GetInnerClass("ResultData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetElo() {
            static BNM::Field<float> _field = GetClass().GetField(O("Elo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLongestUntagged() {
            static BNM::Field<float> _field = GetClass().GetField(O("LongestUntagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLongestUntaggedPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("LongestUntaggedPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMostTags() {
            static BNM::Field<int> _field = GetClass().GetField(O("MostTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMostTagsPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("MostTagsPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRank() {
            static BNM::Field<int> _field = GetClass().GetField(O("Rank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetElo(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("Elo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLongestUntagged(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("LongestUntagged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLongestUntaggedPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("LongestUntaggedPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMostTags(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MostTags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMostTagsPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MostTagsPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRank(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Rank"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool IsLongestUntaggedTied() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLongestUntaggedTied"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsMostTagsTied() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsMostTagsTied"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
