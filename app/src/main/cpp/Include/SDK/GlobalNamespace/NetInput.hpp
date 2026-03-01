#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkedInput.hpp"

namespace GlobalNamespace {
    struct NetInput : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "NetInput");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::VRRig* GetLocalPlayerVRRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_LocalPlayerVRRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::VRRig* GetLocalPlayerVRRig_f() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_localPlayerVRRig"));
            return _field.Get();
        }
        static void SetLocalPlayerVRRig(::GlobalNamespace::VRRig* value) {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("_localPlayerVRRig"));
            _field.Set(value);
        }
        static ::GlobalNamespace::VRRig* get_LocalPlayerVRRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_LocalPlayerVRRig"));
            return _m.Call();
        }
        static ::GlobalNamespace::NetworkedInput GetInput() {
            static BNM::Method<::GlobalNamespace::NetworkedInput> _m = GetClass().GetMethod(O("GetInput"));
            return _m.Call();
        }
    };
}
