#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRDropTableOverrides_DropTableOverride : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRDropTableOverrides").GetInnerClass("DropTableOverride");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetOverrideTable() {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("overrideTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GRBreakableItemSpawnConfig* GetTable() {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOverrideTable(::GlobalNamespace::GRBreakableItemSpawnConfig* value) {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("overrideTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(::GlobalNamespace::GRBreakableItemSpawnConfig* value) {
            static BNM::Field<::GlobalNamespace::GRBreakableItemSpawnConfig*> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
