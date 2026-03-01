#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Bindings_Components_LuauAnimatorBindings_LuauAnimator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Bindings").GetInnerClass("Components").GetInnerClass("LuauAnimatorBindings").GetInnerClass("LuauAnimator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetX() {
            static BNM::Field<int> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetX(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("x"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
