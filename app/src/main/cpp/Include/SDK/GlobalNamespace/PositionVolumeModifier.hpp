#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PositionVolumeModifier : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PositionVolumeModifier");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TimeOfDayDependentAudio* GetAudioToMod() {
            static BNM::Field<::GlobalNamespace::TimeOfDayDependentAudio*> _field = GetClass().GetField(O("audioToMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioToMod(::GlobalNamespace::TimeOfDayDependentAudio* value) {
            static BNM::Field<::GlobalNamespace::TimeOfDayDependentAudio*> _field = GetClass().GetField(O("audioToMod"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTriggerStay(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerStay"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
