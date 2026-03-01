#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking_Store {
    struct ATM_UI : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking.Store", "ATM_UI");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::TMP_Text*>* GetATMRightColumnArrowText() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("ATM_RightColumnArrowText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::TMP_Text*>* GetATMRightColumnButtonText() {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("ATM_RightColumnButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetAtmText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("atmText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCreatorCodeField() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCreatorCodeObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("creatorCodeObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetCreatorCodeTitle() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCustomMapScene() {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetATMRightColumnArrowText(::BNM::Structures::Mono::Array<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("ATM_RightColumnArrowText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetATMRightColumnButtonText(::BNM::Structures::Mono::Array<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::TMP_Text*>*> _field = GetClass().GetField(O("ATM_RightColumnButtonText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAtmText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("atmText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatorCodeField(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatorCodeObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("creatorCodeObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCreatorCodeTitle(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("creatorCodeTitle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCustomMapScene(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("customMapScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool IsFromCustomMapScene(TP0 scene) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFromCustomMapScene"), {"scene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(scene);
        }
        template <typename TP0 = void*>
        void SetCustomMapScene_1(TP0 scene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCustomMapScene"), {"scene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scene);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
