#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIResourceCollection_$$c__DisplayClass45_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResourceCollection").GetInnerClass("<>c__DisplayClass45_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButton*>* GetButtons() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtons(::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SITouchscreenButton*>*> _field = GetClass().GetField(O("buttons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
