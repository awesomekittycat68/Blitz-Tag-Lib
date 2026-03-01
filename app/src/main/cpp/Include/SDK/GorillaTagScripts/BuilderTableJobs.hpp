#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderGridPlaneData.hpp"
#include "BuilderPieceData.hpp"

namespace GorillaTagScripts {
    struct BuilderTableJobs : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderTableJobs");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP1 = void*>
        static void BuildTestPieceListForJob(::GlobalNamespace::BuilderPiece* testPiece, TP1 testGridPlaneList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildTestPieceListForJob"), {"testPiece", "testGridPlaneList"});
            _m.Call(testPiece, testGridPlaneList);
        }
        template <typename TP1 = void*, typename TP2 = void*>
        static void BuildTestPieceListForJob(::GlobalNamespace::BuilderPiece* testPiece, TP1 testPieceList, TP2 testGridPlaneList) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildTestPieceListForJob"), {"testPiece", "testPieceList", "testGridPlaneList"});
            _m.Call(testPiece, testPieceList, testGridPlaneList);
        }
    };
}
