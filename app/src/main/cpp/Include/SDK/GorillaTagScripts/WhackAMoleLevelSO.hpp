#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct WhackAMoleLevelSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "WhackAMoleLevelSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector2 GetHazardMoleChance() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hazardMoleChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLevelDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("levelDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLevelNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("levelNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMaximumMoleCount() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("maximumMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMinimumMoleCount() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("minimumMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinScore() {
            static BNM::Field<int> _field = GetClass().GetField(O("minScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPickNextMoleTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("pickNextMoleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShowMoleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("showMoleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHazardMoleChance(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("hazardMoleChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("levelDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("levelNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaximumMoleCount(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("maximumMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinimumMoleCount(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("minimumMoleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinScore(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minScore"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPickNextMoleTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pickNextMoleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShowMoleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("showMoleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetMinScore_1(bool isCoop) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetMinScore"), {"isCoop"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isCoop);
        }
    };
}
