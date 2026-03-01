#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/SdkAccountType.hpp"

namespace Oculus_Platform_Models {
    struct SdkAccount : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "SdkAccount");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::SdkAccountType GetAccountType() {
            static BNM::Field<::Oculus_Platform::SdkAccountType> _field = GetClass().GetField(O("AccountType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint64_t GetUserId() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("UserId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
