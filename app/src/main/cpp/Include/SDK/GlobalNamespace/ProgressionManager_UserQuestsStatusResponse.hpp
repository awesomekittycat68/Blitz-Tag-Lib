#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_UserQuestsStatusResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("UserQuestsStatusResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetTodayClaimableBonus() {
            static BNM::Field<int> _field = GetClass().GetField(O("TodayClaimableBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTodayClaimableIdol() {
            static BNM::Field<int> _field = GetClass().GetField(O("TodayClaimableIdol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTodayClaimableQuests() {
            static BNM::Field<int> _field = GetClass().GetField(O("TodayClaimableQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTodayClaimableBonus(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TodayClaimableBonus"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTodayClaimableIdol(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TodayClaimableIdol"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTodayClaimableQuests(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("TodayClaimableQuests"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
