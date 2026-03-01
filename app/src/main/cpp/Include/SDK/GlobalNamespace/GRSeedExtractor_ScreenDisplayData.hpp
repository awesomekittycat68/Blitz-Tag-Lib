#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRSeedExtractor_ScreenDisplayData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSeedExtractor").GetInnerClass("ScreenDisplayData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCoreCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("coreCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetJuiceSecondsLeft() {
            static BNM::Field<int> _field = GetClass().GetField(O("juiceSecondsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveSupply() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveSupply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetResearchPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("researchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCoreCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coreCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJuiceSecondsLeft(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("juiceSecondsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveSupply(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveSupply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResearchPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("researchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
