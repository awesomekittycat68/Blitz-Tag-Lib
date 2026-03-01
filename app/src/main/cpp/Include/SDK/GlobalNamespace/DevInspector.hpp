#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevInspector : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevInspector");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAutoFind() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoFind"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetCanvas() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("canvas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Component*>* GetComponentToInspect() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Component*>*> _field = GetClass().GetField(O("componentToInspect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Text* GetOutputInfo() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("outputInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPivot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pivot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSidewaysOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("sidewaysOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoFind(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoFind"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCanvas(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("canvas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComponentToInspect(::BNM::Structures::Mono::Array<::Component*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Component*>*> _field = GetClass().GetField(O("componentToInspect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputInfo(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("outputInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPivot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("pivot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSidewaysOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sidewaysOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
