#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PropHuntDebugHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntDebugHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::PropHuntDebugHelper* GetInstance() {
            static BNM::Field<::GlobalNamespace::PropHuntDebugHelper*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* GetAllCosmetics() {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("_allCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetCachedAllPropIDs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_cachedAllPropIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropHuntHandFollower* GetLocalPropHuntHandFollower() {
            static BNM::Field<::GlobalNamespace::PropHuntHandFollower*> _field = GetClass().GetField(O("_localPropHuntHandFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaPropHuntGameManager* GetPropHuntManager() {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager*> _field = GetClass().GetField(O("_propHuntManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TextMeshPro* GetPropsText() {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("_propsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSelectedPropIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("_selectedPropIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::PropHuntDebugHelper* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::PropHuntDebugHelper*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        void SetAllCosmetics(::GorillaTag_CosmeticSystem::AllCosmeticsArraySO* value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::AllCosmeticsArraySO*> _field = GetClass().GetField(O("_allCosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedAllPropIDs(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_cachedAllPropIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalPropHuntHandFollower(::GlobalNamespace::PropHuntHandFollower* value) {
            static BNM::Field<::GlobalNamespace::PropHuntHandFollower*> _field = GetClass().GetField(O("_localPropHuntHandFollower"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropHuntManager(::GlobalNamespace::GorillaPropHuntGameManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaPropHuntGameManager*> _field = GetClass().GetField(O("_propHuntManager"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropsText(::TextMeshPro* value) {
            static BNM::Field<::TextMeshPro*> _field = GetClass().GetField(O("_propsText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSelectedPropIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_selectedPropIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::PropHuntDebugHelper* value) {
            static BNM::Field<::GlobalNamespace::PropHuntDebugHelper*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* GetCurrentPropInfo() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetCurrentPropInfo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetSelectedPropID(int index) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetSelectedPropID"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        void NextProp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("NextProp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PrevProp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrevProp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendForcePropHandRPC(::BNM::Structures::Mono::String* newPropId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendForcePropHandRPC"), {"newPropId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newPropId);
        }
        ::BNM::Coroutine::IEnumerator* Start() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void ToggleRound() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ToggleRound"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdatePropsText() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePropsText"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
