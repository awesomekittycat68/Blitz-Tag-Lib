#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    enum class BuilderTableNetworking_RPC : int {
        PlayerEnterMaster = 0,
        TableDataMaster = 1,
        TableData = 2,
        TableDataStart = 3,
        PlacePieceMaster = 4,
        PlacePiece = 5,
        GrabPieceMaster = 6,
        GrabPiece = 7,
        DropPieceMaster = 8,
        DropPiece = 9,
        RequestFailed = 10,
        PieceDropZone = 11,
        CreatePiece = 12,
        CreatePieceMaster = 13,
        CreateShelfPieceMaster = 14,
        RecyclePieceMaster = 15,
        PlotClaimedMaster = 16,
        ArmShelfCreated = 17,
        ShelfSelection = 18,
        ShelfSelectionMaster = 19,
        SetFunctionalState = 20,
        SetFunctionalStateMaster = 21,
        RequestTerminalControl = 22,
        SetTerminalDriver = 23,
        LoadSharedBlocksMap = 24,
        SharedTableEvent = 25,
        Count = 26,
    };
}
