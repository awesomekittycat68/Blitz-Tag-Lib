#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MoonController_Placement.hpp"
#include "MoonController_Scenes.hpp"

namespace GlobalNamespace {
    struct MoonController_SceneData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MoonController").GetInnerClass("SceneData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetOverridePlacement() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overridePlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MoonController_Placement GetPlacementOverride() {
            static BNM::Field<::GlobalNamespace::MoonController_Placement> _field = GetClass().GetField(O("PlacementOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetReferencePoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referencePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MoonController_Scenes GetScene() {
            static BNM::Field<::GlobalNamespace::MoonController_Scenes> _field = GetClass().GetField(O("scene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOverridePlacement(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overridePlacement"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementOverride(::GlobalNamespace::MoonController_Placement value) {
            static BNM::Field<::GlobalNamespace::MoonController_Placement> _field = GetClass().GetField(O("PlacementOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReferencePoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("referencePoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScene(::GlobalNamespace::MoonController_Scenes value) {
            static BNM::Field<::GlobalNamespace::MoonController_Scenes> _field = GetClass().GetField(O("scene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
