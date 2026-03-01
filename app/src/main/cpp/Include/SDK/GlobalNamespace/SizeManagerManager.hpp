#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SizeManagerManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeManagerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::SizeManagerManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::SizeManagerManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::SizeManager*>* GetAllSM() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SizeManager*>*> _field = GetClass().GetField(O("allSM"));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::SizeManagerManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::SizeManagerManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static void SetAllSM(::BNM::Structures::Mono::List<::GlobalNamespace::SizeManager*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SizeManager*>*> _field = GetClass().GetField(O("allSM"));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::SizeManagerManager* value) {
            static BNM::Field<::GlobalNamespace::SizeManagerManager*> _field = GetClass().GetField(O("instance"));
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
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RegisterSM(::GlobalNamespace::SizeManager* sM) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSM"), {"sM"});
            _m.Call(sM);
        }
        static void SetInstance_1(::GlobalNamespace::SizeManagerManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        static void UnregisterSM(::GlobalNamespace::SizeManager* sM) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSM"), {"sM"});
            _m.Call(sM);
        }
    };
}
