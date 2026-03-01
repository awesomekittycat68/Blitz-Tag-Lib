#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipUserDataWriteRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_SubtractShiftCreditRequest : ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("SubtractShiftCreditRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetShiftCreditToRemove() {
            static BNM::Field<int> _field = GetClass().GetField(O("ShiftCreditToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetShiftCreditToRemove(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ShiftCreditToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
