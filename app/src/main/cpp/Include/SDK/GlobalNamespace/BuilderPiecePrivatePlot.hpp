#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderPiecePrivatePlot_PlotState.hpp"

namespace GlobalNamespace {
    struct BuilderPiecePrivatePlot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderPiecePrivatePlot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetAttachedPieceCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("attachedPieceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::MeshRenderer*>* GetBorderMeshes() {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("borderMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetBuildArea() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("buildArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBuildAreaBounds() {
            static BNM::Field<void*> _field = GetClass().GetField(O("buildAreaBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDoesLocalPlayerOwnAPlot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("doesLocalPlayerOwnAPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInBuilderZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitDone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("initDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftOverPlot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftOverPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsRightOverPlot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRightOverPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetLeftPotentialParent() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("leftPotentialParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMaterialProps() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("materialProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetOverCapacityColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("overCapacityColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOwningPlayerActorNumber() {
            static BNM::Field<int> _field = GetClass().GetField(O("owningPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("piece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPiecesToCount() {
            static BNM::Field<void*> _field = GetClass().GetField(O("piecesToCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetPlacementAllowedColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("placementAllowedColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Color GetPlacementDisallowedColor() {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("placementDisallowedColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetPlotClaimedFX() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("plotClaimedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState GetPlotState() {
            static BNM::Field<::GlobalNamespace::BuilderPiecePrivatePlot_PlotState> _field = GetClass().GetField(O("plotState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrivatePlotIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("privatePlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>* GetResourceMeters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>*> _field = GetClass().GetField(O("resourceMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetRightPotentialParent() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("rightPotentialParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetTempResourceCount() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("tempResourceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetTmpLabel() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetUsedResources() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("usedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Renderer*>* GetZoneRenderers() {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("zoneRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachedPieceCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("attachedPieceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBorderMeshes(::BNM::Structures::Mono::List<::MeshRenderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::MeshRenderer*>*> _field = GetClass().GetField(O("borderMeshes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildArea(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("buildArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildAreaBounds(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("buildAreaBounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoesLocalPlayerOwnAPlot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("doesLocalPlayerOwnAPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInBuilderZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitDone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("initDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftOverPlot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isLeftOverPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsRightOverPlot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isRightOverPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftPotentialParent(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("leftPotentialParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialProps(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("materialProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverCapacityColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("overCapacityColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwningPlayerActorNumber(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("owningPlayerActorNumber"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("piece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiecesToCount(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("piecesToCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementAllowedColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("placementAllowedColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlacementDisallowedColor(::BNM::Structures::Unity::Color value) {
            static BNM::Field<::BNM::Structures::Unity::Color> _field = GetClass().GetField(O("placementDisallowedColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlotClaimedFX(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("plotClaimedFX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlotState(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState value) {
            static BNM::Field<::GlobalNamespace::BuilderPiecePrivatePlot_PlotState> _field = GetClass().GetField(O("plotState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivatePlotIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("privatePlotIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceMeters(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>*> _field = GetClass().GetField(O("resourceMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightPotentialParent(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("rightPotentialParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempResourceCount(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("tempResourceCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTmpLabel(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("tmpLabel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsedResources(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("usedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetZoneRenderers(::BNM::Structures::Mono::List<::Renderer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Renderer*>*> _field = GetClass().GetField(O("zoneRenderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddChainResourcesToCount(::GlobalNamespace::BuilderPiece* chain, bool attach) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddChainResourcesToCount"), {"chain", "attach"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(chain, attach);
        }
        bool AddPieceCostToArray(::GlobalNamespace::BuilderPiece* addedPiece, ::BNM::Structures::Mono::Array<int>* array) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AddPieceCostToArray"), {"addedPiece", "array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(addedPiece, array);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool CanPlayerAttachToPlot(int actorNumber) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerAttachToPlot"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        bool CanPlayerGrabFromPlot(int actorNumber, ::BNM::Structures::Unity::Vector3 worldPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPlayerGrabFromPlot"), {"actorNumber", "worldPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber, worldPosition);
        }
        void ChangeAttachedPieceCount(int delta) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeAttachedPieceCount"), {"delta"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delta);
        }
        void ClaimPlotForPlayerNumber(int player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClaimPlotForPlayerNumber"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void ClearPlot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearPlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FreePlot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FreePlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int GetOwnerActorNumber() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetOwnerActorNumber"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsChainUnderCapacity(::GlobalNamespace::BuilderPiece* chain) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsChainUnderCapacity"), {"chain"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(chain);
        }
        bool IsLocationWithinPlotExtents(::BNM::Structures::Unity::Vector3 worldPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocationWithinPlotExtents"), {"worldPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPosition);
        }
        bool IsPlotClaimed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlotClaimed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnAvailableResourceChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAvailableResourceChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnLocalPlayerClaimedPlot(bool claim) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnLocalPlayerClaimedPlot"), {"claim"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(claim);
        }
        void OnPieceAttachedToPlot(::GlobalNamespace::BuilderPiece* attachPiece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceAttachedToPlot"), {"attachPiece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(attachPiece);
        }
        void OnPieceDetachedFromPlot(::GlobalNamespace::BuilderPiece* detachPiece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDetachedFromPlot"), {"detachPiece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(detachPiece);
        }
        void OnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RecountPlotCost() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecountPlotCost"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetBorderColor(::BNM::Structures::Unity::Color color) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBorderColor"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(color);
        }
        void SetPlotState_1(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPlotState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePlot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateVisuals() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisuals"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateVisualsForOwner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVisualsForOwner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
