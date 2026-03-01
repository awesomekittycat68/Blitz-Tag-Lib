#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BodyDockPositions_DropPositions.hpp"

namespace GlobalNamespace {
    struct DropZone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DropZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetAnchor() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("anchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BodyDockPositions_DropPositions GetDropPosition() {
            static BNM::Field<::GlobalNamespace::BodyDockPositions_DropPositions> _field = GetClass().GetField(O("dropPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BodyDockPositions* GetForBodyDock() {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("forBodyDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAnchor(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("anchor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropPosition(::GlobalNamespace::BodyDockPositions_DropPositions value) {
            static BNM::Field<::GlobalNamespace::BodyDockPositions_DropPositions> _field = GetClass().GetField(O("dropPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForBodyDock(::GlobalNamespace::BodyDockPositions* value) {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("forBodyDock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
