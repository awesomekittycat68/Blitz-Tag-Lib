#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "KIDRequestData.hpp"
#include "PlayerPlatform.hpp"

namespace GlobalNamespace {
    struct VerifyAgeRequest : ::GlobalNamespace::KIDRequestData {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VerifyAgeRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetAge() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Age"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPlatform() {
            static BNM::Field<void*> _field = GetClass().GetField(O("Platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAge(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Age"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlatform(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("Platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
