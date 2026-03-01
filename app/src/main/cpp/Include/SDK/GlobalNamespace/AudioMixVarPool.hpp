#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AudioMixVarPool : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AudioMixVarPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::AudioMixVar*>* GetVars() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::AudioMixVar*>*> _field = GetClass().GetField(O("_vars"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetVars(::BNM::Structures::Mono::Array<::GlobalNamespace::AudioMixVar*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::AudioMixVar*>*> _field = GetClass().GetField(O("_vars"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Rent(::GlobalNamespace::AudioMixVar*& mixVar) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Rent"), {"mixVar"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&mixVar);
        }
        void Return(::GlobalNamespace::AudioMixVar* mixVar) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Return"), {"mixVar"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mixVar);
        }
    };
}
