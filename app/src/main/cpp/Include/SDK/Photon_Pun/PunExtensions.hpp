#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct PunExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PunExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*>* GetParametersOfMethods() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*>*> _field = GetClass().GetField(O("ParametersOfMethods"));
            return _field.Get();
        }
        static void SetParametersOfMethods(::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::IL2CPP::Il2CppObject*, ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*>*> _field = GetClass().GetField(O("ParametersOfMethods"));
            _field.Set(value);
        }
        static bool AlmostEquals(::BNM::Structures::Unity::Vector3 target, ::BNM::Structures::Unity::Vector3 second, float sqrMagnitudePrecision) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlmostEquals"), {"target", "second", "sqrMagnitudePrecision"});
            return _m.Call(target, second, sqrMagnitudePrecision);
        }
        static bool AlmostEquals(::BNM::Structures::Unity::Vector2 target, ::BNM::Structures::Unity::Vector2 second, float sqrMagnitudePrecision) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlmostEquals"), {"target", "second", "sqrMagnitudePrecision"});
            return _m.Call(target, second, sqrMagnitudePrecision);
        }
        static bool AlmostEquals(::BNM::Structures::Unity::Quaternion target, ::BNM::Structures::Unity::Quaternion second, float maxAngle) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlmostEquals"), {"target", "second", "maxAngle"});
            return _m.Call(target, second, maxAngle);
        }
        static bool AlmostEquals(float target, float second, float floatDiff) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AlmostEquals"), {"target", "second", "floatDiff"});
            return _m.Call(target, second, floatDiff);
        }
        static bool CheckIsAssignableFrom(::BNM::MonoType* to, ::BNM::MonoType* from) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsAssignableFrom"), {"to", "from"});
            return _m.Call(to, from);
        }
        static bool CheckIsInterface(::BNM::MonoType* to) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckIsInterface"), {"to"});
            return _m.Call(to);
        }
        static ::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>* GetCachedParemeters(::BNM::IL2CPP::Il2CppObject* mo) {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::IL2CPP::Il2CppObject*>*> _m = GetClass().GetMethod(O("GetCachedParemeters"), {"mo"});
            return _m.Call(mo);
        }
        static ::Photon_Pun::PhotonView* GetPhotonView(::GameObject* go) {
            static BNM::Method<::Photon_Pun::PhotonView*> _m = GetClass().GetMethod(O("GetPhotonView"), {"go"});
            return _m.Call(go);
        }
        static ::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>* GetPhotonViewsInChildren(::GameObject* go) {
            static BNM::Method<::BNM::Structures::Mono::Array<::Photon_Pun::PhotonView*>*> _m = GetClass().GetMethod(O("GetPhotonViewsInChildren"), {"go"});
            return _m.Call(go);
        }
    };
}
