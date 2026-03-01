#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ContinuousProperty_Cast.hpp"
#include "ContinuousProperty_DataFlags.hpp"

namespace GorillaTag_Cosmetics {
    struct ContinuousPropertyModeSO_CastData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ContinuousPropertyModeSO").GetInnerClass("CastData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_Cosmetics::ContinuousProperty_DataFlags GetAdditionalFlags() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_DataFlags> _field = GetClass().GetField(O("additionalFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_Cast GetTarget() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_Cast> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetWhatItSets() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("whatItSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAdditionalFlags(::GorillaTag_Cosmetics::ContinuousProperty_DataFlags value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_DataFlags> _field = GetClass().GetField(O("additionalFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::GorillaTag_Cosmetics::ContinuousProperty_Cast value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_Cast> _field = GetClass().GetField(O("target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhatItSets(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("whatItSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
