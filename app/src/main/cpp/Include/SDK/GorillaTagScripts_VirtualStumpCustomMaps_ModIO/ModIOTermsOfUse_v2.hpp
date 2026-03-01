#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/LegalAgreements.hpp"

namespace GorillaTagScripts_VirtualStumpCustomMaps_ModIO {
    struct ModIOTermsOfUse_v2 : ::GlobalNamespace::LegalAgreements {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.VirtualStumpCustomMaps.ModIO", "ModIOTermsOfUse_v2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetCachedTermsText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedTermsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetConfirmString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("confirmString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFullPrivacyPolicy() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fullPrivacyPolicy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetFullTermsOfUse() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fullTermsOfUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts_VirtualStumpCustomMaps_ModIO::ModIOTermsOfUse_v2* GetModioTermsInstance() {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_ModIO::ModIOTermsOfUse_v2*> _field = GetClass().GetField(O("modioTermsInstance"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetTermsOfUse() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("termsOfUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedTermsText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("cachedTermsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfirmString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("confirmString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullPrivacyPolicy(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fullPrivacyPolicy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFullTermsOfUse(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fullTermsOfUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetModioTermsInstance(::GorillaTagScripts_VirtualStumpCustomMaps_ModIO::ModIOTermsOfUse_v2* value) {
            static BNM::Field<::GorillaTagScripts_VirtualStumpCustomMaps_ModIO::ModIOTermsOfUse_v2*> _field = GetClass().GetField(O("modioTermsInstance"));
            _field.Set(value);
        }
        void SetTermsOfUse(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("termsOfUse"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* FormatAgreementText(::BNM::IL2CPP::Il2CppObject* agreement) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("FormatAgreementText"), {"agreement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(agreement);
        }
        ::BNM::Structures::Mono::String* GetStringForListItemIdx_LowerAlpha(int idx) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetStringForListItemIdx_LowerAlpha"), {"idx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(idx);
        }
        void* ShowTerms() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ShowTerms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* StartLegalAgreements() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("StartLegalAgreements"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void UpdateTextFromTerms() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTextFromTerms"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
