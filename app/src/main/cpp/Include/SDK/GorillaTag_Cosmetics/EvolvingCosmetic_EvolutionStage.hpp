#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EvolvingCosmetic_EvolutionStage_ProgressionFlags.hpp"

namespace GorillaTag_Cosmetics {
    struct EvolvingCosmetic_EvolutionStage : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "EvolvingCosmetic").GetInnerClass("EvolutionStage");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float MIN_STAGE_TIME = 0.01f;
        float GetDuration() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_Duration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasDuration() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasDuration"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasTemperature() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasTemperature"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasTime() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasTime"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* GetCelsiusSpeedupMult() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("celsiusSpeedupMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyArray* GetContinuousProperties() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDebugName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDurationSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("durationSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime*>* GetEvents() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime*>*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_ProgressionFlags GetProgressionFlags() {
            static BNM::Field<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_ProgressionFlags> _field = GetClass().GetField(O("progressionFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ThermalReceiver* GetThermalReceiver() {
            static BNM::Field<::GlobalNamespace::ThermalReceiver*> _field = GetClass().GetField(O("thermalReceiver"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCelsiusSpeedupMult(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("celsiusSpeedupMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetContinuousProperties(::GorillaTag_Cosmetics::ContinuousPropertyArray* value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyArray*> _field = GetClass().GetField(O("continuousProperties"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDurationSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("durationSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEvents(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime*>*> _field = GetClass().GetField(O("events"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProgressionFlags(::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_ProgressionFlags value) {
            static BNM::Field<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_ProgressionFlags> _field = GetClass().GetField(O("progressionFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetThermalReceiver(::GlobalNamespace::ThermalReceiver* value) {
            static BNM::Field<::GlobalNamespace::ThermalReceiver*> _field = GetClass().GetField(O("thermalReceiver"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        float DeltaTime(float deltaTime) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("DeltaTime"), {"deltaTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(deltaTime);
        }
        float get_Duration() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_Duration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasDuration() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasDuration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasTemperature() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasTemperature"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HasTime() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime* GetEventOrNull(int index) {
            static BNM::Method<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime*> _m = GetClass().GetMethod(O("GetEventOrNull"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        bool HasAnyFlag(::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_ProgressionFlags flag) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyFlag"), {"flag"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flag);
        }
    };
}
