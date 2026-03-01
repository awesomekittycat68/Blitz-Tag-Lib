#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_UserInventoryResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("UserInventoryResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionManager_UserInventory* GetResult() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_UserInventory*> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResult(::GlobalNamespace::ProgressionManager_UserInventory* value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_UserInventory*> _field = GetClass().GetField(O("Result"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
