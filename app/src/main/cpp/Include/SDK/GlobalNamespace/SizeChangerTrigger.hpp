#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SizeChangerTrigger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeChangerTrigger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void add_OnEnter(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnEnter(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void add_OnExit(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        void remove_OnExit(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* d) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnExit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d);
        }
        bool GetBuilderEnterTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("builderEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetBuilderExitOnEnterTrigger() {
            static BNM::Field<bool> _field = GetClass().GetField(O("builderExitOnEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetMyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* GetOnEnter() {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*> _field = GetClass().GetField(O("OnEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* GetOnExit() {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*> _field = GetClass().GetField(O("OnExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBuilderEnterTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("builderEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderExitOnEnterTrigger(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("builderExitOnEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnter(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*> _field = GetClass().GetField(O("OnEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnExit(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* value) {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent*> _field = GetClass().GetField(O("OnExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void add_OnEnter_1(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void add_OnExit_1(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("add_OnExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 ClosestPoint(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClosestPoint"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position);
        }
        void OnPieceActivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceActivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceCreate(int pieceType, int pieceId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceCreate"), {"pieceType", "pieceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId);
        }
        void OnPieceDeactivate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDeactivate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPieceDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPiecePlacementDeserialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPiecePlacementDeserialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void remove_OnEnter_1(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnEnter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void remove_OnExit_1(::GlobalNamespace::SizeChangerTrigger_SizeChangerTriggerEvent* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("remove_OnExit"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
