#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct RigidbodyHighlighter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "RigidbodyHighlighter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetActive() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Active"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetActive(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Active"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetButtonText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ButtonText"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetInGameDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("_inGameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetLineRenderer() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLineWidth() {
            static BNM::Field<float> _field = GetClass().GetField(O("_lineWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Rigidbody*>* GetRigidbodies() {
            static BNM::Field<::BNM::Structures::Mono::List<::Rigidbody*>*> _field = GetClass().GetField(O("_rigidbodies"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTracerOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_tracerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag::RigidbodyHighlighter* GetInstance() {
            static BNM::Field<::GorillaTag::RigidbodyHighlighter*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        void SetInGameDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_inGameDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineRenderer(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_lineRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLineWidth(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_lineWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTracerOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_tracerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTag::RigidbodyHighlighter* value) {
            static BNM::Field<::GorillaTag::RigidbodyHighlighter*> _field = GetClass().GetField(O("Instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DrawBox(::Transform* tx, ::BNM::Structures::Unity::Color color, float duration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawBox"), {"tx", "color", "duration"});
            _m.Call(tx, color, duration);
        }
        void DrawTracers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DrawTracers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_Active() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Active"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_ButtonText() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ButtonText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<::Rigidbody*>* GetAwakeRigidbodies() {
            static BNM::Method<::BNM::Structures::Mono::List<::Rigidbody*>*> _m = GetClass().GetMethod(O("GetAwakeRigidbodies"));
            return _m.Call();
        }
        void GetRigidbodyNames() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetRigidbodyNames"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void HighlightActiveRigidbodies() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HighlightActiveRigidbodies"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDrawGizmos() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDrawGizmos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Active(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Active"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
