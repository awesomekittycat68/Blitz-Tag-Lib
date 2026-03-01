#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BodyDockPositions_DropPositions.hpp"

namespace GlobalNamespace {
    struct BodyDockPositions_DockingResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BodyDockPositions").GetInnerClass("DockingResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>* GetDockedPosition() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>*> _field = GetClass().GetField(O("dockedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>* GetPositionsDisabled() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>*> _field = GetClass().GetField(O("positionsDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDockedPosition(::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>*> _field = GetClass().GetField(O("dockedPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionsDisabled(::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BodyDockPositions_DropPositions>*> _field = GetClass().GetField(O("positionsDisabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
