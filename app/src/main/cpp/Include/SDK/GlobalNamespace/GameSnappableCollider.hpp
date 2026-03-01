#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameSnappableCollider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameSnappableCollider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameSnappable* GetGameSnappable() {
            static BNM::Field<::GlobalNamespace::GameSnappable*> _field = GetClass().GetField(O("gameSnappable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGameSnappable(::GlobalNamespace::GameSnappable* value) {
            static BNM::Field<::GlobalNamespace::GameSnappable*> _field = GetClass().GetField(O("gameSnappable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
