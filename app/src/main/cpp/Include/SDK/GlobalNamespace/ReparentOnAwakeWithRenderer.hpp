#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ReparentOnAwakeWithRenderer : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ReparentOnAwakeWithRenderer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::MeshRenderer* GetMyRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("myRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetNewParent() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("newParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSortLast() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sortLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMyRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("myRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewParent(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("newParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSortLast(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sortLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool BuildValidationCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildValidationCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMyRenderer_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMyRenderer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
