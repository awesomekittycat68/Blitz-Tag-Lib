#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct RotatingQuestsManager_$$c__DisplayClass29_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RotatingQuestsManager").GetInnerClass("<>c__DisplayClass29_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GlobalNamespace::RotatingQuest*>* GetAction() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RotatingQuest*>*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAction(::BNM::Structures::Mono::Action<::GlobalNamespace::RotatingQuest*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::RotatingQuest*>*> _field = GetClass().GetField(O("action"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
