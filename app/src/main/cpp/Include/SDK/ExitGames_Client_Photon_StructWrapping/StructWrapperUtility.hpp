#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon_StructWrapping {
    struct StructWrapperUtility : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon.StructWrapping", "StructWrapperUtility");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename T, typename TP0 = void*>
        static T Get(TP0 obj) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Get"), {"obj"});
            return _m.Call(obj);
        }
        template <typename T, typename TP0 = void*>
        static bool IsType(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsType"), {"obj"});
            return _m.Call(obj);
        }
        template <typename T, typename TP0 = void*>
        static T Unwrap(TP0 obj) {
            static BNM::Method<T> _m = GetClass().GetMethod(O("Unwrap"), {"obj"});
            return _m.Call(obj);
        }
    };
}
