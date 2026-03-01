#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuildTargetManager_BuildTowards.hpp"
#include "BuildTargetManager_NetworkBackend.hpp"

namespace GlobalNamespace {
    struct BuildTargetManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuildTargetManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GameObject*>* GetBetaDisableObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("betaDisableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetBetaEnableObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("betaEnableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuildTargetManager_BuildTowards GetCurrentBuildTargetDONOTCHANGE() {
            static BNM::Field<::GlobalNamespace::BuildTargetManager_BuildTowards> _field = GetClass().GetField(O("currentBuildTargetDONOTCHANGE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableAllCosmetics() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableAllCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagger* GetGorillaTagger() {
            static BNM::Field<::GlobalNamespace::GorillaTagger*> _field = GetClass().GetField(O("gorillaTagger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsBeta() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsQA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuildTargetManager_NetworkBackend GetNetworkBackend() {
            static BNM::Field<::GlobalNamespace::BuildTargetManager_NetworkBackend> _field = GetClass().GetField(O("networkBackend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuildTargetManager_BuildTowards GetNewBuildTarget() {
            static BNM::Field<::GlobalNamespace::BuildTargetManager_BuildTowards> _field = GetClass().GetField(O("newBuildTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOvrManager() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ovrManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPath() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpoofChild() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spoofChild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSpoofIDs() {
            static BNM::Field<bool> _field = GetClass().GetField(O("spoofIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBetaDisableObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("betaDisableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBetaEnableObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("betaEnableObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentBuildTargetDONOTCHANGE(::GlobalNamespace::BuildTargetManager_BuildTowards value) {
            static BNM::Field<::GlobalNamespace::BuildTargetManager_BuildTowards> _field = GetClass().GetField(O("currentBuildTargetDONOTCHANGE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableAllCosmetics(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enableAllCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaTagger(::GlobalNamespace::GorillaTagger* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagger*> _field = GetClass().GetField(O("gorillaTagger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsBeta(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isBeta"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsQA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isQA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkBackend(::GlobalNamespace::BuildTargetManager_NetworkBackend value) {
            static BNM::Field<::GlobalNamespace::BuildTargetManager_NetworkBackend> _field = GetClass().GetField(O("networkBackend"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewBuildTarget(::GlobalNamespace::BuildTargetManager_BuildTowards value) {
            static BNM::Field<::GlobalNamespace::BuildTargetManager_BuildTowards> _field = GetClass().GetField(O("newBuildTarget"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOvrManager(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("ovrManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPath(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("path"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpoofChild(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spoofChild"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpoofIDs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("spoofIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* GetPath_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetPath"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
