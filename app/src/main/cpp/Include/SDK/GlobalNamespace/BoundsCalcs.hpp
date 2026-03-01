#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoundsInfo.hpp"
#include "StateHash.hpp"

namespace GlobalNamespace {
    struct BoundsCalcs : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BoundsCalcs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::StateHash GetState() {
            static BNM::Field<::GlobalNamespace::StateHash> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BoundsInfo GetComposite() {
            static BNM::Field<::GlobalNamespace::BoundsInfo> _field = GetClass().GetField(O("composite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BoundsInfo>* GetElements() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BoundsInfo>*> _field = GetClass().GetField(O("elements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetOptionalTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("optionalTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetSingleMesh() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("singleMesh"));
            return _field.Get();
        }
        bool GetUseRootMeshOnly() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRootMeshOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetState(::GlobalNamespace::StateHash value) {
            static BNM::Field<::GlobalNamespace::StateHash> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComposite(::GlobalNamespace::BoundsInfo value) {
            static BNM::Field<::GlobalNamespace::BoundsInfo> _field = GetClass().GetField(O("composite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetElements(::BNM::Structures::Mono::List<::GlobalNamespace::BoundsInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BoundsInfo>*> _field = GetClass().GetField(O("elements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptionalTargets(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("optionalTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSingleMesh(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("singleMesh"));
            _field.Set(value);
        }
        void SetUseRootMeshOnly(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useRootMeshOnly"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Compute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Compute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
