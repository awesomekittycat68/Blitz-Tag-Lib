#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SITouchscreenButton_SITouchscreenButtonType.hpp"

namespace GlobalNamespace {
    struct SIGadgetListEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIGadgetListEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SITouchscreenButtonContainer* GetButtonContainer() {
            static BNM::Method<::GlobalNamespace::SITouchscreenButtonContainer*> _method = GetClass().GetMethod(O("get_ButtonContainer"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::SITouchscreenButtonContainer* GetButtonContainer_f() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButtonContainer*> _field = GetClass().GetField(O("buttonContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGadgetText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetImageFlattener() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("imageFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSelectionIndicator() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("selectionIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetTextFlattener() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("textFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetButtonContainer(::GlobalNamespace::SITouchscreenButtonContainer* value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButtonContainer*> _field = GetClass().GetField(O("buttonContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImageFlattener(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("imageFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectionIndicator(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("selectionIndicator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextFlattener(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("textFlattener"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void Configure(TP0 station, ::GlobalNamespace::SITechTreePage* page, ::Transform* imageTarget, ::Transform* textTarget, ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType buttonType, int index, float positionInterval, int listSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Configure"), {"station", "page", "imageTarget", "textTarget", "buttonType", "index", "positionInterval", "listSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station, page, imageTarget, textTarget, buttonType, index, positionInterval, listSize);
        }
        ::GlobalNamespace::SITouchscreenButtonContainer* get_ButtonContainer() {
            static BNM::Method<::GlobalNamespace::SITouchscreenButtonContainer*> _m = GetClass().GetMethod(O("get_ButtonContainer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Id() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Id(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
