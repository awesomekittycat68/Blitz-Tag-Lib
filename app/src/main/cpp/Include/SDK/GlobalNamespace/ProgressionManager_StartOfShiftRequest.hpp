#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_StartOfShiftRequest : ::GlobalNamespace::ProgressionManager_MothershipRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("StartOfShiftRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCoresRequired() {
            static BNM::Field<int> _field = GetClass().GetField(O("CoresRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDepth() {
            static BNM::Field<int> _field = GetClass().GetField(O("Depth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumberOfPlayers() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumberOfPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetShiftId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ShiftId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCoresRequired(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CoresRequired"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Depth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumberOfPlayers(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumberOfPlayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShiftId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ShiftId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
