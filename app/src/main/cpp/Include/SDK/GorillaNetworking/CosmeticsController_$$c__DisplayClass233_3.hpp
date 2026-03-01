#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct CosmeticsController_$$c__DisplayClass233_3 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController").GetInnerClass("<>c__DisplayClass233_3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking_Store::StoreBundle* GetBundleData() {
            static BNM::Field<::GorillaNetworking_Store::StoreBundle*> _field = GetClass().GetField(O("bundleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBundleData(::GorillaNetworking_Store::StoreBundle* value) {
            static BNM::Field<::GorillaNetworking_Store::StoreBundle*> _field = GetClass().GetField(O("bundleData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
