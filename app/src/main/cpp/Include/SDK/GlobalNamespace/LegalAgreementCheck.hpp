#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LegalAgreementCheck : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LegalAgreementCheck");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>* GetAgreements() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>*> _field = GetClass().GetField(O("agreements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LegalAgreements* GetLegalAgreements() {
            static BNM::Field<::GlobalNamespace::LegalAgreements*> _field = GetClass().GetField(O("legalAgreements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestAgreement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("testAgreement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAgreements(::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::LegalAgreementTextAsset*>*> _field = GetClass().GetField(O("agreements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLegalAgreements(::GlobalNamespace::LegalAgreements* value) {
            static BNM::Field<::GlobalNamespace::LegalAgreements*> _field = GetClass().GetField(O("legalAgreements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestAgreement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("testAgreement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
