#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandEffectsTriggerRegistry_HandEffectsJob.hpp"

namespace GlobalNamespace {
    struct HandEffectsTriggerRegistry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandEffectsTriggerRegistry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::HandEffectsTriggerRegistry* get_Instance() {
            static BNM::Method<::GlobalNamespace::HandEffectsTriggerRegistry*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static constexpr int MAX_TRIGGERS = 50;
        static constexpr int BIT_ARRAY_SIZE = 2500;
        static constexpr float COOLDOWN_TIME = 0.5f;
        static constexpr float DEFAULT_RADIUS = 0.5f;
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::HandEffectsTriggerRegistry* GetInstance() {
            static BNM::Method<::GlobalNamespace::HandEffectsTriggerRegistry*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GlobalNamespace::HandEffectsTriggerRegistry* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetPostTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPostTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PostTickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetTickRunning() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTickRunning(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TickRunning"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetActualListSz() {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Shared_Scripts_Utilities::GTBitArray* GetExistingCollisionBits() {
            static BNM::Field<::GorillaTag_Shared_Scripts_Utilities::GTBitArray*> _field = GetClass().GetField(O("existingCollisionBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob GetJob() {
            static BNM::Field<::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Shared_Scripts_Utilities::GTBitArray* GetNewCollisionBits() {
            static BNM::Field<::GorillaTag_Shared_Scripts_Utilities::GTBitArray*> _field = GetClass().GetField(O("newCollisionBits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetTriggers() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("triggers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetTriggerTimes() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("triggerTimes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetActualListSz(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJob(::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob value) {
            static BNM::Field<::GlobalNamespace::HandEffectsTriggerRegistry_HandEffectsJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckForHandEffectOnProcessedOutput() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckForHandEffectOnProcessedOutput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyInput() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void FindInstance() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindInstance"));
            _m.Call();
        }
        static bool get_HasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasInstance"));
            return _m.Call();
        }
        static ::GlobalNamespace::HandEffectsTriggerRegistry* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::HandEffectsTriggerRegistry*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        bool get_PostTickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PostTickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_TickRunning() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_TickRunning"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
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
        void PostTick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PostTick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void Register(TP0 trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        static void set_HasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HasInstance"), {"value"});
            _m.Call(value);
        }
        static void set_Instance(::GlobalNamespace::HandEffectsTriggerRegistry* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Instance"), {"value"});
            _m.Call(value);
        }
        void set_PostTickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PostTickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TickRunning(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TickRunning"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Tick() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Tick"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void Unregister(TP0 trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
    };
}
