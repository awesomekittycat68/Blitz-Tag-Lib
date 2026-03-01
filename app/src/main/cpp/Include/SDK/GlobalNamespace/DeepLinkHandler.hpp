#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DeepLinkHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DeepLinkHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::DeepLinkHandler* GetInstance() {
            static BNM::Field<::GlobalNamespace::DeepLinkHandler*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr const char* WitchbloodAppID = "7221491444554579";
        static constexpr const char* RaccoonLagoonAppID = "1903584373052985";
        static constexpr const char* HiddenPathCollabEndpoint = "/api/ConsumeItem";
        ::Oculus_Platform_Models::LaunchDetails* GetCachedLaunchDetails() {
            static BNM::Field<::Oculus_Platform_Models::LaunchDetails*> _field = GetClass().GetField(O("cachedLaunchDetails"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::DeepLinkHandler* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::DeepLinkHandler*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetRaccoonLagoonCosmeticIDs() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("RaccoonLagoonCosmeticIDs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetWitchbloodCollabCosmeticID() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("WitchbloodCollabCosmeticID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedLaunchDetails(::Oculus_Platform_Models::LaunchDetails* value) {
            static BNM::Field<::Oculus_Platform_Models::LaunchDetails*> _field = GetClass().GetField(O("cachedLaunchDetails"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::DeepLinkHandler* value) {
            static BNM::Field<::GlobalNamespace::DeepLinkHandler*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* CheckProcessExternalUnlock(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* itemIDs, bool autoEquip, bool isLeftHand, bool destroyOnFinish) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("CheckProcessExternalUnlock"), {"itemIDs", "autoEquip", "isLeftHand", "destroyOnFinish"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(itemIDs, autoEquip, isLeftHand, destroyOnFinish);
        }
        void HandleDeepLink() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleDeepLink"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Initialize(::GameObject* parent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"parent"});
            _m.Call(parent);
        }
        void OnRaccoonLagoonCollabResponse(::UnityWebRequest* completedRequest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRaccoonLagoonCollabResponse"), {"completedRequest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(completedRequest);
        }
        void OnWitchbloodCollabResponse(::UnityWebRequest* completedRequest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnWitchbloodCollabResponse"), {"completedRequest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(completedRequest);
        }
        static ::BNM::Coroutine::IEnumerator* ProcessWebRequest(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* data, ::BNM::Structures::Mono::String* contentType, ::BNM::Structures::Mono::Action<::UnityWebRequest*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ProcessWebRequest"), {"url", "data", "contentType", "callback"});
            return _m.Call(url, data, contentType, callback);
        }
        void RefreshLaunchDetails() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshLaunchDetails"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
