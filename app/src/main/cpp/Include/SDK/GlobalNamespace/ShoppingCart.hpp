#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ShoppingCart : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ShoppingCart");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::ShoppingCart* GetInstance() {
            static BNM::Field<::GlobalNamespace::ShoppingCart*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::ShoppingCart* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::ShoppingCart*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::ShoppingCart* value) {
            static BNM::Field<::GlobalNamespace::ShoppingCart*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
