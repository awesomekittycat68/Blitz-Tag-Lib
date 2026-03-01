#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaParent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaParent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaParent* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaParent*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        int GetI() {
            static BNM::Field<int> _field = GetClass().GetField(O("i"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaParent* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaParent*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Action<>* GetOnReplicatedClientReady() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onReplicatedClientReady"));
            return _field.Get();
        }
        ::GameObject* GetPlayerParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetReplicatedClientReady() {
            static BNM::Field<bool> _field = GetClass().GetField(O("replicatedClientReady"));
            return _field.Get();
        }
        ::GameObject* GetTagUI() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tagUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::VRRig*>* GetVrrigDict() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrrigDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetVrrigParent() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("vrrigParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetVrrigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrrigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        void SetI(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaParent* value) {
            static BNM::Field<::GlobalNamespace::GorillaParent*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        static void SetOnReplicatedClientReady(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("onReplicatedClientReady"));
            _field.Set(value);
        }
        void SetPlayerParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("playerParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetReplicatedClientReady(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("replicatedClientReady"));
            _field.Set(value);
        }
        void SetTagUI(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("tagUI"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrigDict(::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GlobalNamespace::NetPlayer*, ::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrrigDict"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrigParent(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("vrrigParent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVrrigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("vrrigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void OnReplicatedClientReady(::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnReplicatedClientReady"), {"action"});
            _m.Call(action);
        }
        static void ReplicatedClientReady() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReplicatedClientReady"));
            _m.Call();
        }
    };
}
