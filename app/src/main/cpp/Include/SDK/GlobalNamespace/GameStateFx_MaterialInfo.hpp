#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameStateFx_MaterialInfo_Entry.hpp"

namespace GlobalNamespace {
    struct GameStateFx_MaterialInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameStateFx").GetInnerClass("MaterialInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo_Entry>* GetEntries() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo_Entry>*> _field = GetClass().GetField(O("entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEntries(::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo_Entry>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo_Entry>*> _field = GetClass().GetField(O("entries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
