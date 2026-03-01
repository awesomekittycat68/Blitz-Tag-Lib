#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderResizeWatch_BuilderSizeChangeSettings.hpp"

namespace GlobalNamespace {
    struct BuilderResizeWatch : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderResizeWatch");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetSizeLayerMaskGrow() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLayerMaskGrow"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSizeLayerMaskShrink() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLayerMaskShrink"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetCollisionDisabledPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("collisionDisabledPieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEnableDist() {
            static BNM::Field<float> _field = GetClass().GetField(O("enableDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEnableDistSq() {
            static BNM::Field<float> _field = GetClass().GetField(O("enableDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeldButton* GetEnlargeButton() {
            static BNM::Field<::GlobalNamespace::HeldButton*> _field = GetClass().GetField(O("enlargeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetFxForLayerChange() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxForLayerChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrowDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("growDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings GetGrowSettings() {
            static BNM::Field<::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings> _field = GetClass().GetField(O("growSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetOwnerRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HeldButton* GetShrinkButton() {
            static BNM::Field<::GlobalNamespace::HeldButton*> _field = GetClass().GetField(O("shrinkButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings GetShrinkSettings() {
            static BNM::Field<::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings> _field = GetClass().GetField(O("shrinkSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeManager* GetSizeManager() {
            static BNM::Field<::GlobalNamespace::SizeManager*> _field = GetClass().GetField(O("sizeManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetTempDisableColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("tempDisableColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeToCheckCollision() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToCheckCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdateCollision() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollisionDisabledPieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("collisionDisabledPieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableDist(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("enableDist"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableDistSq(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("enableDistSq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnlargeButton(::GlobalNamespace::HeldButton* value) {
            static BNM::Field<::GlobalNamespace::HeldButton*> _field = GetClass().GetField(O("enlargeButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFxForLayerChange(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("fxForLayerChange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrowDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("growDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrowSettings(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings value) {
            static BNM::Field<::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings> _field = GetClass().GetField(O("growSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("ownerRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShrinkButton(::GlobalNamespace::HeldButton* value) {
            static BNM::Field<::GlobalNamespace::HeldButton*> _field = GetClass().GetField(O("shrinkButton"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShrinkSettings(::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings value) {
            static BNM::Field<::GlobalNamespace::BuilderResizeWatch_BuilderSizeChangeSettings> _field = GetClass().GetField(O("shrinkSettings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSizeManager(::GlobalNamespace::SizeManager* value) {
            static BNM::Field<::GlobalNamespace::SizeManager*> _field = GetClass().GetField(O("sizeManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempDisableColliders(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("tempDisableColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeToCheckCollision(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeToCheckCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateCollision(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updateCollision"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void DisableCollisionWithPieces() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DisableCollisionWithPieces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EnableCollisionWithPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableCollisionWithPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void EnableCollisionWithPieces() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnableCollisionWithPieces"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_SizeLayerMaskGrow() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLayerMaskGrow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SizeLayerMaskShrink() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLayerMaskShrink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnlargeButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnlargeButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnShrinkButtonPressed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnShrinkButtonPressed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
