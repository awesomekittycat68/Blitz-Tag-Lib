#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapAccessDoor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapAccessDoor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetClosedDoorObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("closedDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetOpenDoorObject() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("openDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetClosedDoorObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("closedDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOpenDoorObject(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("openDoorObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CloseDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CloseDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OpenDoor() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OpenDoor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
