#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/OfferTerm.hpp"
#include "../Oculus_Platform/OfferType.hpp"

namespace Oculus_Platform_Models {
    struct TrialOffer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "TrialOffer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMaxTermCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxTermCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform_Models::Price* GetPrice() {
            static BNM::Field<::Oculus_Platform_Models::Price*> _field = GetClass().GetField(O("Price"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::OfferTerm GetTrialTerm() {
            static BNM::Field<::Oculus_Platform::OfferTerm> _field = GetClass().GetField(O("TrialTerm"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::OfferType GetTrialType() {
            static BNM::Field<::Oculus_Platform::OfferType> _field = GetClass().GetField(O("TrialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
