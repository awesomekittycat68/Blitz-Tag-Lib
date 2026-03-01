#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AdvancedItemState_PointType.hpp"

namespace GlobalNamespace {
    struct AdvancedItemState_PreData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AdvancedItemState").GetInnerClass("PreData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDistAlongLine() {
            static BNM::Field<float> _field = GetClass().GetField(O("distAlongLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AdvancedItemState_PointType GetPointType() {
            static BNM::Field<::GlobalNamespace::AdvancedItemState_PointType> _field = GetClass().GetField(O("pointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDistAlongLine(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distAlongLine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointType(::GlobalNamespace::AdvancedItemState_PointType value) {
            static BNM::Field<::GlobalNamespace::AdvancedItemState_PointType> _field = GetClass().GetField(O("pointType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
