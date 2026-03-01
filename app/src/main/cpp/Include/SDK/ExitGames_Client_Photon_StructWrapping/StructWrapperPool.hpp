#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "WrappedType.hpp"

namespace ExitGames_Client_Photon_StructWrapping {
    struct StructWrapperPool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon.StructWrapping", "StructWrapperPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::ExitGames_Client_Photon_StructWrapping::WrappedType GetWrappedType(::BNM::MonoType* type) {
            static BNM::Method<::ExitGames_Client_Photon_StructWrapping::WrappedType> _m = GetClass().GetMethod(O("GetWrappedType"), {"type"});
            return _m.Call(type);
        }
    };
}
