#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameStateFx : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameStateFx");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GT/GameStateFx]  ";
        static constexpr const char* preErr = "[GT/GameStateFx]  ERROR!!!  ";
        int GetDelayedExecContextFrameNum() {
            static BNM::Field<int> _field = GetClass().GetField(O("_delayedExecContextFrameNum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::Material*>* GetGMaterialsCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::Material*>*> _field = GetClass().GetField(O("_g_materialsCache"));
            return _field.Get();
        }
        bool GetHasDefaultAudioSource() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasDefaultAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsValid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetReactionQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_reactionQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStateProvider() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_stateProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioSource* GetMDefaultAudioSource() {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_defaultAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::MonoBehaviour* GetMStateProvider() {
            static BNM::Field<::MonoBehaviour*> _field = GetClass().GetField(O("m_stateProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDelayedExecContextFrameNum(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_delayedExecContextFrameNum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasDefaultAudioSource(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasDefaultAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsValid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactionQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_reactionQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStateProvider(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_stateProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMDefaultAudioSource(::AudioSource* value) {
            static BNM::Field<::AudioSource*> _field = GetClass().GetField(O("m_defaultAudioSource"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMStateProvider(::MonoBehaviour* value) {
            static BNM::Field<::MonoBehaviour*> _field = GetClass().GetField(O("m_stateProvider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static int _DelaySortCompare(::GlobalNamespace::GameStateFx_StateReaction* a, ::GlobalNamespace::GameStateFx_StateReaction* b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("_DelaySortCompare"), {"a", "b"});
            return _m.Call(a, b);
        }
        bool _IsAllValid() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_IsAllValid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool _IsOneValid(bool isValidCondition, ::BNM::Structures::Mono::String* msgFailReason) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_IsOneValid"), {"isValidCondition", "msgFailReason"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(isValidCondition, msgFailReason);
        }
        static void _PerformReactions(::GlobalNamespace::GameStateFx_StateReaction* reaction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_PerformReactions"), {"reaction"});
            _m.Call(reaction);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
    };
}
