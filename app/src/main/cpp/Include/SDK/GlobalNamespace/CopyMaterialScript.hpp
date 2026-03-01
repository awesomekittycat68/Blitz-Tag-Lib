#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CopyMaterialScript : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CopyMaterialScript");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::SkinnedMeshRenderer* GetMySkinnedMeshRenderer() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("mySkinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::SkinnedMeshRenderer* GetSourceToCopyMaterialFrom() {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("sourceToCopyMaterialFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMySkinnedMeshRenderer(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("mySkinnedMeshRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSourceToCopyMaterialFrom(::SkinnedMeshRenderer* value) {
            static BNM::Field<::SkinnedMeshRenderer*> _field = GetClass().GetField(O("sourceToCopyMaterialFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
