#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRDropTableOverrides : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRDropTableOverrides");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>* GetOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*> _field = GetClass().GetField(O("overrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRDropTableOverrides_DropTableOverride*>*> _field = GetClass().GetField(O("overrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetOverride(::GlobalNamespace::GRBreakableItemSpawnConfig* table) {
            static BNM::Method<::GlobalNamespace::GRBreakableItemSpawnConfig*> _m = GetClass().GetMethod(O("GetOverride"), {"table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(table);
        }
    };
}
