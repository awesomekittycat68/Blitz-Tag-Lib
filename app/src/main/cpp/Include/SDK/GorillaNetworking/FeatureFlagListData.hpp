#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct FeatureFlagListData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "FeatureFlagListData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaNetworking::FeatureFlagData*>* GetFlags() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::FeatureFlagData*>*> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFlags(::BNM::Structures::Mono::Array<::GorillaNetworking::FeatureFlagData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaNetworking::FeatureFlagData*>*> _field = GetClass().GetField(O("flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
