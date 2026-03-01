#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SRand.hpp"

namespace GlobalNamespace {
    struct GTContactManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTContactManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MAX_CONTACTS = 32;
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GTContactPoint*>* GetGContactPoints() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTContactPoint*>*> _field = GetClass().GetField(O("_gContactPoints"));
            return _field.Get();
        }
        static int GetGNextFree() {
            static BNM::Field<int> _field = GetClass().GetField(O("gNextFree"));
            return _field.Get();
        }
        static ::GlobalNamespace::SRand GetGRND() {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("gRND"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetShaderData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("ShaderData"));
            return _field.Get();
        }
        static void SetGContactPoints(::BNM::Structures::Mono::Array<::GlobalNamespace::GTContactPoint*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GTContactPoint*>*> _field = GetClass().GetField(O("_gContactPoints"));
            _field.Set(value);
        }
        static void SetGNextFree(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("gNextFree"));
            _field.Set(value);
        }
        static void SetGRND(::GlobalNamespace::SRand value) {
            static BNM::Field<::GlobalNamespace::SRand> _field = GetClass().GetField(O("gRND"));
            _field.Set(value);
        }
        static void SetShaderData(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("ShaderData"));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::Array<::GlobalNamespace::GTContactPoint*>* InitContactPoints(int count) {
            static BNM::Method<::BNM::Structures::Mono::Array<::GlobalNamespace::GTContactPoint*>*> _m = GetClass().GetMethod(O("InitContactPoints"), {"count"});
            return _m.Call(count);
        }
        static void InitializeOnLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeOnLoad"));
            _m.Call();
        }
        static void ProcessContacts() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessContacts"));
            _m.Call();
        }
        static void RaiseContact(::BNM::Structures::Unity::Vector3 point, ::BNM::Structures::Unity::Vector3 normal) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RaiseContact"), {"point", "normal"});
            _m.Call(point, normal);
        }
        static void Transfer(::BNM::Structures::Unity::Matrix4x4& from, ::BNM::Structures::Unity::Matrix4x4& to) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Transfer"), {"from", "to"});
            _m.Call(&from, &to);
        }
    };
}
