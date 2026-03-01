#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VODPlayer_VODHourlyStream.hpp"

namespace GlobalNamespace {
    struct VODPlayer_VODStreamSchedule : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VODPlayer").GetInnerClass("VODStreamSchedule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::VODPlayer_VODHourlyStream>* GetHourly() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VODPlayer_VODHourlyStream>*> _field = GetClass().GetField(O("hourly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHourly(::BNM::Structures::Mono::Array<::GlobalNamespace::VODPlayer_VODHourlyStream>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::VODPlayer_VODHourlyStream>*> _field = GetClass().GetField(O("hourly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
