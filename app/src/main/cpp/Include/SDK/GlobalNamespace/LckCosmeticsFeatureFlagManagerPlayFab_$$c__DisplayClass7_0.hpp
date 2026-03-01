#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LckCosmeticsFeatureFlagManagerPlayFab_$$c__DisplayClass7_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LckCosmeticsFeatureFlagManagerPlayFab").GetInnerClass("<>c__DisplayClass7_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetTcs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tcs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTcs(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tcs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
