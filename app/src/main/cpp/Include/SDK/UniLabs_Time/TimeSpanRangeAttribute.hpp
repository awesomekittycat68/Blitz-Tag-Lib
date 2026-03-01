#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TimeUnit.hpp"

namespace UniLabs_Time {
    struct TimeSpanRangeAttribute : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("UniLabs.Time", "TimeSpanRangeAttribute");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDisableMinMaxIf() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisableMinMaxIf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInline() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Inline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMaxGetter() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MaxGetter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMinGetter() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MinGetter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::UniLabs_Time::TimeUnit GetSnappingUnit() {
            static BNM::Field<::UniLabs_Time::TimeUnit> _field = GetClass().GetField(O("SnappingUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDisableMinMaxIf(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DisableMinMaxIf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInline(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Inline"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxGetter(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MaxGetter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinGetter(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MinGetter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnappingUnit(::UniLabs_Time::TimeUnit value) {
            static BNM::Field<::UniLabs_Time::TimeUnit> _field = GetClass().GetField(O("SnappingUnit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
