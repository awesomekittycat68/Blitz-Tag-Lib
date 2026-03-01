#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaBallWall : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaBallWall");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaBallWall* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaBallWall*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GlobalNamespace::GorillaBallWall* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaBallWall*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::GorillaBallWall* value) {
            static BNM::Field<::GlobalNamespace::GorillaBallWall*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
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
