#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTAnimator_AnimClipAndGObjs.hpp"

namespace GlobalNamespace {
    struct GTAnimator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTAnimator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GTAnimator]  ";
        static constexpr const char* preErr = "[GTAnimator]  ERROR!!!  ";
        static constexpr const char* preErrBeta = "[GTAnimator]  ERROR!!!  (beta only log)  ";
        static constexpr int64_t _k_invalidState = -9223372036854775808;
        ::BNM::IL2CPP::Il2CppObject* GetAnimationComponent() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _method = GetClass().GetMethod(O("get_animationComponent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetHasAnimationComponent() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasAnimationComponent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasAnimationComponent(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasAnimationComponent"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsPlaying() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPlaying"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void* GetAllStaticGobjs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_allStaticGobjs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetCurrentStateAsLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_currentStateAsLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFrameCountWhenLastPlayed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameCountWhenLastPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetQueuedStateAsLong() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_queuedStateAsLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWasInitCalled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasInitCalled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMAnimatedGameObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("m_animatedGameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMAnimationComponent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_animationComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetMDefaultStaticGameObjects() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("m_defaultStaticGameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentStateAsLong(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_currentStateAsLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFrameCountWhenLastPlayed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_frameCountWhenLastPlayed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetQueuedStateAsLong(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_queuedStateAsLong"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWasInitCalled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_wasInitCalled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAnimatedGameObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("m_animatedGameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAnimationComponent(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_animationComponent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMDefaultStaticGameObjects(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("m_defaultStaticGameObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool _IsCurrentClipLoopable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_IsCurrentClipLoopable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::IL2CPP::Il2CppObject* get_animationComponent() {
            static BNM::Method<::BNM::IL2CPP::Il2CppObject*> _m = GetClass().GetMethod(O("get_animationComponent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasAnimationComponent() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasAnimationComponent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsPlaying() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPlaying"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Init() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void QueueState(int64_t enumValueAsLong) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("QueueState"), {"enumValueAsLong"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enumValueAsLong);
        }
        void set_hasAnimationComponent(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasAnimationComponent"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetState(int64_t enumValueAsLong) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetState"), {"enumValueAsLong"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enumValueAsLong);
        }
        void Stop() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Stop"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryPlay(int64_t enumValueAsLong) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPlay"), {"enumValueAsLong"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(enumValueAsLong);
        }
    };
}
