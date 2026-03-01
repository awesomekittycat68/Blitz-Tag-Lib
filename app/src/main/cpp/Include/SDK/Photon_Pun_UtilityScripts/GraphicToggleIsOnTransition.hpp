#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct GraphicToggleIsOnTransition : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "GraphicToggleIsOnTransition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Graphic* GetGraphic() {
            static BNM::Field<::Graphic*> _field = GetClass().GetField(O("_graphic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetHoverOffColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("HoverOffColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetHoverOnColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("HoverOnColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsHover() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNormalOffColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("NormalOffColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetNormalOnColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("NormalOnColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetToggle() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("toggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGraphic(::Graphic* value) {
            static BNM::Field<::Graphic*> _field = GetClass().GetField(O("_graphic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverOffColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("HoverOffColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHoverOnColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("HoverOnColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsHover(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isHover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalOffColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("NormalOffColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNormalOnColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("NormalOnColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToggle(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("toggle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPointerEnter(::BNM::IL2CPP::Il2CppObject* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPointerEnter"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        void OnPointerExit(::BNM::IL2CPP::Il2CppObject* eventData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPointerExit"), {"eventData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eventData);
        }
        void OnValueChanged(bool isOn) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValueChanged"), {"isOn"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isOn);
        }
    };
}
