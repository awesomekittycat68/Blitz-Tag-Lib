#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct RandomWeightedOutput : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "RandomWeightedOutput");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDebugLog() {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::NetworkedRandomProvider* GetNetworkProvider() {
            static BNM::Field<::GorillaTag_Cosmetics::NetworkedRandomProvider*> _field = GetClass().GetField(O("networkProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnAnyPick() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onAnyPick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::RandomWeightedOutput_WeightedOutput*>* GetOutputs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::RandomWeightedOutput_WeightedOutput*>*> _field = GetClass().GetField(O("outputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebugLog(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("debugLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkProvider(::GorillaTag_Cosmetics::NetworkedRandomProvider* value) {
            static BNM::Field<::GorillaTag_Cosmetics::NetworkedRandomProvider*> _field = GetClass().GetField(O("networkProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAnyPick(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onAnyPick"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputs(::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::RandomWeightedOutput_WeightedOutput*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::RandomWeightedOutput_WeightedOutput*>*> _field = GetClass().GetField(O("outputs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetDeterministicPickIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetDeterministicPickIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void PickNextRandom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PickNextRandom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
