#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/BuilderAction.hpp"
#include "../GlobalNamespace/BuilderPiece_State.hpp"
#include "../GlobalNamespace/BuilderResourceQuantity.hpp"
#include "../GlobalNamespace/BuilderResourceType.hpp"
#include "../GlobalNamespace/GTZone.hpp"
#include "BuilderGridPlaneData.hpp"
#include "BuilderPieceData.hpp"
#include "BuilderPlacementStyle.hpp"
#include "BuilderPotentialPlacement.hpp"
#include "BuilderTable_BoxCheckParams.hpp"
#include "BuilderTable_BuilderCommand.hpp"
#include "BuilderTable_DroppedPieceData.hpp"
#include "BuilderTable_SnapOverlapKey.hpp"
#include "BuilderTable_SnapParams.hpp"
#include "BuilderTable_TableState.hpp"
#include "../GorillaTagScripts_Builder/SharedBlocksManager_StartingMapConfig.hpp"

namespace GorillaTagScripts {
    struct BuilderTable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderTable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr ::GlobalNamespace::GTZone BUILDER_ZONE = (::GlobalNamespace::GTZone)18;
        static constexpr int INITIAL_BUILTIN_PIECE_ID = 5;
        static constexpr int INITIAL_CREATED_PIECE_ID = 10000;
        static constexpr float MAX_DISTANCE_FROM_CENTER = 217.0f;
        static constexpr float MAX_LOCAL_MAGNITUDE = 80.0f;
        static constexpr float MAX_DISTANCE_FROM_HAND = 2.5f;
        static constexpr int MAX_SPHERE_CHECK_RESULTS = 1024;
        static constexpr int MAX_PIECE_DATA = 2560;
        static constexpr int MAX_GRID_PLANE_DATA = 10240;
        static constexpr int MAX_PRIVATE_PLOT_DATA = 64;
        static constexpr int MAX_PLAYER_DATA = 64;
        int GetCurrentSaveSlot() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CurrentSaveSlot"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentSaveSlot(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CurrentSaveSlot"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetGridSize() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_gridSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
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
        float GetAcceptableSqrDistFromCenter() {
            static BNM::Field<float> _field = GetClass().GetField(O("acceptableSqrDistFromCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetActiveFunctionalComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("activeFunctionalComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetAllPiecesMask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("allPiecesMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* GetAllPotentialPlacements() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>*> _field = GetClass().GetField(O("allPotentialPlacements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiecePrivatePlot*>* GetAllPrivatePlots() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiecePrivatePlot*>*> _field = GetClass().GetField(O("allPrivatePlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetAllShelvesRoot() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("allShelvesRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetArmShelfPieceType() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("armShelfPieceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* GetBaseGridPlanes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>*> _field = GetClass().GetField(O("baseGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetBasePieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("basePieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTableNetworking* GetBuilderNetworking() {
            static BNM::Field<::GorillaTagScripts::BuilderTableNetworking*> _field = GetClass().GetField(O("builderNetworking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetBuilderPiecesVisited() {
            static BNM::Field<void*> _field = GetClass().GetField(O("builderPiecesVisited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderPool* GetBuilderPool() {
            static BNM::Field<::GorillaTagScripts::BuilderPool*> _field = GetClass().GetField(O("builderPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderRenderer* GetBuilderRenderer() {
            static BNM::Field<::GlobalNamespace::BuilderRenderer*> _field = GetClass().GetField(O("builderRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>* GetBuildPieceSpawns() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*> _field = GetClass().GetField(O("buildPieceSpawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetBuiltInPieceRoots() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("builtInPieceRoots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderOptionButton* GetButtonClearLayout() {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonClearLayout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderOptionButton* GetButtonSaveLayout() {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonSaveLayout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderOptionButton* GetButtonSnapPosition() {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonSnapPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderOptionButton* GetButtonSnapRotation() {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonSnapRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCheckGridPlaneData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkGridPlaneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetChildPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("childPieces"));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderConveyorManager* GetConveyorManager() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderConveyorManager*> _field = GetClass().GetField(O("conveyorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>* GetConveyors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>*> _field = GetClass().GetField(O("conveyors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSaveSlot_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSaveSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable_SnapParams GetCurrSnapParams() {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("currSnapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDefaultTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>* GetDispenserShelves() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>*> _field = GetClass().GetField(O("dispenserShelves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDoesLocalPlayerOwnPlot() {
            static BNM::Field<bool> _field = GetClass().GetField(O("doesLocalPlayerOwnPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetDROPZONEREPEL() {
            static BNM::Field<float> _field = GetClass().GetField(O("DROP_ZONE_REPEL"));
            return _field.Get();
        }
        static int GetDROPPEDPIECELIMIT() {
            static BNM::Field<int> _field = GetClass().GetField(O("DROPPED_PIECE_LIMIT"));
            return _field.Get();
        }
        static int GetDroppedLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("droppedLayer"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_DroppedPieceData>* GetDroppedPieceData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_DroppedPieceData>*> _field = GetClass().GetField(O("droppedPieceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetDroppedPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("droppedPieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDroppedTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("droppedTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetDropZoneRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dropZoneRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDropZone*>* GetDropZones() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDropZone*>*> _field = GetClass().GetField(O("dropZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFetchConfigurationAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchConfigurationAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetFixedUpdateFunctionalComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("fixedUpdateFunctionalComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetFuncComponentsToRegister() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToRegister"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetFuncComponentsToRegisterFixed() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToRegisterFixed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetFuncComponentsToUnregister() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToUnregister"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetFuncComponentsToUnregisterFixed() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToUnregisterFixed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGetStartingMapInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("getStartingMapInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGrabbedTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetGridPlaneData() {
            static BNM::Field<void*> _field = GetClass().GetField(O("gridPlaneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasCachedTopMaps() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCachedTopMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasRequestedConfig() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRequestedConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasStartingMap() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasStartingMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetHeldLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("heldLayer"));
            return _field.Get();
        }
        static int GetHeldLayerLocal() {
            static BNM::Field<int> _field = GetClass().GetField(O("heldLayerLocal"));
            return _field.Get();
        }
        bool GetInBuilderZone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInRoom() {
            static BNM::Field<bool> _field = GetClass().GetField(O("inRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSetup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsTableMutable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTableMutable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetLastGetTopMapsTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("lastGetTopMapsTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksTerminal* GetLinkedTerminal() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal*> _field = GetClass().GetField(O("linkedTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<char>* GetMapIDBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("mapIDBuffer"));
            return _field.Get();
        }
        static float GetMAXDROPANGVELOCITY() {
            static BNM::Field<float> _field = GetClass().GetField(O("MAX_DROP_ANG_VELOCITY"));
            return _field.Get();
        }
        static float GetMAXDROPVELOCITY() {
            static BNM::Field<float> _field = GetClass().GetField(O("MAX_DROP_VELOCITY"));
            return _field.Get();
        }
        int GetMaxPlacementChildDepth() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlacementChildDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetMaxResources() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("maxResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRetries() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNearbyPiecesCommands() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nearbyPiecesCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNearbyPiecesResults() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nearbyPiecesResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNextPieceId() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPieceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetNextUpdateOverride() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nextUpdateOverride"));
            return _field.Get();
        }
        ::GameObject* GetNoBlocksArea() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noBlocksArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BoxCheckParams>* GetNoBlocksAreas() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BoxCheckParams>*> _field = GetClass().GetField(O("noBlocksAreas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Collider*>* GetNoBlocksCheckResults() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("noBlocksCheckResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnLocalPlayerClaimedPlot() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnLocalPlayerClaimedPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnMapCleared() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMapCleared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnMapLoaded() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnMapLoadFailed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoadFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnSaveDirtyChanged() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSaveDirtyChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnSaveFailure() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSaveFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnSaveSuccess() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnSaveSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnSaveTimeUpdated() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnSaveTimeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTableConfigurationUpdated() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTableConfigurationUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetOverlapOtherPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("overlapOtherPieces"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int64_t>* GetOverlapPacked() {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("overlapPacked"));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable_SnapParams GetOverlapParams() {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("overlapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetOverlapPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("overlapPieces"));
            return _field.Get();
        }
        float GetPaintingTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("paintingTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPendingMapID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pendingMapID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::String* GetPersonalBuildKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("personalBuildKey"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPieceIDToIndexCache() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pieceIDToIndexCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("pieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPieceScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("pieceScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetPlacedLayer() {
            static BNM::Field<int> _field = GetClass().GetField(O("placedLayer"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetPlayersInBuilder() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playersInBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPlayerToArmShelfLeft() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("playerToArmShelfLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPlayerToArmShelfRight() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("playerToArmShelfRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetPlotMaxResources() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("plotMaxResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPlotOwners() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("plotOwners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPotentialGrabTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("potentialGrabTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable_SnapParams GetPushAndEaseParams() {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("pushAndEaseParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* GetQueuedBuildCommands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("queuedBuildCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetRecyclerRoot() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("recyclerRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>* GetRecyclers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>*> _field = GetClass().GetField(O("recyclers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRepelHistoryIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("repelHistoryIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRepelHistoryLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("repelHistoryLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetRepelledPieceRoots() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("repelledPieceRoots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetReservedResources() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("reservedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>* GetResourceMeters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>*> _field = GetClass().GetField(O("resourceMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResources* GetResourcesPerPrivatePlot() {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("resourcesPerPrivatePlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderAction>* GetRollBackActions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderAction>*> _field = GetClass().GetField(O("rollBackActions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* GetRollBackBufferedCommands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("rollBackBufferedCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* GetRollForwardCommands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("rollForwardCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetRoomCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("roomCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetRootPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("rootPieces"));
            return _field.Get();
        }
        bool GetSaveInProgress() {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* GetSharedBlocksMap() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("sharedBlocksMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetSharedBuildArea() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sharedBuildArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BoxCollider*>* GetSharedBuildAreas() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoxCollider*>*> _field = GetClass().GetField(O("sharedBuildAreas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSharedMapConfigTitleDataKey() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SharedMapConfigTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetSHELFSLICEBUCKETS() {
            static BNM::Field<int> _field = GetClass().GetField(O("SHELF_SLICE_BUCKETS"));
            return _field.Get();
        }
        int GetShelfSliceUpdateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfSliceUpdateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetShelfTint() {
            static BNM::Field<float> _field = GetClass().GetField(O("shelfTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf*>* GetShelves() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf*>*> _field = GetClass().GetField(O("shelves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetShelvesRoot() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shelvesRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int64_t, int>* GetSnapOverlapSanity() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, int>*> _field = GetClass().GetField(O("snapOverlapSanity"));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* GetStartingMap() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("startingMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetStartingMapCacheTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("startingMapCacheTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig GetStartingMapConfig() {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig> _field = GetClass().GetField(O("startingMapConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* GetStartingMapList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("startingMapList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetTableCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tableCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTableData* GetTableData() {
            static BNM::Field<::GorillaTagScripts::BuilderTableData*> _field = GetClass().GetField(O("tableData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderTable_TableState GetTableState() {
            static BNM::Field<::GorillaTagScripts::BuilderTable_TableState> _field = GetClass().GetField(O("tableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GTZone GetTableZone() {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("tableZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTempAttachIndexes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempAttachIndexes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>* GetTempConveyors() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>*> _field = GetClass().GetField(O("tempConveyors"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetTempDeletePieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("tempDeletePieces"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>* GetTempDispensers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>*> _field = GetClass().GetField(O("tempDispensers"));
            return _field.Get();
        }
        static void* GetTempDuplicateOverlaps() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tempDuplicateOverlaps"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<bool>* GetTempInLeftHand() {
            static BNM::Field<::BNM::Structures::Mono::List<bool>*> _field = GetClass().GetField(O("tempInLeftHand"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTempParentActorNumbers() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempParentActorNumbers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTempParentAttachIndexes() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempParentAttachIndexes"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTempParentPeiceIds() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempParentPeiceIds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTempPeiceIds() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempPeiceIds"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<int>* GetTempPiecePlacement() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempPiecePlacement"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* GetTempPieces() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("tempPieces"));
            return _field.Get();
        }
        static void* GetTempPieceSet() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tempPieceSet"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>* GetTempRecyclers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>*> _field = GetClass().GetField(O("tempRecyclers"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* GetTempRollForwardCommands() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("tempRollForwardCommands"));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResources* GetTotalReservedResources() {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("totalReservedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderResources* GetTotalResources() {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("totalResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetUsedResources() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("usedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderPlacementStyle GetUsePlacementStyle() {
            static BNM::Field<::GorillaTagScripts::BuilderPlacementStyle> _field = GetClass().GetField(O("usePlacementStyle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseSnapRotation() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSnapRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetWorldCenter() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("worldCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GorillaTagScripts::BuilderTable*>* GetZoneToInstance() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GorillaTagScripts::BuilderTable*>*> _field = GetClass().GetField(O("zoneToInstance"));
            return _field.Get();
        }
        void SetAcceptableSqrDistFromCenter(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("acceptableSqrDistFromCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetActiveFunctionalComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("activeFunctionalComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllPiecesMask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("allPiecesMask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllPotentialPlacements(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>*> _field = GetClass().GetField(O("allPotentialPlacements"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllPrivatePlots(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiecePrivatePlot*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiecePrivatePlot*>*> _field = GetClass().GetField(O("allPrivatePlots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllShelvesRoot(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("allShelvesRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetArmShelfPieceType(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("armShelfPieceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseGridPlanes(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>*> _field = GetClass().GetField(O("baseGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBasePieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("basePieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderNetworking(::GorillaTagScripts::BuilderTableNetworking* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTableNetworking*> _field = GetClass().GetField(O("builderNetworking"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderPiecesVisited(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("builderPiecesVisited"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderPool(::GorillaTagScripts::BuilderPool* value) {
            static BNM::Field<::GorillaTagScripts::BuilderPool*> _field = GetClass().GetField(O("builderPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuilderRenderer(::GlobalNamespace::BuilderRenderer* value) {
            static BNM::Field<::GlobalNamespace::BuilderRenderer*> _field = GetClass().GetField(O("builderRenderer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuildPieceSpawns(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*> _field = GetClass().GetField(O("buildPieceSpawns"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBuiltInPieceRoots(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("builtInPieceRoots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonClearLayout(::GorillaTagScripts::BuilderOptionButton* value) {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonClearLayout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonSaveLayout(::GorillaTagScripts::BuilderOptionButton* value) {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonSaveLayout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonSnapPosition(::GorillaTagScripts::BuilderOptionButton* value) {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonSnapPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetButtonSnapRotation(::GorillaTagScripts::BuilderOptionButton* value) {
            static BNM::Field<::GorillaTagScripts::BuilderOptionButton*> _field = GetClass().GetField(O("buttonSnapRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckGridPlaneData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkGridPlaneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetChildPieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("childPieces"));
            _field.Set(value);
        }
        void SetConveyorManager(::GorillaTagScripts_Builder::BuilderConveyorManager* value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderConveyorManager*> _field = GetClass().GetField(O("conveyorManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConveyors(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>*> _field = GetClass().GetField(O("conveyors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSaveSlot_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSaveSlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrSnapParams(::GorillaTagScripts::BuilderTable_SnapParams value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("currSnapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDefaultTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("defaultTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserShelves(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>*> _field = GetClass().GetField(O("dispenserShelves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoesLocalPlayerOwnPlot(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("doesLocalPlayerOwnPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetDROPZONEREPEL(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("DROP_ZONE_REPEL"));
            _field.Set(value);
        }
        static void SetDROPPEDPIECELIMIT(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("DROPPED_PIECE_LIMIT"));
            _field.Set(value);
        }
        static void SetDroppedLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("droppedLayer"));
            _field.Set(value);
        }
        void SetDroppedPieceData(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_DroppedPieceData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_DroppedPieceData>*> _field = GetClass().GetField(O("droppedPieceData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDroppedPieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("droppedPieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDroppedTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("droppedTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropZoneRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("dropZoneRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDropZones(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDropZone*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDropZone*>*> _field = GetClass().GetField(O("dropZones"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFetchConfigurationAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fetchConfigurationAttempts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFixedUpdateFunctionalComponents(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("fixedUpdateFunctionalComponents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuncComponentsToRegister(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToRegister"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuncComponentsToRegisterFixed(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToRegisterFixed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuncComponentsToUnregister(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToUnregister"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFuncComponentsToUnregisterFixed(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("funcComponentsToUnregisterFixed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetStartingMapInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("getStartingMapInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGrabbedTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("grabbedTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGridPlaneData(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("gridPlaneData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasCachedTopMaps(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasCachedTopMaps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasRequestedConfig(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasRequestedConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasStartingMap(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasStartingMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHeldLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heldLayer"));
            _field.Set(value);
        }
        static void SetHeldLayerLocal(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heldLayerLocal"));
            _field.Set(value);
        }
        void SetInBuilderZone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inBuilderZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInRoom(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("inRoom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSetup(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsTableMutable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isTableMutable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastGetTopMapsTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("lastGetTopMapsTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLinkedTerminal(::GorillaTagScripts_Builder::SharedBlocksTerminal* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksTerminal*> _field = GetClass().GetField(O("linkedTerminal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetMapIDBuffer(::BNM::Structures::Mono::Array<char>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<char>*> _field = GetClass().GetField(O("mapIDBuffer"));
            _field.Set(value);
        }
        static void SetMAXDROPANGVELOCITY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MAX_DROP_ANG_VELOCITY"));
            _field.Set(value);
        }
        static void SetMAXDROPVELOCITY(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("MAX_DROP_VELOCITY"));
            _field.Set(value);
        }
        void SetMaxPlacementChildDepth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxPlacementChildDepth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxResources(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("maxResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRetries(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRetries"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNearbyPiecesCommands(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nearbyPiecesCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNearbyPiecesResults(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nearbyPiecesResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPieceId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPieceId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNextUpdateOverride(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("nextUpdateOverride"));
            _field.Set(value);
        }
        void SetNoBlocksArea(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("noBlocksArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoBlocksAreas(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BoxCheckParams>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BoxCheckParams>*> _field = GetClass().GetField(O("noBlocksAreas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNoBlocksCheckResults(::BNM::Structures::Mono::Array<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("noBlocksCheckResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLocalPlayerClaimedPlot(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnLocalPlayerClaimedPlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMapCleared(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnMapCleared"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMapLoaded(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoaded"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnMapLoadFailed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnMapLoadFailed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSaveDirtyChanged(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSaveDirtyChanged"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSaveFailure(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnSaveFailure"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSaveSuccess(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnSaveSuccess"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnSaveTimeUpdated(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnSaveTimeUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTableConfigurationUpdated(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnTableConfigurationUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOverlapOtherPieces(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("overlapOtherPieces"));
            _field.Set(value);
        }
        static void SetOverlapPacked(::BNM::Structures::Mono::List<int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int64_t>*> _field = GetClass().GetField(O("overlapPacked"));
            _field.Set(value);
        }
        void SetOverlapParams(::GorillaTagScripts::BuilderTable_SnapParams value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("overlapParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetOverlapPieces(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("overlapPieces"));
            _field.Set(value);
        }
        void SetPaintingTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("paintingTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingMapID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("pendingMapID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPersonalBuildKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("personalBuildKey"));
            _field.Set(value);
        }
        void SetPieceIDToIndexCache(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("pieceIDToIndexCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("pieces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPieceScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pieceScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlacedLayer(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("placedLayer"));
            _field.Set(value);
        }
        void SetPlayersInBuilder(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("playersInBuilder"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerToArmShelfLeft(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("playerToArmShelfLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerToArmShelfRight(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("playerToArmShelfRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlotMaxResources(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("plotMaxResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlotOwners(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("plotOwners"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPotentialGrabTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("potentialGrabTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPushAndEaseParams(::GorillaTagScripts::BuilderTable_SnapParams value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable_SnapParams> _field = GetClass().GetField(O("pushAndEaseParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedBuildCommands(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("queuedBuildCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecyclerRoot(::BNM::Structures::Mono::List<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("recyclerRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRecyclers(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>*> _field = GetClass().GetField(O("recyclers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepelHistoryIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("repelHistoryIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepelHistoryLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("repelHistoryLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRepelledPieceRoots(::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("repelledPieceRoots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReservedResources(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("reservedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceMeters(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderResourceMeter*>*> _field = GetClass().GetField(O("resourceMeters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourcesPerPrivatePlot(::GlobalNamespace::BuilderResources* value) {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("resourcesPerPrivatePlot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollBackActions(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderAction>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderAction>*> _field = GetClass().GetField(O("rollBackActions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollBackBufferedCommands(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("rollBackBufferedCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRollForwardCommands(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("rollForwardCommands"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRoomCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("roomCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRootPieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("rootPieces"));
            _field.Set(value);
        }
        void SetSaveInProgress(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("saveInProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedBlocksMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("sharedBlocksMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedBuildArea(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("sharedBuildArea"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedBuildAreas(::BNM::Structures::Mono::Array<::BoxCollider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BoxCollider*>*> _field = GetClass().GetField(O("sharedBuildAreas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedMapConfigTitleDataKey(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("SharedMapConfigTitleDataKey"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSHELFSLICEBUCKETS(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("SHELF_SLICE_BUCKETS"));
            _field.Set(value);
        }
        void SetShelfSliceUpdateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("shelfSliceUpdateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelfTint(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("shelfTint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelves(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf*>*> _field = GetClass().GetField(O("shelves"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShelvesRoot(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("shelvesRoot"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSnapOverlapSanity(::BNM::Structures::Mono::Dictionary<int64_t, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int64_t, int>*> _field = GetClass().GetField(O("snapOverlapSanity"));
            _field.Set(value);
        }
        void SetStartingMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*> _field = GetClass().GetField(O("startingMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingMapCacheTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("startingMapCacheTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingMapConfig(::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig value) {
            static BNM::Field<::GorillaTagScripts_Builder::SharedBlocksManager_StartingMapConfig> _field = GetClass().GetField(O("startingMapConfig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingMapList(::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap*>*> _field = GetClass().GetField(O("startingMapList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("tableCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableData(::GorillaTagScripts::BuilderTableData* value) {
            static BNM::Field<::GorillaTagScripts::BuilderTableData*> _field = GetClass().GetField(O("tableData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableState(::GorillaTagScripts::BuilderTable_TableState value) {
            static BNM::Field<::GorillaTagScripts::BuilderTable_TableState> _field = GetClass().GetField(O("tableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableZone(::GlobalNamespace::GTZone value) {
            static BNM::Field<::GlobalNamespace::GTZone> _field = GetClass().GetField(O("tableZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempAttachIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempAttachIndexes"));
            _field.Set(value);
        }
        static void SetTempConveyors(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderConveyor*>*> _field = GetClass().GetField(O("tempConveyors"));
            _field.Set(value);
        }
        static void SetTempDeletePieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("tempDeletePieces"));
            _field.Set(value);
        }
        static void SetTempDispensers(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderDispenserShelf*>*> _field = GetClass().GetField(O("tempDispensers"));
            _field.Set(value);
        }
        static void SetTempDuplicateOverlaps(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tempDuplicateOverlaps"));
            _field.Set(value);
        }
        static void SetTempInLeftHand(::BNM::Structures::Mono::List<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<bool>*> _field = GetClass().GetField(O("tempInLeftHand"));
            _field.Set(value);
        }
        static void SetTempParentActorNumbers(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempParentActorNumbers"));
            _field.Set(value);
        }
        static void SetTempParentAttachIndexes(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempParentAttachIndexes"));
            _field.Set(value);
        }
        static void SetTempParentPeiceIds(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempParentPeiceIds"));
            _field.Set(value);
        }
        static void SetTempPeiceIds(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempPeiceIds"));
            _field.Set(value);
        }
        static void SetTempPiecePlacement(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("tempPiecePlacement"));
            _field.Set(value);
        }
        static void SetTempPieces(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*> _field = GetClass().GetField(O("tempPieces"));
            _field.Set(value);
        }
        static void SetTempPieceSet(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tempPieceSet"));
            _field.Set(value);
        }
        static void SetTempRecyclers(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderRecycler*>*> _field = GetClass().GetField(O("tempRecyclers"));
            _field.Set(value);
        }
        static void SetTempRollForwardCommands(::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderTable_BuilderCommand>*> _field = GetClass().GetField(O("tempRollForwardCommands"));
            _field.Set(value);
        }
        void SetTotalReservedResources(::GlobalNamespace::BuilderResources* value) {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("totalReservedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalResources(::GlobalNamespace::BuilderResources* value) {
            static BNM::Field<::GlobalNamespace::BuilderResources*> _field = GetClass().GetField(O("totalResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsedResources(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("usedResources"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUsePlacementStyle(::GorillaTagScripts::BuilderPlacementStyle value) {
            static BNM::Field<::GorillaTagScripts::BuilderPlacementStyle> _field = GetClass().GetField(O("usePlacementStyle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSnapRotation(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useSnapRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorldCenter(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("worldCenter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetZoneToInstance(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GorillaTagScripts::BuilderTable*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::GTZone, ::GorillaTagScripts::BuilderTable*>*> _field = GetClass().GetField(O("zoneToInstance"));
            _field.Set(value);
        }
        int AddGridPlaneData(::GorillaTagScripts::BuilderAttachGridPlane* gridPlane) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddGridPlaneData"), {"gridPlane"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gridPlane);
        }
        void AddPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        int AddPieceData(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddPieceData"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece);
        }
        void AddPieceToDropList(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPieceToDropList"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        int AddPrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot* plot) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("AddPrivatePlotData"), {"plot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(plot);
        }
        void AddQueuedCommand(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddQueuedCommand"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void AddResource(::GlobalNamespace::BuilderResourceQuantity quantity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddResource"), {"quantity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(quantity);
        }
        void AddResources(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddResources"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void AddRollbackAction(::GlobalNamespace::BuilderAction action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRollbackAction"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void AddRollbackBufferedCommand(::GorillaTagScripts::BuilderTable_BuilderCommand bufferedCmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRollbackBufferedCommand"), {"bufferedCmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bufferedCmd);
        }
        void AddRollForwardCommand(::GorillaTagScripts::BuilderTable_BuilderCommand command) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddRollForwardCommand"), {"command"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(command);
        }
        static bool AreStatesCompatibleForOverlap(::GlobalNamespace::BuilderPiece_State stateA, ::GlobalNamespace::BuilderPiece_State stateB, ::GlobalNamespace::BuilderPiece* rootA, ::GlobalNamespace::BuilderPiece* rootB) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreStatesCompatibleForOverlap"), {"stateA", "stateB", "rootA", "rootB"});
            return _m.Call(stateA, stateB, rootA, rootB);
        }
        void AttachPieceInternal(int pieceId, int attachIndex, int parentId, int parentAttachIndex, int placement) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachPieceInternal"), {"pieceId", "attachIndex", "parentId", "parentAttachIndex", "placement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, attachIndex, parentId, parentAttachIndex, placement);
        }
        void AttachPieceToActorInternal(int pieceId, int actorNumber, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AttachPieceToActorInternal"), {"pieceId", "actorNumber", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, actorNumber, isLeftHand);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildInitialTableForPlayer() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildInitialTableForPlayer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::GorillaTagScripts::BuilderTable_SnapOverlapKey BuildOverlapKey(int pieceId, int otherPieceId, int attachGridIndex, int otherAttachGridIndex) {
            static BNM::Method<::GorillaTagScripts::BuilderTable_SnapOverlapKey> _m = GetClass().GetMethod(O("BuildOverlapKey"), {"pieceId", "otherPieceId", "attachGridIndex", "otherAttachGridIndex"});
            return _m.Call(pieceId, otherPieceId, attachGridIndex, otherAttachGridIndex);
        }
        void BuildPiecesOnShelves() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildPiecesOnShelves"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BuildSelectedSharedMap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildSelectedSharedMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool BuildTableFromJson(::BNM::Structures::Mono::String* tableJson, bool fromTitleData) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("BuildTableFromJson"), {"tableJson", "fromTitleData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tableJson, fromTitleData);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        bool CalcAllPotentialPlacements(TP0 gridPlaneData, TP1 checkGridPlaneData, ::GorillaTagScripts::BuilderPotentialPlacement potentialPlacement, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* allPlacements) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CalcAllPotentialPlacements"), {"gridPlaneData", "checkGridPlaneData", "potentialPlacement", "allPlacements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gridPlaneData, checkGridPlaneData, potentialPlacement, allPlacements);
        }
        bool CanPiecesPotentiallyOverlap(::GlobalNamespace::BuilderPiece* pieceInHand, ::GlobalNamespace::BuilderPiece* rootWhenPlaced, ::GlobalNamespace::BuilderPiece_State stateWhenPlaced, ::GlobalNamespace::BuilderPiece* otherPiece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPiecesPotentiallyOverlap"), {"pieceInHand", "rootWhenPlaced", "stateWhenPlaced", "otherPiece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceInHand, rootWhenPlaced, stateWhenPlaced, otherPiece);
        }
        bool CanPiecesPotentiallySnap(::GlobalNamespace::BuilderPiece* pieceInHand, ::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CanPiecesPotentiallySnap"), {"pieceInHand", "piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceInHand, piece);
        }
        void ChangeSetSelection(int shelfID, int setID, bool isConveyor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeSetSelection"), {"shelfID", "setID", "isConveyor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfID, setID, isConveyor);
        }
        ::BNM::Coroutine::IEnumerator* CheckForNoBlocks() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckForNoBlocks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ChooseMapFromList() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChooseMapFromList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CleanUpDroppedPiece() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CleanUpDroppedPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearBuiltInPlots() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearBuiltInPlots"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearLocalArmShelf() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearLocalArmShelf"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearQueuedCommands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearQueuedCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearTable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearTableInternal() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearTableInternal"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateArmShelf(int pieceIdLeft, int pieceIdRight, int pieceType, ::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateArmShelf"), {"pieceIdLeft", "pieceIdRight", "pieceType", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceIdLeft, pieceIdRight, pieceType, player);
        }
        void CreateArmShelvesForPlayersInBuilder() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateArmShelvesForPlayersInBuilder"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateConveyorPiece(int pieceType, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType, int shelfID, int sendTimestamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateConveyorPiece"), {"pieceType", "pieceId", "position", "rotation", "materialType", "shelfID", "sendTimestamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId, position, rotation, materialType, shelfID, sendTimestamp);
        }
        void CreateData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateDispenserShelfPiece(int pieceType, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType, int shelfID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateDispenserShelfPiece"), {"pieceType", "pieceId", "position", "rotation", "materialType", "shelfID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId, position, rotation, materialType, shelfID);
        }
        void CreatePiece(int pieceType, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType, ::GlobalNamespace::BuilderPiece_State state, ::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreatePiece"), {"pieceType", "pieceId", "position", "rotation", "materialType", "state", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, pieceId, position, rotation, materialType, state, player);
        }
        int CreatePieceId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CreatePieceId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPiece* CreatePieceInternal(int newPieceType, int newPieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::GlobalNamespace::BuilderPiece_State state, int materialType, int activateTimeStamp, ::GorillaTagScripts::BuilderTable* table) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("CreatePieceInternal"), {"newPieceType", "newPieceId", "position", "rotation", "state", "materialType", "activateTimeStamp", "table"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newPieceType, newPieceId, position, rotation, state, materialType, activateTimeStamp, table);
        }
        void DeserializeTableState(::BNM::Structures::Mono::Array<uint8_t>* bytes, int numBytes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeserializeTableState"), {"bytes", "numBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bytes, numBytes);
        }
        void DestroyData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DetachPieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece* piece, int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DetachPieceForPlayerLeavingInternal"), {"piece", "playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, playerActorNumber);
        }
        bool DoesChainContainChain(::GlobalNamespace::BuilderPiece* chainARoot, ::GlobalNamespace::BuilderPiece* chainBAttachPiece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesChainContainChain"), {"chainARoot", "chainBAttachPiece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(chainARoot, chainBAttachPiece);
        }
        bool DoesChainContainPiece(::GlobalNamespace::BuilderPiece* targetPiece, ::GlobalNamespace::BuilderPiece* firstInChain, ::GlobalNamespace::BuilderPiece* nextInChain) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesChainContainPiece"), {"targetPiece", "firstInChain", "nextInChain"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(targetPiece, firstInChain, nextInChain);
        }
        bool DoesPlayerOwnPlot(int actorNum) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DoesPlayerOwnPlot"), {"actorNum"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNum);
        }
        void DropAllPiecesForPlayerLeaving(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropAllPiecesForPlayerLeaving"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber);
        }
        void DropPiece(int localCommandId, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::GlobalNamespace::NetPlayer* droppedByPlayer, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropPiece"), {"localCommandId", "pieceId", "position", "rotation", "velocity", "angVelocity", "droppedByPlayer", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, force);
        }
        void DropPieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece* piece, int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DropPieceForPlayerLeavingInternal"), {"piece", "playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, playerActorNumber);
        }
        void DumpTableConfig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DumpTableConfig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExecuteAction(::GlobalNamespace::BuilderAction action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteAction"), {"action"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(action);
        }
        void ExecuteArmShelfCreated(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteArmShelfCreated"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecuteBuildCommand(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteBuildCommand"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecuteClaimPlot(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteClaimPlot"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecuteFreePlot(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteFreePlot"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePieceCreated(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePieceCreated"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePieceDroppedWithActions(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePieceDroppedWithActions"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePieceGrabbedWithActions(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePieceGrabbedWithActions"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePiecePainted(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePiecePainted"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePiecePlacedWithActions(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePiecePlacedWithActions"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePieceRecycled(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePieceRecycled"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePieceRepelled(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePieceRepelled"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecutePlayerLeftRoom(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecutePlayerLeftRoom"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecuteRollBackActions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteRollBackActions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExecuteRollbackBufferedCommands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteRollbackBufferedCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExecuteRollForwardCommands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteRollForwardCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ExecuteSetFunctionalPieceState(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteSetFunctionalPieceState"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void ExecuteSetSelection(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ExecuteSetSelection"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd);
        }
        void FetchSharedBlocksStartingMapConfig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FetchSharedBlocksStartingMapConfig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FindAndLoadSharedBlocksMap(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindAndLoadSharedBlocksMap"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        ::GlobalNamespace::BuilderPiece* FindFirstSleepingPiece() {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("FindFirstSleepingPiece"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FindStartingMap() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindStartingMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FoundDefaultSharedBlocksMap(bool success, ::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* map) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FoundDefaultSharedBlocksMap"), {"success", "map"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success, map);
        }
        void FoundSharedBlocksMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* map) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FoundSharedBlocksMap"), {"map"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(map);
        }
        void FoundStartingMapList(bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FoundStartingMapList"), {"success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(success);
        }
        void FoundTopMapData(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* map) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FoundTopMapData"), {"map"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(map);
        }
        void FreePlotInternal(int plotPieceId, int requestingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FreePlotInternal"), {"plotPieceId", "requestingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(plotPieceId, requestingPlayer);
        }
        void FreezeDroppedPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FreezeDroppedPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        int get_CurrentSaveSlot() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CurrentSaveSlot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_gridSize() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_gridSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetAvailableResources(::GlobalNamespace::BuilderResourceType type) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetAvailableResources"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        ::BNM::Structures::Mono::String* GetCurrentMapID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentMapID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetNumQueuedCommands() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNumQueuedCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetPendingMap() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPendingMap"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPiece* GetPiece(int pieceId) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetPiece"), {"pieceId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId);
        }
        ::GlobalNamespace::BuilderPiece* GetPiecePrefab(int pieceType) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("GetPiecePrefab"), {"pieceType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceType);
        }
        int GetPrivateResourceLimitForType(int type) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPrivateResourceLimitForType"), {"type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(type);
        }
        ::BNM::Structures::Mono::String* GetSaveDataKey(int slot) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSaveDataKey"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slot);
        }
        ::BNM::Structures::Mono::String* GetSaveDataTimeKey(int slot) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSaveDataTimeKey"), {"slot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(slot);
        }
        ::BNM::Structures::Mono::String* GetSharedBlocksMapID() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSharedBlocksMapID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GorillaTagScripts::BuilderTable_TableState GetTableState_1() {
            static BNM::Method<::GorillaTagScripts::BuilderTable_TableState> _m = GetClass().GetMethod(O("GetTableState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void GrabPiece(int localCommandId, int pieceId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::GlobalNamespace::NetPlayer* grabbedByPlayer, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GrabPiece"), {"localCommandId", "pieceId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer, force);
        }
        void HandleOnZoneChanged() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleOnZoneChanged"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool HasEnoughResource(::GlobalNamespace::BuilderResourceQuantity quantity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasEnoughResource"), {"quantity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(quantity);
        }
        bool HasEnoughResources(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasEnoughResources"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece);
        }
        bool HasEnoughUnreservedResource(::GlobalNamespace::BuilderResourceQuantity quantity) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasEnoughUnreservedResource"), {"quantity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(quantity);
        }
        bool HasEnoughUnreservedResources(::GlobalNamespace::BuilderResources* resources) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasEnoughUnreservedResources"), {"resources"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(resources);
        }
        bool HasRollBackActionsForCommand(int localCommandId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasRollBackActionsForCommand"), {"localCommandId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(localCommandId);
        }
        bool HasRollForwardCommand(int localCommandId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasRollForwardCommand"), {"localCommandId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(localCommandId);
        }
        void InitIfNeeded() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitIfNeeded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsInBuilderZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInBuilderZone"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool IsLocalPlayerInBuilderZone() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocalPlayerInBuilderZone"));
            return _m.Call();
        }
        bool IsLocationWithinSharedBuildArea(::BNM::Structures::Unity::Vector3 worldPosition) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsLocationWithinSharedBuildArea"), {"worldPosition"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(worldPosition);
        }
        bool IsPlayerHandNearAction(::GlobalNamespace::NetPlayer* player, ::BNM::Structures::Unity::Vector3 worldPosition, bool isLeftHand, bool checkBothHands, float acceptableRadius) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsPlayerHandNearAction"), {"player", "worldPosition", "isLeftHand", "checkBothHands", "acceptableRadius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(player, worldPosition, isLeftHand, checkBothHands, acceptableRadius);
        }
        void LoadSharedMap(::GorillaTagScripts_Builder::SharedBlocksManager_SharedBlocksMap* map) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LoadSharedMap"), {"map"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(map);
        }
        bool NoBlocksCheck() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NoBlocksCheck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnApplicationQuit() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnApplicationQuit"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnAvailableResourcesChange() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAvailableResourcesChange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnButtonClearLayout(::GorillaTagScripts::BuilderOptionButton* button, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonClearLayout"), {"button", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeftHand);
        }
        void OnButtonFreePosition(::GorillaTagScripts::BuilderOptionButton* button, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonFreePosition"), {"button", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeftHand);
        }
        void OnButtonFreeRotation(::GorillaTagScripts::BuilderOptionButton* button, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonFreeRotation"), {"button", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeftHand);
        }
        void OnButtonSaveLayout(::GorillaTagScripts::BuilderOptionButton* button, bool isLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnButtonSaveLayout"), {"button", "isLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(button, isLeftHand);
        }
        void OnDeserializeUpdatePlots() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeserializeUpdatePlots"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void OnFetchPrivateScanComplete(int slot, bool success) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFetchPrivateScanComplete"), {"slot", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(slot, success);
        }
        void OnFinishedInitialTableBuild() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFinishedInitialTableBuild"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnFunctionalStateRequest(int pieceID, uint8_t state, ::GlobalNamespace::NetPlayer* player, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnFunctionalStateRequest"), {"pieceID", "state", "player", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, state, player, timeStamp);
        }
        void OnGetStartingMapConfigFail(::PlayFab::PlayFabError* error) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetStartingMapConfigFail"), {"error"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(error);
        }
        void OnGetStartingMapConfigSuccess(::BNM::Structures::Mono::String* result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetStartingMapConfigSuccess"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void OnGetTableConfiguration(::BNM::Structures::Mono::String* configString) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTableConfiguration"), {"configString"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(configString);
        }
        void OnGetTitleDataBuildComplete(::BNM::Structures::Mono::String* titleDataBuild) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnGetTitleDataBuildComplete"), {"titleDataBuild"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(titleDataBuild);
        }
        void OnSaveScanFailure(int scan, ::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveScanFailure"), {"scan", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scan, message);
        }
        void OnSaveScanSuccess(int scan) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnSaveScanSuccess"), {"scan"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scan);
        }
        void OnTitleDataUpdate(::BNM::Structures::Mono::String* key) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataUpdate"), {"key"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key);
        }
        static int PackPiecePlacement(uint8_t twist, int8_t xOffset, int8_t zOffset) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PackPiecePlacement"), {"twist", "xOffset", "zOffset"});
            return _m.Call(twist, xOffset, zOffset);
        }
        template <typename TP2 = void*, typename TP3 = void*>
        int64_t PackSnapInfo(int attachGridIndex, int otherAttachGridIndex, TP2 min, TP3 max) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackSnapInfo"), {"attachGridIndex", "otherAttachGridIndex", "min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(attachGridIndex, otherAttachGridIndex, min, max);
        }
        void PaintPiece(int pieceId, int materialType, ::Photon_Realtime::Player* paintingPlayer, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PaintPiece"), {"pieceId", "materialType", "paintingPlayer", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, materialType, paintingPlayer, force);
        }
        void PaintPieceInternal(int pieceId, int materialType, ::Photon_Realtime::Player* paintingPlayer, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PaintPieceInternal"), {"pieceId", "materialType", "paintingPlayer", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, materialType, paintingPlayer, force);
        }
        void ParseTableConfiguration(::BNM::Structures::Mono::String* dataRecord) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ParseTableConfiguration"), {"dataRecord"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dataRecord);
        }
        void PieceDroppedInternal(int localCommandId, int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::GlobalNamespace::NetPlayer* droppedByPlayer, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceDroppedInternal"), {"localCommandId", "pieceId", "position", "rotation", "velocity", "angVelocity", "droppedByPlayer", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, position, rotation, velocity, angVelocity, droppedByPlayer, force);
        }
        void PieceEnteredDropZone(int pieceId, ::BNM::Structures::Unity::Vector3 worldPos, ::BNM::Structures::Unity::Quaternion worldRot, int dropZoneId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceEnteredDropZone"), {"pieceId", "worldPos", "worldRot", "dropZoneId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, worldPos, worldRot, dropZoneId);
        }
        void PieceGrabbedInternal(int localCommandId, int pieceId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::GlobalNamespace::NetPlayer* grabbedByPlayer, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PieceGrabbedInternal"), {"localCommandId", "pieceId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer, force);
        }
        void PiecePlacedInternal(int localCommandId, int pieceId, int attachPieceId, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, int parentPieceId, int attachIndex, int parentAttachIndex, ::GlobalNamespace::NetPlayer* placedByPlayer, int timeStamp, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PiecePlacedInternal"), {"localCommandId", "pieceId", "attachPieceId", "bumpOffsetX", "bumpOffsetZ", "twist", "parentPieceId", "attachIndex", "parentAttachIndex", "placedByPlayer", "timeStamp", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, timeStamp, force);
        }
        void PlacePiece(int localCommandId, int pieceId, int attachPieceId, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, int parentPieceId, int attachIndex, int parentAttachIndex, ::GlobalNamespace::NetPlayer* placedByPlayer, int timeStamp, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlacePiece"), {"localCommandId", "pieceId", "attachPieceId", "bumpOffsetX", "bumpOffsetZ", "twist", "parentPieceId", "attachIndex", "parentAttachIndex", "placedByPlayer", "timeStamp", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId, pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer, timeStamp, force);
        }
        void PlayerLeftRoom(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayerLeftRoom"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber);
        }
        void PlotClaimed(int plotPieceId, ::Photon_Realtime::Player* claimingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlotClaimed"), {"plotPieceId", "claimingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(plotPieceId, claimingPlayer);
        }
        void PlotFreed(int plotPieceId, ::Photon_Realtime::Player* claimingPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlotFreed"), {"plotPieceId", "claimingPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(plotPieceId, claimingPlayer);
        }
        ::BNM::Structures::Unity::Quaternion ReadQuaternion(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("ReadQuaternion"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reader);
        }
        ::BNM::Structures::Unity::Vector3 ReadVector3(::BNM::IL2CPP::Il2CppObject* reader) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ReadVector3"), {"reader"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(reader);
        }
        void RecycleAllPiecesForPlayerLeaving(int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecycleAllPiecesForPlayerLeaving"), {"playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(playerActorNumber);
        }
        void RecyclePiece(int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, bool playFX, int recyclerID, ::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecyclePiece"), {"pieceId", "position", "rotation", "playFX", "recyclerID", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, position, rotation, playFX, recyclerID, player);
        }
        void RecyclePieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece* piece, int playerActorNumber) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecyclePieceForPlayerLeavingInternal"), {"piece", "playerActorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, playerActorNumber);
        }
        void RecyclePieceInternal(int pieceId, bool ignoreHaptics, bool playFX, int recyclerId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RecyclePieceInternal"), {"pieceId", "ignoreHaptics", "playFX", "recyclerId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, ignoreHaptics, playFX, recyclerId);
        }
        template <typename TP0 = void*>
        void RegisterFunctionalPiece(TP0 component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterFunctionalPiece"), {"component"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component);
        }
        template <typename TP0 = void*>
        void RegisterFunctionalPieceFixedUpdate(TP0 component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterFunctionalPieceFixedUpdate"), {"component"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component);
        }
        void RemoveArmShelfForPlayer(::Photon_Realtime::Player* player) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveArmShelfForPlayer"), {"player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player);
        }
        void RemoveGridPlaneData(::GorillaTagScripts::BuilderAttachGridPlane* gridPlane) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveGridPlaneData"), {"gridPlane"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gridPlane);
        }
        void RemovePiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RemovePieceData(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceData"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RemovePieceFromDropList(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePieceFromDropList"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void RemovePrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot* plot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemovePrivatePlotData"), {"plot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(plot);
        }
        void RemoveRollBackActions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRollBackActions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveRollBackActions(int localCommandId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRollBackActions"), {"localCommandId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId);
        }
        void RemoveRollForwardCommands() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRollForwardCommands"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveRollForwardCommands(int localCommandId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveRollForwardCommands"), {"localCommandId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId);
        }
        void RepelPieceTowardTable(int pieceID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RepelPieceTowardTable"), {"pieceID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID);
        }
        void RequestCreateConveyorPiece(int newPieceType, int materialType, int shelfID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreateConveyorPiece"), {"newPieceType", "materialType", "shelfID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPieceType, materialType, shelfID);
        }
        void RequestCreateDispenserShelfPiece(int pieceType, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType, int shelfID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreateDispenserShelfPiece"), {"pieceType", "position", "rotation", "materialType", "shelfID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, position, rotation, materialType, shelfID);
        }
        void RequestCreatePiece(int newPieceType, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, int materialType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestCreatePiece"), {"newPieceType", "position", "rotation", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPieceType, position, rotation, materialType);
        }
        void RequestDropPiece(::GlobalNamespace::BuilderPiece* piece, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestDropPiece"), {"piece", "position", "rotation", "velocity", "angVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, position, rotation, velocity, angVelocity);
        }
        void RequestGrabPiece(::GlobalNamespace::BuilderPiece* piece, bool isLefHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestGrabPiece"), {"piece", "isLefHand", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, isLefHand, localPosition, localRotation);
        }
        void RequestPaintPiece(int pieceId, int materialType) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPaintPiece"), {"pieceId", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceId, materialType);
        }
        void RequestPlacePiece(::GlobalNamespace::BuilderPiece* piece, ::GlobalNamespace::BuilderPiece* attachPiece, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, ::GlobalNamespace::BuilderPiece* parentPiece, int attachIndex, int parentAttachIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestPlacePiece"), {"piece", "attachPiece", "bumpOffsetX", "bumpOffsetZ", "twist", "parentPiece", "attachIndex", "parentAttachIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, attachPiece, bumpOffsetX, bumpOffsetZ, twist, parentPiece, attachIndex, parentAttachIndex);
        }
        void RequestRecyclePiece(::GlobalNamespace::BuilderPiece* piece, bool playFX, int recyclerID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRecyclePiece"), {"piece", "playFX", "recyclerID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece, playFX, recyclerID);
        }
        void RequestShelfSelection(int shelfId, int groupID, bool isConveyor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestShelfSelection"), {"shelfId", "groupID", "isConveyor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelfId, groupID, isConveyor);
        }
        void RequestTableConfiguration() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestTableConfiguration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetConveyors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetConveyors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetStartingMapConfig() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetStartingMapConfig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RollbackFailedCommand(int localCommandId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RollbackFailedCommand"), {"localCommandId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(localCommandId);
        }
        template <typename TP0 = void*>
        void* Rotate180(TP0 v, int offsetX, int offsetY) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Rotate180"), {"v", "offsetX", "offsetY"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v, offsetX, offsetY);
        }
        template <typename TP0 = void*>
        void* Rotate270(TP0 v, int offsetX, int offsetY) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Rotate270"), {"v", "offsetX", "offsetY"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v, offsetX, offsetY);
        }
        template <typename TP0 = void*>
        void* Rotate90(TP0 v, int offsetX, int offsetY) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Rotate90"), {"v", "offsetX", "offsetY"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(v, offsetX, offsetY);
        }
        void RouteNewCommand(::GorillaTagScripts::BuilderTable_BuilderCommand cmd, bool force) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RouteNewCommand"), {"cmd", "force"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cmd, force);
        }
        void RunUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RunUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SaveTableForPlayer(::BNM::Structures::Mono::String* busyStr, ::BNM::Structures::Mono::String* blocksErrStr) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SaveTableForPlayer"), {"busyStr", "blocksErrStr"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(busyStr, blocksErrStr);
        }
        int SerializeTableState(::BNM::Structures::Mono::Array<uint8_t>* bytes, int maxBytes) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SerializeTableState"), {"bytes", "maxBytes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bytes, maxBytes);
        }
        void set_CurrentSaveSlot(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CurrentSaveSlot"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetConveyorSelection(int conveyorId, int setId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetConveyorSelection"), {"conveyorId", "setId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conveyorId, setId);
        }
        void SetDispenserSelection(int conveyorId, int setId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDispenserSelection"), {"conveyorId", "setId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(conveyorId, setId);
        }
        void SetFunctionalPieceState(int pieceID, uint8_t state, ::GlobalNamespace::NetPlayer* player, int timeStamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFunctionalPieceState"), {"pieceID", "state", "player", "timeStamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceID, state, player, timeStamp);
        }
        void SetInBuilderZone_1(bool inBuilderZone) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInBuilderZone"), {"inBuilderZone"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inBuilderZone);
        }
        void SetInRoom_1(bool inRoom) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInRoom"), {"inRoom"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(inRoom);
        }
        void SetIsDirty_1(bool dirty) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetIsDirty"), {"dirty"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dirty);
        }
        void SetLocalPlayerOwnsPlot(bool ownsPlot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLocalPlayerOwnsPlot"), {"ownsPlot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ownsPlot);
        }
        void SetPendingMap(::BNM::Structures::Mono::String* mapID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetPendingMap"), {"mapID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapID);
        }
        void SetTableState_1(::GorillaTagScripts::BuilderTable_TableState newState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTableState"), {"newState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newState);
        }
        void SetupMonkeBlocksRoom() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupMonkeBlocksRoom"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetupResources() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetupResources"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShareSameRoot(::GorillaTagScripts::BuilderAttachGridPlane* plane, ::GorillaTagScripts::BuilderAttachGridPlane* otherPlane) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShareSameRoot"), {"plane", "otherPlane"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(plane, otherPlane);
        }
        static bool ShareSameRoot(::GlobalNamespace::BuilderPiece* piece, ::GlobalNamespace::BuilderPiece* otherPiece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShareSameRoot"), {"piece", "otherPiece"});
            return _m.Call(piece, otherPiece);
        }
        bool ShouldDiscardCommand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldDiscardCommand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldExecuteCommand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldExecuteCommand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldQueueCommand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldQueueCommand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShouldRollbackBufferCommand(::GorillaTagScripts::BuilderTable_BuilderCommand cmd) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldRollbackBufferCommand"), {"cmd"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cmd);
        }
        void ShowPieces(bool show) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShowPieces"), {"show"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(show);
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
        void TryBuildingFromTitleData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryBuildingFromTitleData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void TryBuildingSharedBlocksMap(::BNM::Structures::Mono::String* mapData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryBuildingSharedBlocksMap"), {"mapData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mapData);
        }
        void TryDropPiece(bool leftHand, ::GlobalNamespace::BuilderPiece* testPiece, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryDropPiece"), {"leftHand", "testPiece", "velocity", "angVelocity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(leftHand, testPiece, velocity, angVelocity);
        }
        static bool TryGetBuilderTableForZone(::GlobalNamespace::GTZone zone, ::GorillaTagScripts::BuilderTable*& table) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetBuilderTableForZone"), {"zone", "table"});
            return _m.Call(zone, &table);
        }
        bool TryPlaceGridPlane(::GlobalNamespace::BuilderPiece* piece, ::GorillaTagScripts::BuilderAttachGridPlane* gridPlane, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* checkGridPlanes, ::GorillaTagScripts::BuilderPotentialPlacement& potentialPlacement) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlaceGridPlane"), {"piece", "gridPlane", "checkGridPlanes", "potentialPlacement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece, gridPlane, checkGridPlanes, &potentialPlacement);
        }
        bool TryPlaceGridPlaneOnGridPlane(::GlobalNamespace::BuilderPiece* piece, ::GorillaTagScripts::BuilderAttachGridPlane* gridPlane, ::BNM::Structures::Unity::Vector3 gridPlanePos, ::BNM::Structures::Unity::Quaternion gridPlaneRot, ::GorillaTagScripts::BuilderAttachGridPlane* checkGridPlane, ::GorillaTagScripts::BuilderPotentialPlacement& potentialPlacement, bool& success) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlaceGridPlaneOnGridPlane"), {"piece", "gridPlane", "gridPlanePos", "gridPlaneRot", "checkGridPlane", "potentialPlacement", "success"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece, gridPlane, gridPlanePos, gridPlaneRot, checkGridPlane, &potentialPlacement, &success);
        }
        bool TryPlacePieceGridPlanesOnTableInternal(::GlobalNamespace::BuilderPiece* testPiece, int recurse, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* checkGridPlanesMale, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* checkGridPlanesFemale, ::GorillaTagScripts::BuilderPotentialPlacement& potentialPlacement) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlacePieceGridPlanesOnTableInternal"), {"testPiece", "recurse", "checkGridPlanesMale", "checkGridPlanesFemale", "potentialPlacement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(testPiece, recurse, checkGridPlanesMale, checkGridPlanesFemale, &potentialPlacement);
        }
        bool TryPlacePieceOnTableNoDrop(bool leftHand, ::GlobalNamespace::BuilderPiece* testPiece, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* checkGridPlanesMale, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderAttachGridPlane*>* checkGridPlanesFemale, ::GorillaTagScripts::BuilderPotentialPlacement& potentialPlacement) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlacePieceOnTableNoDrop"), {"leftHand", "testPiece", "checkGridPlanesMale", "checkGridPlanesFemale", "potentialPlacement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(leftHand, testPiece, checkGridPlanesMale, checkGridPlanesFemale, &potentialPlacement);
        }
        template <typename TP0 = void*, typename TP1 = void*, typename TP2 = void*, typename TP3 = void*>
        bool TryPlacePieceOnTableNoDropJobs(TP0 gridPlaneData, TP1 pieceData, TP2 checkGridPlaneData, TP3 checkPieceData, ::GorillaTagScripts::BuilderPotentialPlacement& potentialPlacement, ::BNM::Structures::Mono::List<::GorillaTagScripts::BuilderPotentialPlacement>* allPlacements) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlacePieceOnTableNoDropJobs"), {"gridPlaneData", "pieceData", "checkGridPlaneData", "checkPieceData", "potentialPlacement", "allPlacements"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(gridPlaneData, pieceData, checkGridPlaneData, checkPieceData, &potentialPlacement, allPlacements);
        }
        void TryPlaceRandomlyOnTable(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TryPlaceRandomlyOnTable"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        bool TryRollbackAndReExecute(int localCommandId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryRollbackAndReExecute"), {"localCommandId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(localCommandId);
        }
        static void UnpackPiecePlacement(int packed, uint8_t& twist, int8_t& xOffset, int8_t& zOffset) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackPiecePlacement"), {"packed", "twist", "xOffset", "zOffset"});
            _m.Call(packed, &twist, &xOffset, &zOffset);
        }
        void UnpackSnapInfo(int64_t packed, int& attachGridIndex, int& otherAttachGridIndex, void*& min, void*& max) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackSnapInfo"), {"packed", "attachGridIndex", "otherAttachGridIndex", "min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(packed, &attachGridIndex, &otherAttachGridIndex, &min, &max);
        }
        template <typename TP0 = void*>
        void UnregisterFunctionalPiece(TP0 component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterFunctionalPiece"), {"component"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component);
        }
        template <typename TP0 = void*>
        void UnregisterFunctionalPieceFixedUpdate(TP0 component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterFunctionalPieceFixedUpdate"), {"component"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(component);
        }
        void UpdateDroppedPieces(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateDroppedPieces"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void UpdatePieceData(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePieceData"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void UpdateRollForwardCommandData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRollForwardCommandData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTableState() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTableState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UseResource(::GlobalNamespace::BuilderResourceQuantity quantity) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UseResource"), {"quantity"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(quantity);
        }
        void UseResources(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UseResources"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        bool ValidateAttachPieceParams(int pieceId, int attachIndex, int parentId, int parentAttachIndex, int piecePlacement) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateAttachPieceParams"), {"pieceId", "attachIndex", "parentId", "parentAttachIndex", "piecePlacement"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, attachIndex, parentId, parentAttachIndex, piecePlacement);
        }
        bool ValidateCreatePieceParams(int newPieceType, int newPieceId, ::GlobalNamespace::BuilderPiece_State state, int materialType) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateCreatePieceParams"), {"newPieceType", "newPieceId", "state", "materialType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(newPieceType, newPieceId, state, materialType);
        }
        bool ValidateDeserializedChildPieceState(int pieceId, ::GlobalNamespace::BuilderPiece_State state) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDeserializedChildPieceState"), {"pieceId", "state"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, state);
        }
        bool ValidateDeserializedRootPieceState(int pieceId, ::GlobalNamespace::BuilderPiece_State state, int shelfOwner, int heldByActor, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDeserializedRootPieceState"), {"pieceId", "state", "shelfOwner", "heldByActor", "localPosition", "localRotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, state, shelfOwner, heldByActor, localPosition, localRotation);
        }
        bool ValidateDropPieceParams(int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::GlobalNamespace::NetPlayer* droppedByPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDropPieceParams"), {"pieceId", "position", "rotation", "velocity", "angVelocity", "droppedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, position, rotation, velocity, angVelocity, droppedByPlayer);
        }
        bool ValidateDropPieceState(int pieceId, ::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation, ::BNM::Structures::Unity::Vector3 velocity, ::BNM::Structures::Unity::Vector3 angVelocity, ::Photon_Realtime::Player* droppedByPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateDropPieceState"), {"pieceId", "position", "rotation", "velocity", "angVelocity", "droppedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, position, rotation, velocity, angVelocity, droppedByPlayer);
        }
        bool ValidateFunctionalPieceState(int pieceID, uint8_t state, ::GlobalNamespace::NetPlayer* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateFunctionalPieceState"), {"pieceID", "state", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceID, state, player);
        }
        bool ValidateGrabPieceParams(int pieceId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::GlobalNamespace::NetPlayer* grabbedByPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateGrabPieceParams"), {"pieceId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
        }
        bool ValidateGrabPieceState(int pieceId, bool isLeftHand, ::BNM::Structures::Unity::Vector3 localPosition, ::BNM::Structures::Unity::Quaternion localRotation, ::Photon_Realtime::Player* grabbedByPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateGrabPieceState"), {"pieceId", "isLeftHand", "localPosition", "localRotation", "grabbedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, isLeftHand, localPosition, localRotation, grabbedByPlayer);
        }
        bool ValidatePieceWorldTransform(::BNM::Structures::Unity::Vector3 position, ::BNM::Structures::Unity::Quaternion rotation) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidatePieceWorldTransform"), {"position", "rotation"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position, rotation);
        }
        bool ValidatePlacePieceParams(int pieceId, int attachPieceId, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, int parentPieceId, int attachIndex, int parentAttachIndex, ::GlobalNamespace::NetPlayer* placedByPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidatePlacePieceParams"), {"pieceId", "attachPieceId", "bumpOffsetX", "bumpOffsetZ", "twist", "parentPieceId", "attachIndex", "parentAttachIndex", "placedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer);
        }
        bool ValidatePlacePieceState(int pieceId, int attachPieceId, int8_t bumpOffsetX, int8_t bumpOffsetZ, uint8_t twist, int parentPieceId, int attachIndex, int parentAttachIndex, ::Photon_Realtime::Player* placedByPlayer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidatePlacePieceState"), {"pieceId", "attachPieceId", "bumpOffsetX", "bumpOffsetZ", "twist", "parentPieceId", "attachIndex", "parentAttachIndex", "placedByPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceId, attachPieceId, bumpOffsetX, bumpOffsetZ, twist, parentPieceId, attachIndex, parentAttachIndex, placedByPlayer);
        }
        bool ValidateRepelPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateRepelPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(piece);
        }
        bool ValidateShelfSelectionParams(int shelfId, int displayGroupID, bool isConveyor, ::Photon_Realtime::Player* player) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidateShelfSelectionParams"), {"shelfId", "displayGroupID", "isConveyor", "player"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(shelfId, displayGroupID, isConveyor, player);
        }
        void VerifySetSelections() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("VerifySetSelections"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteQuaternion(::BNM::IL2CPP::Il2CppObject* writer, ::BNM::Structures::Unity::Quaternion data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteQuaternion"), {"writer", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, data);
        }
        ::BNM::Structures::Mono::String* WriteTableToJson() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("WriteTableToJson"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void WriteVector3(::BNM::IL2CPP::Il2CppObject* writer, ::BNM::Structures::Unity::Vector3 data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteVector3"), {"writer", "data"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(writer, data);
        }
    };
}
