#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_$DoPurchaseResources$d__113 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("<DoPurchaseResources>d__113");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* GetData() {
            static BNM::Field<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* GetOnFailure() {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserInventory*>* GetOnSuccess() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserInventory*>*> _field = GetClass().GetField(O("OnSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest* value) {
            static BNM::Field<::GlobalNamespace::ProgressionManager_PurchaseResourcesRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnFailure(::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSuccess(::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserInventory*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::ProgressionManager_UserInventory*>*> _field = GetClass().GetField(O("OnSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
