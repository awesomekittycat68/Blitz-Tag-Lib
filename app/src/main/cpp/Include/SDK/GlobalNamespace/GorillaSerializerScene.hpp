#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSerializer.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace GlobalNamespace {
    struct GorillaSerializerScene : ::GlobalNamespace::GorillaSerializer {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSerializerScene");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasAuthority() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasAuthority"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetSceneSerializeTarget() {
            static BNM::Field<void*> _field = GetClass().GetField(O("sceneSerializeTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MonoBehaviour* GetTargetComponent() {
            static BNM::Field<::MonoBehaviour*> _field = GetClass().GetField(O("targetComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTransferrable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("transferrable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetValidDisable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("validDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSceneSerializeTarget(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("sceneSerializeTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetComponent(::MonoBehaviour* value) {
            static BNM::Field<::MonoBehaviour*> _field = GetClass().GetField(O("targetComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransferrable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("transferrable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidDisable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("validDisable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_HasAuthority() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnPhotonInstantiate(::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPhotonInstantiate"), {"info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(info);
        }
        void OnValidDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ValidOnSerialize(::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo& info) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ValidOnSerialize"), {"stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(stream, &info);
        }
    };
}
