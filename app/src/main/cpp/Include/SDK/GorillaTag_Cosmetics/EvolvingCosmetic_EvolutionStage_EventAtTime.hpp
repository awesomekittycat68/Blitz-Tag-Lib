#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EvolvingCosmetic_EvolutionStage_EventAtTime_Type.hpp"

namespace GorillaTag_Cosmetics {
    struct EvolvingCosmetic_EvolutionStage_EventAtTime : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "EvolvingCosmetic").GetInnerClass("EvolutionStage").GetInnerClass("EventAtTime");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDynamicTimeLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_DynamicTimeLabel"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetAbsoluteTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("absoluteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDebugName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTimeReached() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimeReached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("time"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime_Type GetType_f() {
            static BNM::Field<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime_Type> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAbsoluteTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("absoluteTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTimeReached(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTimeReached"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("time"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime_Type value) {
            static BNM::Field<::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime_Type> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CompareTo(::GorillaTag_Cosmetics::EvolvingCosmetic_EvolutionStage_EventAtTime* other) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        ::BNM::Structures::Mono::String* get_DynamicTimeLabel() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_DynamicTimeLabel"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
