#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeBallBallResetTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeBallBallResetTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GameBall* GetLastBall() {
            static BNM::Field<::GlobalNamespace::GameBall*> _field = GetClass().GetField(O("_lastBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetNeutralMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("neutralMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetTeamMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("teamMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Renderer* GetTrigger() {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("trigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastBall(::GlobalNamespace::GameBall* value) {
            static BNM::Field<::GlobalNamespace::GameBall*> _field = GetClass().GetField(O("_lastBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNeutralMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("neutralMaterial"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTeamMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("teamMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTrigger(::Renderer* value) {
            static BNM::Field<::Renderer*> _field = GetClass().GetField(O("trigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
