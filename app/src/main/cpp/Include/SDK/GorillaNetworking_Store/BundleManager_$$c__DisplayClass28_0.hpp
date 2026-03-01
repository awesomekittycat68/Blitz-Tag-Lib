#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct BundleManager_$$c__DisplayClass28_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "BundleManager").GetInnerClass("<>c__DisplayClass28_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaNetworking_Store::BundleStand* GetBundle() {
            static BNM::Field<::GorillaNetworking_Store::BundleStand*> _field = GetClass().GetField(O("bundle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBundle(::GorillaNetworking_Store::BundleStand* value) {
            static BNM::Field<::GorillaNetworking_Store::BundleStand*> _field = GetClass().GetField(O("bundle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
