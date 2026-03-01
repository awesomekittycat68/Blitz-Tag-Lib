#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SnapBounds.hpp"

namespace GlobalNamespace {
    struct SnapData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SnapData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAttachIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("attachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SnapBounds GetSnapBounds() {
            static BNM::Field<::GlobalNamespace::SnapBounds> _field = GetClass().GetField(O("snapBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapBounds(::GlobalNamespace::SnapBounds value) {
            static BNM::Field<::GlobalNamespace::SnapBounds> _field = GetClass().GetField(O("snapBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
