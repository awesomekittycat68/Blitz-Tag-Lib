#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPiece_State.hpp"
#include "PieceFallbackInfo.hpp"

namespace GlobalNamespace {
    struct BuilderPiece : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderPiece");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int INVALID = -1;
        static constexpr float LIGHT_MASS = 1.0f;
        static constexpr float HEAVY_MASS = 10000.0f;
        int GetActivatedTimeStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("activatedTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAreMeshesToggledOnPlace() {
            static BNM::Field<bool> _field = GetClass().GetField(O("areMeshesToggledOnPlace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderArmShelf* GetArmShelf() {
            static BNM::Field<::GlobalNamespace::BuilderArmShelf*> _field = GetClass().GetField(O("armShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetAttachIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("attachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAttachPlayerToPiece() {
            static BNM::Field<bool> _field = GetClass().GetField(O("attachPlayerToPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCollidersEntered() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collidersEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCollisionEnterCooldown() {
            static BNM::Field<float> _field = GetClass().GetField(O("collisionEnterCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetCollisionEnterHistory() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("collisionEnterHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCollisionEnterLimit() {
            static BNM::Field<int> _field = GetClass().GetField(O("collisionEnterLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResources* GetCost() {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("cost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentColliderLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentColliderLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDesiredShelfOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("desiredShelfOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetDesiredShelfRotationOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("desiredShelfRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PieceFallbackInfo GetFallbackInfo() {
            static BNM::Field<::GlobalNamespace::PieceFallbackInfo> _field = GetClass().GetField(O("fallbackInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetFirstChildPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("firstChildPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetForcedFrozen() {
            static BNM::Field<bool> _field = GetClass().GetField(O("forcedFrozen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetFunctionalPieceComponent() {
            static BNM::Field<void*> _field = GetClass().GetField(O("functionalPieceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetFunctionalPieceState() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("functionalPieceState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPieceEffectInfo* GetFXInfo() {
            static BNM::Field<::GlobalNamespace::BuilderPieceEffectInfo*> _field = GetClass().GetField(O("fXInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* GetGridPlanes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>*> _field = GetClass().GetField(O("gridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeldByPlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("heldByPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHeldInLeftHand() {
            static BNM::Field<bool> _field = GetClass().GetField(O("heldInLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsArmShelf() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isArmShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBuiltIntoTable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuiltIntoTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsPrivatePlot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrivatePlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsStatic() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStatic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetListeningToHandLinks() {
            static BNM::Field<bool> _field = GetClass().GetField(O("listeningToHandLinks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderMaterialOptions* GetMaterialOptions() {
            static BNM::Field<::GlobalNamespace::BuilderMaterialOptions*> _field = GetClass().GetField(O("materialOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MeshRenderer*>* GetMaterialSwapTargets() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("materialSwapTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaterialType() {
            static BNM::Field<int> _field = GetClass().GetField(O("materialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetNextSiblingPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("nextSiblingPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOldCollisionTimeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("oldCollisionTimeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetOnlyWhenNotPlaced() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("onlyWhenNotPlaced"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetOnlyWhenPlaced() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("onlyWhenPlaced"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Behaviour*>* GetOnlyWhenPlacedBehaviours() {
            static BNM::Field<::BNM::Structures::Mono::List<::Behaviour*>*> _field = GetClass().GetField(O("onlyWhenPlacedBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideSavedPiece() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSavedPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPaintingCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("paintingCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetParentAttachIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("parentAttachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentHeld() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetParentPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("parentPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetPieceComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("pieceComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPieceComponentsActive() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pieceComponentsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPieceDataIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceDataIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetPieceFunctionComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("pieceFunctionComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPieceId() {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPieceScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("pieceScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPieceType() {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetPlacedOnlyColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("placedOnlyColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiecePrivatePlot* GetPlotComponent() {
            static BNM::Field<::GlobalNamespace::BuilderPiecePrivatePlot*> _field = GetClass().GetField(O("plotComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPotentialGrabChildCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("potentialGrabChildCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPotentialGrabCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("potentialGrabCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreventSnapUntilMoved() {
            static BNM::Field<int> _field = GetClass().GetField(O("preventSnapUntilMoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPreventSnapUntilMovedFromPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("preventSnapUntilMovedFromPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrivatePlotIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("privatePlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MeshRenderer*>* GetRenderingDirect() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("renderingDirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MeshRenderer*>* GetRenderingIndirect() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("renderingIndirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetRenderingIndirectTransformIndex() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("renderingIndirectTransformIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetRequestedParentPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("requestedParentPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidBody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSavedMaterialType() {
            static BNM::Field<int> _field = GetClass().GetField(O("savedMaterialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSavedPieceType() {
            static BNM::Field<int> _field = GetClass().GetField(O("savedPieceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetScaleRoot() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("scaleRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetShelfOwner() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece_State GetState() {
            static BNM::Field<::GlobalNamespace::BuilderPiece_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSuppressMaterialWarnings() {
            static BNM::Field<bool> _field = GetClass().GetField(O("suppressMaterialWarnings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaSurfaceOverride*>* GetSurfaceOverrides() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaSurfaceOverride*>*> _field = GetClass().GetField(O("surfaceOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable* GetTableOwner() {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("tableOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::MeshRenderer*>* GetTempRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("tempRenderers"));
            return _field.Get();
        }
        float GetTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("tint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActivatedTimeStamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("activatedTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAreMeshesToggledOnPlace(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("areMeshesToggledOnPlace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetArmShelf(::GlobalNamespace::BuilderArmShelf* value) {
            static BNM::Field<::GlobalNamespace::BuilderArmShelf*> _field = GetClass().GetField(O("armShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAttachPlayerToPiece(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("attachPlayerToPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersEntered(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collidersEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionEnterCooldown(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("collisionEnterCooldown"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionEnterHistory(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("collisionEnterHistory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionEnterLimit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("collisionEnterLimit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCost(::GlobalNamespace::BuilderResources* value) {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("cost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentColliderLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentColliderLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesiredShelfOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("desiredShelfOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesiredShelfRotationOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("desiredShelfRotationOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFallbackInfo(::GlobalNamespace::PieceFallbackInfo value) {
            static BNM::Field<::GlobalNamespace::PieceFallbackInfo> _field = GetClass().GetField(O("fallbackInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstChildPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("firstChildPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForcedFrozen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("forcedFrozen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionalPieceComponent(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("functionalPieceComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFunctionalPieceState(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("functionalPieceState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFXInfo(::GlobalNamespace::BuilderPieceEffectInfo* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceEffectInfo*> _field = GetClass().GetField(O("fXInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridPlanes(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>*> _field = GetClass().GetField(O("gridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldByPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heldByPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeldInLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("heldInLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsArmShelf(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isArmShelf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBuiltIntoTable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBuiltIntoTable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsPrivatePlot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isPrivatePlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsStatic(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isStatic"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetListeningToHandLinks(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("listeningToHandLinks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialOptions(::GlobalNamespace::BuilderMaterialOptions* value) {
            static BNM::Field<::GlobalNamespace::BuilderMaterialOptions*> _field = GetClass().GetField(O("materialOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialSwapTargets(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("materialSwapTargets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("materialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSiblingPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("nextSiblingPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOldCollisionTimeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("oldCollisionTimeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlyWhenNotPlaced(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("onlyWhenNotPlaced"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlyWhenPlaced(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("onlyWhenPlaced"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnlyWhenPlacedBehaviours(::BNM::Structures::Mono::List<::Behaviour*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Behaviour*>*> _field = GetClass().GetField(O("onlyWhenPlacedBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideSavedPiece(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSavedPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPaintingCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("paintingCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentAttachIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("parentAttachIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentHeld(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentHeld"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("parentPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("pieceComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceComponentsActive(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pieceComponentsActive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceDataIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceDataIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceFunctionComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("pieceFunctionComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pieceScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pieceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacedOnlyColliders(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("placedOnlyColliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlotComponent(::GlobalNamespace::BuilderPiecePrivatePlot* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiecePrivatePlot*> _field = GetClass().GetField(O("plotComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialGrabChildCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("potentialGrabChildCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialGrabCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("potentialGrabCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreventSnapUntilMoved(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("preventSnapUntilMoved"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreventSnapUntilMovedFromPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("preventSnapUntilMovedFromPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivatePlotIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("privatePlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderingDirect(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("renderingDirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderingIndirect(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("renderingIndirect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderingIndirectTransformIndex(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("renderingIndirectTransformIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestedParentPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("requestedParentPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidBody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("rigidBody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedMaterialType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("savedMaterialType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSavedPieceType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("savedPieceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleRoot(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("scaleRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfOwner(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(::GlobalNamespace::BuilderPiece_State value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece_State> _field = GetClass().GetField(O("state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuppressMaterialWarnings(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("suppressMaterialWarnings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceOverrides(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaSurfaceOverride*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaSurfaceOverride*>*> _field = GetClass().GetField(O("surfaceOverrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableOwner(::GorillaTagScripts::BuilderTable* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable*> _field = GetClass().GetField(O("tableOwner"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRenderers(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("tempRenderers"));
            _field.Set(value);
        }
        void SetTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddChildCost(::BNM::Structures::Mono::Array<int>* costArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddChildCost"), {"costArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(costArray);
        }
        void AddPieceToParent(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceToParent"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BumpTwistToPositionRotation(uint8_t twist, int8_t xOffset, int8_t zOffset, int potentialAttachIndex, ::GorillaTagScripts::BuilderAttachGridPlane* potentialParentGridPlane, ::BNM::Structures::Unity::Vector3& localPosition, ::BNM::Structures::Unity::Quaternion& localRotation, ::BNM::Structures::Unity::Vector3& worldPosition, ::BNM::Structures::Unity::Quaternion& worldRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BumpTwistToPositionRotation"), {"twist", "xOffset", "zOffset", "potentialAttachIndex", "potentialParentGridPlane", "localPosition", "localRotation", "worldPosition", "worldRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(twist, xOffset, zOffset, potentialAttachIndex, potentialParentGridPlane, &localPosition, &localRotation, &worldPosition, &worldRotation);
        }
        static bool CanPlayerAttachPieceToPiece(int playerActorNumber, ::GlobalNamespace::BuilderPiece* attachingPiece, ::GlobalNamespace::BuilderPiece* attachToPiece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerAttachPieceToPiece"), {"playerActorNumber", "attachingPiece", "attachToPiece"});
            return _m.Call(playerActorNumber, attachingPiece, attachToPiece);
        }
        bool CanPlayerGrabPiece(int actorNumber, ::BNM::Structures::Unity::Vector3 worldPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerGrabPiece"), {"actorNumber", "worldPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber, worldPosition);
        }
        void ClearCollisionHistory() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearCollisionHistory"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearParentHeld() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearParentHeld"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearParentPiece(bool ignoreSnaps) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearParentPiece"), {"ignoreSnaps"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ignoreSnaps);
        }
        void FindActiveRenderers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindActiveRenderers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::BuilderPiece* GetAttachedBuiltInPiece() {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetAttachedBuiltInPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetAttachIndex_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAttachIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::BuilderPiece* GetBuilderPieceFromCollider(::Collider* collider) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetBuilderPieceFromCollider"), {"collider"});
            return _m.Call(collider);
        }
        static ::GlobalNamespace::BuilderPiece* GetBuilderPieceFromTransform(::Transform* transform) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetBuilderPieceFromTransform"), {"transform"});
            return _m.Call(transform);
        }
        void GetChainCost(::BNM::Structures::Mono::Array<int>* costArray) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetChainCost"), {"costArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(costArray);
        }
        int GetChainCostAndCount(::BNM::Structures::Mono::Array<int>* costArray) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetChainCostAndCount"), {"costArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(costArray);
        }
        int GetChildCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetChildCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetChildCountAndCost(::BNM::Structures::Mono::Array<int>* costArray) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetChildCountAndCost"), {"costArray"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(costArray);
        }
        int GetExpectedGrabCollisionLayer() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetExpectedGrabCollisionLayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetParentAttachIndex_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetParentAttachIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetParentPieceId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetParentPieceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GetPieceBumpOffset(uint8_t twist, int8_t& xOffset, int8_t& zOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetPieceBumpOffset"), {"twist", "xOffset", "zOffset"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(twist, &xOffset, &zOffset);
        }
        int GetPieceId_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPieceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetPiecePlacement() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPiecePlacement"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t GetPieceTwist() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetPieceTwist"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPiece* GetRootPiece() {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetRootPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::BuilderTable* GetTable() {
            static BNM::Method<::GorillaTagScripts::BuilderTable*> _m = GetClass().GetMethod(O("GetTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsDroppedState(::GlobalNamespace::BuilderPiece_State state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDroppedState"), {"state"});
            return _m.Call(state);
        }
        bool IsHeldBy(int actorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldBy"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        bool IsHeldInLeftHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldInLeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsHeldLocal() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsHeldLocal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPieceMoving() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPieceMoving"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsPrivatePlot() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPrivatePlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void MakePieceRoot(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("MakePieceRoot"), {"piece"});
            _m.Call(piece);
        }
        void OnCollisionEnter(::BNM::IL2CPP::Il2CppObject* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCollisionEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnCreate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnCreatedByPool() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCreatedByPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnGrabbedAsRoot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGrabbedAsRoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPlacementDeserialized() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPlacementDeserialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReleasedAsRoot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReleasedAsRoot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnReturnToPool() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReturnToPool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PaintingTint(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PaintingTint"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        void PlayDisconnectFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayDisconnectFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayFX(::GameObject* fx) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFX"), {"fx"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fx);
        }
        void PlayGrabbedFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayGrabbedFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayLocationLockFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayLocationLockFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayPlacementFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayPlacementFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayRecycleFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayRecycleFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PlayTooHeavyFx() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayTooHeavyFx"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PotentialGrab(bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PotentialGrab"), {"enable"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enable);
        }
        static void PotentialGrabChildren(::GlobalNamespace::BuilderPiece* piece, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PotentialGrabChildren"), {"piece", "enable"});
            _m.Call(piece, enable);
        }
        void RefreshTint() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshTint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RemoveOverlapsWithDifferentPieceRoot(::GlobalNamespace::BuilderPiece* piece, ::GlobalNamespace::BuilderPiece* root, ::GorillaTagScripts::BuilderPool* pool) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveOverlapsWithDifferentPieceRoot"), {"piece", "root", "pool"});
            _m.Call(piece, root, pool);
        }
        static void RemovePieceFromParent(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromParent"), {"piece"});
            _m.Call(piece);
        }
        void SetActivateTimeStamp(int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActivateTimeStamp"), {"timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeStamp);
        }
        void SetActive(::BNM::Structures::Mono::List<::GameObject*>* gameObjects, bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetActive"), {"gameObjects", "active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gameObjects, active);
        }
        template <typename T>
        void SetBehavioursEnabled(::BNM::Structures::Mono::List<T>* components, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBehavioursEnabled"), {"components", "enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(components, enabled);
        }
        void SetChildrenCollisionLayer(int layer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetChildrenCollisionLayer"), {"layer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(layer);
        }
        void SetChildrenState(::GlobalNamespace::BuilderPiece_State newState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetChildrenState"), {"newState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, force);
        }
        template <typename T>
        void SetColliderLayers(::BNM::Structures::Mono::List<T>* components, int layer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetColliderLayers"), {"components", "layer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(components, layer);
        }
        template <typename T>
        void SetCollidersEnabled(::BNM::Structures::Mono::List<T>* components, bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCollidersEnabled"), {"components", "enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(components, enabled);
        }
        void SetDirectRenderersVisible(bool visible) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDirectRenderersVisible"), {"visible"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(visible);
        }
        void SetFunctionalPieceState_1(uint8_t fState, ::GlobalNamespace::NetPlayer* instigator, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFunctionalPieceState"), {"fState", "instigator", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fState, instigator, timeStamp);
        }
        void SetKinematic(bool kinematic, bool destroyImmediate) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetKinematic"), {"kinematic", "destroyImmediate"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(kinematic, destroyImmediate);
        }
        void SetMaterial(int inMaterialType, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaterial"), {"inMaterialType", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inMaterialType, force);
        }
        void SetParentHeld_1(::Transform* parentHeld, int heldByPlayerActorNumber, bool heldInLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParentHeld"), {"parentHeld", "heldByPlayerActorNumber", "heldInLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parentHeld, heldByPlayerActorNumber, heldInLeftHand);
        }
        void SetParentPiece_1(int newAttachIndex, ::GlobalNamespace::BuilderPiece* newParentPiece, int newParentAttachIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetParentPiece"), {"newAttachIndex", "newParentPiece", "newParentAttachIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newAttachIndex, newParentPiece, newParentAttachIndex);
        }
        void SetPieceActive(::BNM::Structures::Mono::List<void*>* components, bool active) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPieceActive"), {"components", "active"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(components, active);
        }
        void SetScale(float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScale"), {"scale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scale);
        }
        void SetState_1(::GlobalNamespace::BuilderPiece_State newState, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"newState", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState, force);
        }
        void SetStatic(bool isStatic, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetStatic"), {"isStatic", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isStatic, force);
        }
        void SetTable(::GorillaTagScripts::BuilderTable* table) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTable"), {"table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(table);
        }
        void SetTint_1(float tint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTint"), {"tint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tint);
        }
        void SetupPiece(float gridSize) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupPiece"), {"gridSize"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gridSize);
        }
        bool TryGetPlotComponent(::GlobalNamespace::BuilderPiecePrivatePlot*& plot) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetPlotComponent"), {"plot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&plot);
        }
        ::BNM::Structures::Unity::Quaternion TwistToLocalRotation(uint8_t twist, int potentialAttachIndex) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("TwistToLocalRotation"), {"twist", "potentialAttachIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(twist, potentialAttachIndex);
        }
        void UpdateGrabbedPieceCollisionLayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateGrabbedPieceCollisionLayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
