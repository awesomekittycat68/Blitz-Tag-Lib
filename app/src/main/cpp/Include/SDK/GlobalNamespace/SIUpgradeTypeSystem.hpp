#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIUpgradeType.hpp"

namespace GlobalNamespace {
    struct SIUpgradeTypeSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIUpgradeTypeSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int GetNodeId(::GlobalNamespace::SIUpgradeType self) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetNodeId"), {"self"});
            return _m.Call(self);
        }
        static int GetPageId(::GlobalNamespace::SIUpgradeType self) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPageId"), {"self"});
            return _m.Call(self);
        }
        static ::GlobalNamespace::SIUpgradeType GetUpgradeType(int pageId, int nodeId) {
            static BNM::Method<::GlobalNamespace::SIUpgradeType> _m = GetClass().GetMethod(O("GetUpgradeType"), {"pageId", "nodeId"});
            return _m.Call(pageId, nodeId);
        }
    };
}
