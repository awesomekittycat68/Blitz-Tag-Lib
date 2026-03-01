#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaExtensions {
    template <typename T, typename TStop1, typename TStop2, typename TStop3>
    struct GTExt_$$c__DisplayClass11_0$4 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaExtensions", "GTExt").GetInnerClass("<>c__DisplayClass11_0`4");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIncludeInactive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIncludeInactive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeInactive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
