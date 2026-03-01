#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourPostTick.hpp"

namespace GlobalNamespace {
    struct BuilderRendererPreRender : ::GlobalNamespace::MonoBehaviourPostTick {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderRendererPreRender");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BuilderRenderer* GetBuilderRenderer() {
            static BNM::Field<::GlobalNamespace::BuilderRenderer*> _field = GetClass().GetField(O("builderRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuilderRenderer(::GlobalNamespace::BuilderRenderer* value) {
            static BNM::Field<::GlobalNamespace::BuilderRenderer*> _field = GetClass().GetField(O("builderRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
