#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct LocalisationUI_$$c__DisplayClass21_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "LocalisationUI").GetInnerClass("<>c__DisplayClass21_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetItem() {
            static BNM::Field<void*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::KIDUIButton* GetNewButton() {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("newButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetItem(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("item"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewButton(::GlobalNamespace::KIDUIButton* value) {
            static BNM::Field<::GlobalNamespace::KIDUIButton*> _field = GetClass().GetField(O("newButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
