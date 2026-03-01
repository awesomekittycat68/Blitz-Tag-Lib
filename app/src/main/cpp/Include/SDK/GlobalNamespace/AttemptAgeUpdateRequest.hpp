#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KIDRequestData.hpp"
#include "PlayerPlatform.hpp"

namespace GlobalNamespace {
    struct AttemptAgeUpdateRequest : ::GlobalNamespace::KIDRequestData {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AttemptAgeUpdateRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAge() {
            static BNM::Field<int> _field = GetClass().GetField(O("Age"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PlayerPlatform GetPlatform() {
            static BNM::Field<::GlobalNamespace::PlayerPlatform> _field = GetClass().GetField(O("Platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAge(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Age"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlatform(::GlobalNamespace::PlayerPlatform value) {
            static BNM::Field<::GlobalNamespace::PlayerPlatform> _field = GetClass().GetField(O("Platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
