#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GorillaPressableButton.hpp"

namespace GameObjectScheduling_DeepLinks {
    struct DeepLinkButton : ::GlobalNamespace::GorillaPressableButton {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GameObjectScheduling.DeepLinks", "DeepLinkButton");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        uint64_t GetDeepLinkAppID() {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("deepLinkAppID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDeepLinkPayload() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("deepLinkPayload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPressedTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("pressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSendingDeepLink() {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendingDeepLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDeepLinkAppID(uint64_t value) {
            static BNM::Field<uint64_t> _field = GetClass().GetField(O("deepLinkAppID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeepLinkPayload(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("deepLinkPayload"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("pressedTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendingDeepLink(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("sendingDeepLink"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ButtonActivation() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonActivation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* ButtonPressed_Local() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ButtonPressed_Local"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDeepLinkSent(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDeepLinkSent"), {"message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message);
        }
    };
}
