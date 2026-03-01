#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform_Models {
    struct BillingPlan : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "BillingPlan");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::PaidOffer* GetPaidOffer() {
            static BNM::Field<::Oculus_Platform_Models::PaidOffer*> _field = GetClass().GetField(O("PaidOffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::TrialOfferList* GetTrialOffers() {
            static BNM::Field<::Oculus_Platform_Models::TrialOfferList*> _field = GetClass().GetField(O("TrialOffers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::TrialOfferList* GetTrialOffersOptional() {
            static BNM::Field<::Oculus_Platform_Models::TrialOfferList*> _field = GetClass().GetField(O("TrialOffersOptional"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
