#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/AccountAgeCategory.hpp"

namespace Oculus_Platform_Models {
    struct UserAccountAgeCategory : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "UserAccountAgeCategory");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::AccountAgeCategory GetAgeCategory() {
            static BNM::Field<::Oculus_Platform::AccountAgeCategory> _field = GetClass().GetField(O("AgeCategory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
