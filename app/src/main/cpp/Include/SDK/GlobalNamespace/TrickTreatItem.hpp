#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "RandomComponent$1.hpp"

namespace GlobalNamespace {
    struct TrickTreatItem : ::GlobalNamespace::RandomComponent$1<::MeshRenderer*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TrickTreatItem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnNextItem(::MeshRenderer* item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnNextItem"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        void Randomize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Randomize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
