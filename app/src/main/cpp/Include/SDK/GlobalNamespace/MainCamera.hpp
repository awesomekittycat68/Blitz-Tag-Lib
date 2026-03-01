#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MonoBehaviourStatic$1.hpp"

namespace GlobalNamespace {
    struct MainCamera : ::GlobalNamespace::MonoBehaviourStatic$1<::GlobalNamespace::MainCamera*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MainCamera");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Camera* GetCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("camera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("camera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
