#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CosmeticAnchorManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticAnchorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::CosmeticAnchorManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::CosmeticAnchorManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticAnchors*>* GetAllAnchors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticAnchors*>*> _field = GetClass().GetField(O("allAnchors"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::CosmeticAnchorManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::CosmeticAnchorManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllAnchors(::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticAnchors*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::CosmeticAnchors*>*> _field = GetClass().GetField(O("allAnchors"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::CosmeticAnchorManager* value) {
            static BNM::Field<::GlobalNamespace::CosmeticAnchorManager*> _field = GetClass().GetField(O("instance"));
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
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterCosmeticAnchor(::GlobalNamespace::CosmeticAnchors* cA) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterCosmeticAnchor"), {"cA"});
            _m.Call(cA);
        }
        static void SetInstance_1(::GlobalNamespace::CosmeticAnchorManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void UnregisterCosmeticAnchor(::GlobalNamespace::CosmeticAnchors* cA) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterCosmeticAnchor"), {"cA"});
            _m.Call(cA);
        }
    };
}
