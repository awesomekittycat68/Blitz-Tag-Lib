#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRSeedExtractor_PlayerData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSeedExtractor").GetInnerClass("PlayerData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("actorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoreCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("coreCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCoreProcessingPercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("coreProcessingPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresPendingOverdriveProcessing() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresPendingOverdriveProcessing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresProcessedByOverdrive() {
            static BNM::Field<int> _field = GetClass().GetField(O("coresProcessedByOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLatestRefreshTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("latestRefreshTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetOverdriveSupply() {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveSupply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetResearchPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("researchPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoreCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coreCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoreProcessingPercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("coreProcessingPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresPendingOverdriveProcessing(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresPendingOverdriveProcessing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresProcessedByOverdrive(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("coresProcessedByOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestRefreshTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("latestRefreshTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveSupply(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("overdriveSupply"));
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
