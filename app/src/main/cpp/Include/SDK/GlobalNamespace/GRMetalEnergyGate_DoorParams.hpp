#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRMetalEnergyGate_DoorParams : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRMetalEnergyGate").GetInnerClass("DoorParams");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetDoorClosedPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorClosedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDoorOpenPosition() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorOpenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetDoorTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDoorClosedPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorClosedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorOpenPosition(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorOpenPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoorTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("doorTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
