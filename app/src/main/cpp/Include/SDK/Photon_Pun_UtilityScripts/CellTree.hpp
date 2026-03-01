#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun_UtilityScripts {
    struct CellTree : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun.UtilityScripts", "CellTree");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Pun_UtilityScripts::CellTreeNode* GetRootNode() {
            static BNM::Method<::Photon_Pun_UtilityScripts::CellTreeNode*> _method = GetClass().GetMethod(O("get_RootNode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRootNode(::Photon_Pun_UtilityScripts::CellTreeNode* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RootNode"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Photon_Pun_UtilityScripts::CellTreeNode* get_RootNode() {
            static BNM::Method<::Photon_Pun_UtilityScripts::CellTreeNode*> _m = GetClass().GetMethod(O("get_RootNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_RootNode(::Photon_Pun_UtilityScripts::CellTreeNode* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RootNode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
