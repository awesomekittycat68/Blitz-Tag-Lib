#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ContinuousProperty_Cast.hpp"
#include "ContinuousProperty_DataFlags.hpp"
#include "ContinuousProperty_Type.hpp"
#include "ContinuousPropertyModeSO_CastData.hpp"
#include "ContinuousPropertyModeSO_DescriptionStyle.hpp"

namespace GorillaTag_Cosmetics {
    struct ContinuousPropertyModeSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "ContinuousPropertyModeSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetGetTestDescription() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_GetTestDescription"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetAfterSentence() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("afterSentence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousPropertyModeSO_CastData>* GetCastData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousPropertyModeSO_CastData>*> _field = GetClass().GetField(O("castData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousPropertyModeSO_DescriptionStyle GetDescriptionStyle() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyModeSO_DescriptionStyle> _field = GetClass().GetField(O("descriptionStyle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_DataFlags GetFlags() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_DataFlags> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetReplaceDescription() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("replaceDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_Type GetType_f() {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_Type> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAfterSentence(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("afterSentence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCastData(::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousPropertyModeSO_CastData>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_Cosmetics::ContinuousPropertyModeSO_CastData>*> _field = GetClass().GetField(O("castData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDescriptionStyle(::GorillaTag_Cosmetics::ContinuousPropertyModeSO_DescriptionStyle value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousPropertyModeSO_DescriptionStyle> _field = GetClass().GetField(O("descriptionStyle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlags(::GorillaTag_Cosmetics::ContinuousProperty_DataFlags value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_DataFlags> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReplaceDescription(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("replaceDescription"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GorillaTag_Cosmetics::ContinuousProperty_Type value) {
            static BNM::Field<::GorillaTag_Cosmetics::ContinuousProperty_Type> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* get_GetTestDescription() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_GetTestDescription"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_Cast GetClosestCast(::GorillaTag_Cosmetics::ContinuousProperty_Cast cast) {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_Cast> _m = GetClass().GetMethod(O("GetClosestCast"), {"cast"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cast);
        }
        ::BNM::Structures::Mono::String* GetDescriptionForCast(::GorillaTag_Cosmetics::ContinuousProperty_Cast cast) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetDescriptionForCast"), {"cast"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cast);
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_DataFlags GetFlagsForCast(::GorillaTag_Cosmetics::ContinuousProperty_Cast cast) {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_DataFlags> _m = GetClass().GetMethod(O("GetFlagsForCast"), {"cast"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cast);
        }
        ::GorillaTag_Cosmetics::ContinuousProperty_DataFlags GetFlagsForClosestCast(::GorillaTag_Cosmetics::ContinuousProperty_Cast cast) {
            static BNM::Method<::GorillaTag_Cosmetics::ContinuousProperty_DataFlags> _m = GetClass().GetMethod(O("GetFlagsForClosestCast"), {"cast"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cast);
        }
        bool IsCastValid(::GorillaTag_Cosmetics::ContinuousProperty_Cast cast) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsCastValid"), {"cast"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cast);
        }
        ::BNM::Structures::Mono::String* ListValidCasts() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ListValidCasts"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
