#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EyeScannerMono : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EyeScannerMono");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetDebugData() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_DebugData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDebugData(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DebugData"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<void*>* GetRegisteredScannables() {
            static BNM::Method<::BNM::Structures::Mono::List<void*>*> _method = GetClass().GetMethod(O("get_registeredScannables"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<int>* GetEntryIndexes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("_entryIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetFirstPersonCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_firstPersonCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasFirstPersonCamera() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_has_firstPersonCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetKeyRichTextColorTagString() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_keyRichTextColorTagString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLayerMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_layerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LineRenderer* GetLine() {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_line"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOldClosestScannable() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_oldClosestScannable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void* GetRegisteredScannableIds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_registeredScannableIds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<void*>* GetRegisteredScannables_f() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("_registeredScannables"));
            return _field.Get();
        }
        void* GetSb() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetMKeyTextColor() {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_keyTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMLookPrecision() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_LookPrecision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMOverlay() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_overlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetMOverlayBg() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_overlayBg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMOverlayScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_overlayScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetMPointerOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_pointerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("m_position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetMReticle() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_reticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMReticleScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_reticleScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMScanDistanceMax() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_scanDistanceMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMScanDistanceMin() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_scanDistanceMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMTextScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_textScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TextTyperAnimatorMono* GetMTextTyper() {
            static BNM::Field<::GlobalNamespace::TextTyperAnimatorMono*> _field = GetClass().GetField(O("m_textTyper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMXrayVision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_xrayVision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFirstPersonCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("_firstPersonCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasFirstPersonCamera(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_has_firstPersonCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetKeyRichTextColorTagString(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("_keyRichTextColorTagString"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayerMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_layerMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLine(::LineRenderer* value) {
            static BNM::Field<::LineRenderer*> _field = GetClass().GetField(O("_line"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldClosestScannable(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_oldClosestScannable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSb(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_sb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMKeyTextColor(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("m_keyTextColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLookPrecision(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_LookPrecision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOverlay(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_overlay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOverlayBg(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_overlayBg"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMOverlayScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_overlayScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPointerOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("m_pointerOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPosition(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("m_position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMReticle(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("m_reticle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMReticleScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_reticleScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMScanDistanceMax(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_scanDistanceMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMScanDistanceMin(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_scanDistanceMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTextScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_textScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTextTyper(::GlobalNamespace::TextTyperAnimatorMono* value) {
            static BNM::Field<::GlobalNamespace::TextTyperAnimatorMono*> _field = GetClass().GetField(O("m_textTyper"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMXrayVision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_xrayVision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void _OnScannableChanged(TP0 scannable, bool typeingShow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnScannableChanged"), {"scannable", "typeingShow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scannable, typeingShow);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_DebugData() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_DebugData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_KeyTextColor() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_KeyTextColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<void*>* get_registeredScannables() {
            static BNM::Method<::BNM::Structures::Mono::List<void*>*> _m = GetClass().GetMethod(O("get_registeredScannables"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDespawn() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDespawn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
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
        void OnSpawn(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSpawn"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        template <typename TP0 = void*>
        static void Register(TP0 scannable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"scannable"});
            _m.Call(scannable);
        }
        void Scannable_OnDataChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Scannable_OnDataChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_DebugData(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DebugData"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_KeyTextColor(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_KeyTextColor"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        static void Unregister(TP0 scannable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"scannable"});
            _m.Call(scannable);
        }
    };
}
