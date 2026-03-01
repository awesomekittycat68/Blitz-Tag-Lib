#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GameObjectScheduling {
    struct SchedulingOptions : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GameObjectScheduling", "SchedulingOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDebugServerTime() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugServerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetDtDebugServerTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("dtDebugServerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimescale() {
            static BNM::Field<float> _field = GetClass().GetField(O("timescale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebugServerTime(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("debugServerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtDebugServerTime(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("dtDebugServerTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimescale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timescale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_DtDebugServerTime() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_DtDebugServerTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
