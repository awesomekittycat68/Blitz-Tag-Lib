#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct OwnershipGuardHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OwnershipGuardHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::OwnershipGuardHandler* GetCallbackInstance() {
            static BNM::Field<::GlobalNamespace::OwnershipGuardHandler*> _field = GetClass().GetField(O("callbackInstance"));
            return _field.Get();
        }
        static void* GetGuardedViews() {
            static BNM::Field<void*> _field = GetClass().GetField(O("guardedViews"));
            return _field.Get();
        }
        static void SetGuardedViews(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("guardedViews"));
            _field.Set(value);
        }
        static void RegisterView(::Photon_Pun::PhotonView* view) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterView"), {"view"});
            _m.Call(view);
        }
        static void RegisterViews(::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* photonViews) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterViews"), {"photonViews"});
            _m.Call(photonViews);
        }
        static void RemoveView(::Photon_Pun::PhotonView* view) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveView"), {"view"});
            _m.Call(view);
        }
        static void RemoveViews(::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* photonViews) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveViews"), {"photonViews"});
            _m.Call(photonViews);
        }
    };
}
