#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CosmeticRefID.hpp"

namespace GlobalNamespace {
    struct CosmeticRefRegistry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticRefRegistry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticRefTarget*>* GetBuiltInRefTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticRefTarget*>*> _field = GetClass().GetField(O("builtInRefTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetPartsTable() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("partsTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuiltInRefTargets(::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticRefTarget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::CosmeticRefTarget*>*> _field = GetClass().GetField(O("builtInRefTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartsTable(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("partsTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GameObject* Get(::GlobalNamespace::CosmeticRefID partID) {
            static BNM::Method<::GameObject*> _m = GetClass().GetMethod(O("Get"), {"partID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(partID);
        }
        void Register(::GlobalNamespace::CosmeticRefID partID, ::GameObject* part) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"partID", "part"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(partID, part);
        }
    };
}
