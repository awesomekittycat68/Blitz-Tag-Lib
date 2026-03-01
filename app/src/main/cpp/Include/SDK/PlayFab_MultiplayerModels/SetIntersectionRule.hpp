#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AttributeNotSpecifiedBehavior.hpp"
#include "../PlayFab_SharedModels/PlayFabBaseModel.hpp"

namespace PlayFab_MultiplayerModels {
    struct SetIntersectionRule : ::PlayFab_SharedModels::PlayFabBaseModel {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.MultiplayerModels", "SetIntersectionRule");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_MultiplayerModels::QueueRuleAttribute* GetAttribute() {
            static BNM::Field<::PlayFab_MultiplayerModels::QueueRuleAttribute*> _field = GetClass().GetField(O("Attribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::AttributeNotSpecifiedBehavior GetAttributeNotSpecifiedBehavior() {
            static BNM::Field<::PlayFab_MultiplayerModels::AttributeNotSpecifiedBehavior> _field = GetClass().GetField(O("AttributeNotSpecifiedBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::CustomSetIntersectionRuleExpansion* GetCustomExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomSetIntersectionRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetDefaultAttributeValue() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("DefaultAttributeValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_MultiplayerModels::LinearSetIntersectionRuleExpansion* GetLinearExpansion() {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearSetIntersectionRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetMinIntersectionSize() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MinIntersectionSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSecondsUntilOptional() {
            static BNM::Field<void*> _field = GetClass().GetField(O("SecondsUntilOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetWeight() {
            static BNM::Field<double> _field = GetClass().GetField(O("Weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttribute(::PlayFab_MultiplayerModels::QueueRuleAttribute* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::QueueRuleAttribute*> _field = GetClass().GetField(O("Attribute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttributeNotSpecifiedBehavior(::PlayFab_MultiplayerModels::AttributeNotSpecifiedBehavior value) {
            static BNM::Field<::PlayFab_MultiplayerModels::AttributeNotSpecifiedBehavior> _field = GetClass().GetField(O("AttributeNotSpecifiedBehavior"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomExpansion(::PlayFab_MultiplayerModels::CustomSetIntersectionRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::CustomSetIntersectionRuleExpansion*> _field = GetClass().GetField(O("CustomExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultAttributeValue(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("DefaultAttributeValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinearExpansion(::PlayFab_MultiplayerModels::LinearSetIntersectionRuleExpansion* value) {
            static BNM::Field<::PlayFab_MultiplayerModels::LinearSetIntersectionRuleExpansion*> _field = GetClass().GetField(O("LinearExpansion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinIntersectionSize(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("MinIntersectionSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Name"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondsUntilOptional(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("SecondsUntilOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeight(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("Weight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
