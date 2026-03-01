#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TransferrableObjectManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TransferrableObjectManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::TransferrableObjectManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::TransferrableObjectManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::TransferrableObjectManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::TransferrableObjectManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* GetTransObs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("transObs"));
            return _field.Get();
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::TransferrableObjectManager* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObjectManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GlobalNamespace::TransferrableObject* transOb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"transOb"});
            _m.Call(transOb);
        }
        static void SetInstance_1(::GlobalNamespace::TransferrableObjectManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void Unregister(::GlobalNamespace::TransferrableObject* transOb) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"transOb"});
            _m.Call(transOb);
        }
    };
}
