#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SetStateConditional.hpp"

namespace GlobalNamespace {
    struct SetStateIfNoOverlaps : ::GlobalNamespace::SetStateConditional {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SetStateIfNoOverlaps");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VolumeCast* GetVolume() {
            static BNM::Field<::GlobalNamespace::VolumeCast*> _field = GetClass().GetField(O("_volume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVolume(::GlobalNamespace::VolumeCast* value) {
            static BNM::Field<::GlobalNamespace::VolumeCast*> _field = GetClass().GetField(O("_volume"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        bool CanSetState(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanSetState"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(animator, stateInfo, layerIndex);
        }
        template <typename TP1 = void*>
        void Setup(::Animator* animator, TP1 stateInfo, int layerIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"animator", "stateInfo", "layerIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(animator, stateInfo, layerIndex);
        }
    };
}
