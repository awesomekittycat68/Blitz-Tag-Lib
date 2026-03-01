#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EquipmentInteractor : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EquipmentInteractor");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::EquipmentInteractor* GetInstance() {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetBodyClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _method = GetClass().GetMethod(O("get_BodyClimber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetLeftClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _method = GetClass().GetMethod(O("get_LeftClimber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetRightClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _method = GetClass().GetMethod(O("get_RightClimber"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAutoGrabLeft() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoGrabLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAutoGrabRight() {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoGrabRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetBodyClimber_f() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("bodyClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceInteractor* GetBuilderPieceInteractor() {
            static BNM::Field<::GlobalNamespace::BuilderPieceInteractor*> _field = GetClass().GetField(O("builderPieceInteractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableLeftGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableLeftGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDisableRightGrab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableRightGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabHysteresis() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabHysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabThreshold() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::EquipmentInteractor* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* GetInteractionPointsToRemove() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("interactionPointsToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRightGrabbing() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRightGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIteratingInteractionPoints() {
            static BNM::Field<bool> _field = GetClass().GetField(O("iteratingInteractionPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJustGrabbed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("justGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJustReleased() {
            static BNM::Field<bool> _field = GetClass().GetField(O("justReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetLeftClimber_f() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("leftClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetLeftHand() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftHandDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLeftHandHeldEquipment() {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandHeldEquipment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* GetOverlapInteractionPointsLeft() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("overlapInteractionPointsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* GetOverlapInteractionPointsRight() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("overlapInteractionPointsRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* GetRightClimber_f() {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("rightClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightHand() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightHandDevice() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRightHandHeldEquipment() {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandHeldEquipment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTempValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("tempValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DropZone* GetTempZone() {
            static BNM::Field<::GlobalNamespace::DropZone*> _field = GetClass().GetField(O("tempZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasLeftGrabPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasLeftGrabPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasRightGrabPressed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasRightGrabPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAutoGrabLeft(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoGrabLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAutoGrabRight(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("autoGrabRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBodyClimber(::GorillaLocomotion_Climbing::GorillaHandClimber* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("bodyClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderPieceInteractor(::GlobalNamespace::BuilderPieceInteractor* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceInteractor*> _field = GetClass().GetField(O("builderPieceInteractor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableLeftGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableLeftGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisableRightGrab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("disableRightGrab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabHysteresis(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabHysteresis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabThreshold(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabThreshold"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::EquipmentInteractor* value) {
            static BNM::Field<::GlobalNamespace::EquipmentInteractor*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetInteractionPointsToRemove(::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("interactionPointsToRemove"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRightGrabbing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRightGrabbing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIteratingInteractionPoints(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("iteratingInteractionPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJustGrabbed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("justGrabbed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJustReleased(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("justReleased"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftClimber(::GorillaLocomotion_Climbing::GorillaHandClimber* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("leftClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHand(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("leftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftHandHeldEquipment(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("leftHandHeldEquipment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapInteractionPointsLeft(::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("overlapInteractionPointsLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverlapInteractionPointsRight(::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("overlapInteractionPointsRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightClimber(::GorillaLocomotion_Climbing::GorillaHandClimber* value) {
            static BNM::Field<::GorillaLocomotion_Climbing::GorillaHandClimber*> _field = GetClass().GetField(O("rightClimber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHand(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandDevice(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandDevice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightHandHeldEquipment(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("rightHandHeldEquipment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tempValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempZone(::GlobalNamespace::DropZone* value) {
            static BNM::Field<::GlobalNamespace::DropZone*> _field = GetClass().GetField(O("tempZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasLeftGrabPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasLeftGrabPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasRightGrabPressed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("wasRightGrabPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanGrabLeft() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanGrabLeft"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool CanGrabRight() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanGrabRight"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void CheckInputValue(bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckInputValue"), {"isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand);
        }
        void FireHandInteractions(::GameObject* interactingHand, bool isLeftHand, ::GlobalNamespace::BuilderPiece* pieceInHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FireHandInteractions"), {"interactingHand", "isLeftHand", "pieceInHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(interactingHand, isLeftHand, pieceInHand);
        }
        void ForceDropAnyEquipment() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceDropAnyEquipment"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void ForceDropEquipment(TP0 equipment) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceDropEquipment"), {"equipment"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(equipment);
        }
        void ForceDropManipulatableObject(::GlobalNamespace::HoldableObject* manipulatableObject) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceDropManipulatableObject"), {"manipulatableObject"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(manipulatableObject);
        }
        void ForceStopClimbing() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ForceStopClimbing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* get_BodyClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _m = GetClass().GetMethod(O("get_BodyClimber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* get_LeftClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _m = GetClass().GetMethod(O("get_LeftClimber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaLocomotion_Climbing::GorillaHandClimber* get_RightClimber() {
            static BNM::Method<::GorillaLocomotion_Climbing::GorillaHandClimber*> _m = GetClass().GetMethod(O("get_RightClimber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        bool GetIsHolding(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("GetIsHolding"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        void InteractionPointDisabled(::GlobalNamespace::InteractionPoint* interactionPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InteractionPointDisabled"), {"interactionPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(interactionPoint);
        }
        template <typename TP0 = void*>
        bool IsGrabDisabled(TP0 node) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsGrabDisabled"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(node);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReleaseLeftHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseLeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReleaseRightHand() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReleaseRightHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void UpdateHandEquipment(TP0 newEquipment, bool forLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateHandEquipment"), {"newEquipment", "forLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newEquipment, forLeftHand);
        }
    };
}
