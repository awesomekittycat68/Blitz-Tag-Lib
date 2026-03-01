#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CodeRedemption : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CodeRedemption");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* HiddenPathCollabEndpoint = "/api/ConsumeCodeItem";
        static ::GlobalNamespace::CodeRedemption* GetInstance() {
            static BNM::Field<::GlobalNamespace::CodeRedemption*> _field = GetClass().GetField(O("Instance"));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::CodeRedemption* value) {
            static BNM::Field<::GlobalNamespace::CodeRedemption*> _field = GetClass().GetField(O("Instance"));
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
        void HandleCodeRedemption(::BNM::Structures::Mono::String* code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleCodeRedemption"), {"code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code);
        }
        void OnCodeRedemptionResponse(::UnityWebRequest* completedRequest) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnCodeRedemptionResponse"), {"completedRequest"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(completedRequest);
        }
        static ::BNM::Coroutine::IEnumerator* ProcessWebRequest(::BNM::Structures::Mono::String* url, ::BNM::Structures::Mono::String* data, ::BNM::Structures::Mono::String* contentType, ::BNM::Structures::Mono::Action<::UnityWebRequest*>* callback) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ProcessWebRequest"), {"url", "data", "contentType", "callback"});
            return _m.Call(url, data, contentType, callback);
        }
    };
}
