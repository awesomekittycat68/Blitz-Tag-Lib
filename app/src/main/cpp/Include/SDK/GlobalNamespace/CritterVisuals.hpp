#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CritterAppearance.hpp"

namespace GlobalNamespace {
    struct CritterVisuals : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CritterVisuals");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CritterAppearance GetAppearance() {
            static BNM::Method<::GlobalNamespace::CritterAppearance> _method = GetClass().GetMethod(O("get_Appearance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::CritterAppearance GetAppearance_f() {
            static BNM::Field<::GlobalNamespace::CritterAppearance> _field = GetClass().GetField(O("_appearance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetBodyRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bodyRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCritterType() {
            static BNM::Field<int> _field = GetClass().GetField(O("critterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetHatRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hatRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetHats() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("hats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMyMeshFilter() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("myMeshFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MeshRenderer* GetMyRenderer() {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("myRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAppearance(::GlobalNamespace::CritterAppearance value) {
            static BNM::Field<::GlobalNamespace::CritterAppearance> _field = GetClass().GetField(O("_appearance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bodyRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("critterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHatRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("hatRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHats(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("hats"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyMeshFilter(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("myMeshFilter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyRenderer(::MeshRenderer* value) {
            static BNM::Field<::MeshRenderer*> _field = GetClass().GetField(O("myRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ApplyMaterial(::Material* mat) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyMaterial"), {"mat"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mat);
        }
        void ApplyMesh(::BNM::IL2CPP::Il2CppObject* newMesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ApplyMesh"), {"newMesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newMesh);
        }
        ::GlobalNamespace::CritterAppearance get_Appearance() {
            static BNM::Method<::GlobalNamespace::CritterAppearance> _m = GetClass().GetMethod(O("get_Appearance"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetAppearance_1(::GlobalNamespace::CritterAppearance appearance) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetAppearance"), {"appearance"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(appearance);
        }
    };
}
