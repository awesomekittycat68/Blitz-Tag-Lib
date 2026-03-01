#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ProgressionManager_MothershipUserDataWriteRequest.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_SetGhostReactorInventoryRequest : ::GlobalNamespace::ProgressionManager_MothershipUserDataWriteRequest {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("SetGhostReactorInventoryRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetInventoryJson() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("InventoryJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetInventoryJson(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("InventoryJson"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
