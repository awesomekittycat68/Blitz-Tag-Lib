#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderSetManager_BuilderSetStoreItem.hpp"
#include "GorillaPressableButton.hpp"

namespace GlobalNamespace {
    struct BuilderKioskButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderKioskButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem GetCurrentPieceSet() {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("currentPieceSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderKiosk* GetKiosk() {
            static BNM::Field<::GlobalNamespace::BuilderKiosk*> _field = GetClass().GetField(O("kiosk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetSetNameText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("setNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentPieceSet(::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem value) {
            static BNM::Field<::GlobalNamespace::BuilderSetManager_BuilderSetStoreItem> _field = GetClass().GetField(O("currentPieceSet"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKiosk(::GlobalNamespace::BuilderKiosk* value) {
            static BNM::Field<::GlobalNamespace::BuilderKiosk*> _field = GetClass().GetField(O("kiosk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSetNameText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("setNameText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivationWithHand(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivationWithHand"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateColor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
