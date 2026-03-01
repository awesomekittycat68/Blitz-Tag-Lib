#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FXType.hpp"
#include "PhotonMessageInfoWrapped.hpp"

namespace GlobalNamespace {
    struct FXSystem : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FXSystem");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static bool CheckCallSpam(::GlobalNamespace::FXSystemSettings* settings, int index, double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckCallSpam"), {"settings", "index", "serverTime"});
            return _m.Call(settings, index, serverTime);
        }
        template <typename TP0 = void*>
        static void PlayFX(TP0 effectContext) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFX"), {"effectContext"});
            _m.Call(effectContext);
        }
        template <typename T, typename TP1 = void*>
        static void PlayFX(::GlobalNamespace::FXType fxType, TP1 context, T args, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFX"), {"fxType", "context", "args", "info"});
            _m.Call(fxType, context, args, info);
        }
        template <typename TP1 = void*>
        static void PlayFXForRig(::GlobalNamespace::FXType fxType, TP1 context, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFXForRig"), {"fxType", "context", "info"});
            _m.Call(fxType, context, info);
        }
        template <typename T, typename TP1 = void*>
        static void PlayFXForRig_1(::GlobalNamespace::FXType fxType, TP1 context, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFXForRig"), {"fxType", "context", "info"});
            _m.Call(fxType, context, info);
        }
        template <typename TP2 = void*>
        static void PlayFXForRigValidated(::BNM::Structures::Mono::List<int>* hashes, ::GlobalNamespace::FXType fxType, TP2 context, ::GlobalNamespace::PhotonMessageInfoWrapped info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PlayFXForRigValidated"), {"hashes", "fxType", "context", "info"});
            _m.Call(hashes, fxType, context, info);
        }
    };
}
