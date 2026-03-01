#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIDispenserGadgetListEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIDispenserGadgetListEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SITouchscreenButtonContainer* GetDispenseButton() {
            static BNM::Method<::GlobalNamespace::SITouchscreenButtonContainer*> _method = GetClass().GetMethod(O("get_DispenseButton"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SITouchscreenButtonContainer* GetDispenseButton_f() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButtonContainer*> _field = GetClass().GetField(O("dispenseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetGadgetText() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetImage1() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("image1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetImage2() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("image2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SITouchscreenButtonContainer* GetInfoButton() {
            static BNM::Field<::GlobalNamespace::SITouchscreenButtonContainer*> _field = GetClass().GetField(O("infoButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetText1() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("text1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ObjectHierarchyFlattener* GetText2() {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("text2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDispenseButton(::GlobalNamespace::SITouchscreenButtonContainer* value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButtonContainer*> _field = GetClass().GetField(O("dispenseButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGadgetText(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("gadgetText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImage1(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("image1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetImage2(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("image2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInfoButton(::GlobalNamespace::SITouchscreenButtonContainer* value) {
            static BNM::Field<::GlobalNamespace::SITouchscreenButtonContainer*> _field = GetClass().GetField(O("infoButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText1(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("text1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetText2(::GlobalNamespace::ObjectHierarchyFlattener* value) {
            static BNM::Field<::GlobalNamespace::ObjectHierarchyFlattener*> _field = GetClass().GetField(O("text2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::SITouchscreenButtonContainer* get_DispenseButton() {
            static BNM::Method<::GlobalNamespace::SITouchscreenButtonContainer*> _m = GetClass().GetMethod(O("get_DispenseButton"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void SetStation(TP0 station, ::Transform* imageTarget, ::Transform* textTarget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStation"), {"station", "imageTarget", "textTarget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(station, imageTarget, textTarget);
        }
        void SetTechTreeNode(::GlobalNamespace::SITechTreeNode* node) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTechTreeNode"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node);
        }
    };
}
