#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRSelectionWheel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRSelectionWheel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::AudioSource* GetAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDeltaAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBeingDrivenRemotely() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBeingDrivenRemotely"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastPlayedAudioTickPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedAudioTickPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPointerOffsetAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("pointerOffsetAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRotationWheel() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rotationWheel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotSpeedMult() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotSpeedMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::TMP_Text*>* GetShelfNames() {
            static BNM::Field<::BNM::Structures::Mono::List<::TMP_Text*>*> _field = GetClass().GetField(O("shelfNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetPage() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTemplateText() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("templateText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTextHorizOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("textHorizOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWheelTextPairOffset() {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelTextPairOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWheelTextRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelTextRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("audioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("deltaAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBeingDrivenRemotely(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBeingDrivenRemotely"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPlayedAudioTickPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastPlayedAudioTickPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPointerOffsetAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pointerOffsetAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationWheel(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("rotationWheel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotSpeedMult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotSpeedMult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfNames(::BNM::Structures::Mono::List<::TMP_Text*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::TMP_Text*>*> _field = GetClass().GetField(O("shelfNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPage(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTemplateText(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("templateText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextHorizOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("textHorizOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelTextPairOffset(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelTextPairOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWheelTextRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("wheelTextRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitFromNameList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* shelves) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitFromNameList"), {"shelves"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelves);
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
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRotationSpeed(float speed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRotationSpeed"), {"speed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(speed);
        }
        void SetTargetAngle(float angle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTargetAngle"), {"angle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(angle);
        }
        void SetTargetShelf(int shelf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTargetShelf"), {"shelf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelf);
        }
        void ShowText(bool showText) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowText"), {"showText"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(showText);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
