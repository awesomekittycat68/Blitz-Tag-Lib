#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct GorillaCaveCrystalSetup : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "GorillaCaveCrystalSetup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::GorillaCaveCrystalSetup* get_Instance() {
            static BNM::Method<::GorillaTagScripts::GorillaCaveCrystalSetup*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup* GetInstance() {
            static BNM::Method<::GorillaTagScripts::GorillaCaveCrystalSetup*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetNotes() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_notes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTarget() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetCrystalAlbedo() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("CrystalAlbedo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetCrystalDarkAlbedo() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("CrystalDarkAlbedo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetDark() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Dark"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetDarkBlue() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("DarkBlue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetDarkLight() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("DarkLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetDarkLightUnderWater() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("DarkLightUnderWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>* GetGCrystalDefs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>*> _field = GetClass().GetField(O("gCrystalDefs"));
            return _field.Get();
        }
        static ::GorillaTagScripts::GorillaCaveCrystalSetup* GetGInstance() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup*> _field = GetClass().GetField(O("gInstance"));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetGreen() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetOrange() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Orange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetPink() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Pink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetRed() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Red"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetSharedBase() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("SharedBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetTeal() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Teal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* GetYellow() {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Yellow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNotes(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_notes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTarget(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_target"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrystalAlbedo(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("CrystalAlbedo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrystalDarkAlbedo(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("CrystalDarkAlbedo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDark(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Dark"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDarkBlue(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("DarkBlue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDarkLight(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("DarkLight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDarkLightUnderWater(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("DarkLightUnderWater"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGCrystalDefs(::BNM::Structures::Mono::Array<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>*> _field = GetClass().GetField(O("gCrystalDefs"));
            _field.Set(value);
        }
        static void SetGInstance(::GorillaTagScripts::GorillaCaveCrystalSetup* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup*> _field = GetClass().GetField(O("gInstance"));
            _field.Set(value);
        }
        void SetGreen(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Green"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOrange(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Orange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPink(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Pink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRed(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Red"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedBase(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("SharedBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeal(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Teal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYellow(::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef* value) {
            static BNM::Field<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*> _field = GetClass().GetField(O("Yellow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::GorillaTagScripts::GorillaCaveCrystalSetup* get_Instance_1() {
            static BNM::Method<::GorillaTagScripts::GorillaCaveCrystalSetup*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>* GetCrystalDefs() {
            static BNM::Method<::BNM::Structures::Mono::Array<::GorillaTagScripts::GorillaCaveCrystalSetup_CrystalDef*>*> _m = GetClass().GetMethod(O("GetCrystalDefs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
