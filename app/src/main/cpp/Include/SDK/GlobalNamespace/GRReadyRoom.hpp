#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRReadyRoom : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRReadyRoom");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRNameDisplayPlate*>* GetNameDisplayPlates() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRNameDisplayPlate*>*> _field = GetClass().GetField(O("nameDisplayPlates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNameDisplayPlates(::BNM::Structures::Mono::List<::GlobalNamespace::GRNameDisplayPlate*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRNameDisplayPlate*>*> _field = GetClass().GetField(O("nameDisplayPlates"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void RefreshRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* vrRigs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshRigs"), {"vrRigs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(vrRigs);
        }
    };
}
