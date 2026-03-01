#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/ProductType.hpp"

namespace Oculus_Platform_Models {
    struct Purchase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "Purchase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDeveloperPayload() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("DeveloperPayload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetExpirationTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ExpirationTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGrantTime() {
            static BNM::Field<void*> _field = GetClass().GetField(O("GrantTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetReportingId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("ReportingId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSku() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Sku"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::ProductType GetType_f() {
            static BNM::Field<::Oculus_Platform::ProductType> _field = GetClass().GetField(O("Type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
