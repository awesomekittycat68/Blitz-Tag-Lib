#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaSlicerSimpleManager_UpdateStep.hpp"

namespace GlobalNamespace {
    struct GorillaSlicerSimpleManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaSlicerSimpleManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaSlicerSimpleManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaSlicerSimpleManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetFixedUpdateSlice() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("fixedUpdateSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetHasInstance() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaSlicerSimpleManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaSlicerSimpleManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<void*, int64_t>* GetLastRunTicks() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int64_t>*> _field = GetClass().GetField(O("lastRunTicks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetLateUpdateSlice() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("lateUpdateSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartingIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("startingIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetSW() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sW"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTicksPerFrame() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("ticksPerFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTicksThisFrame() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("ticksThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpdateIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("updateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetUpdateSlice() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("updateSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFixedUpdateSlice(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("fixedUpdateSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetHasInstance(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasInstance"));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaSlicerSimpleManager* value) {
            static BNM::Field<::GlobalNamespace::GorillaSlicerSimpleManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastRunTicks(::BNM::Structures::Mono::Dictionary<void*, int64_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int64_t>*> _field = GetClass().GetField(O("lastRunTicks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLateUpdateSlice(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("lateUpdateSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startingIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSW(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sW"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTicksPerFrame(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("ticksPerFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTicksThisFrame(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("ticksThisFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("updateIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateSlice(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("updateSlice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void CreateManager() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateManager"));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        static void RegisterSliceable(TP0 gSS) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSliceable"), {"gSS"});
            _m.Call(gSS);
        }
        template <typename TP0 = void*>
        static void RegisterSliceable(TP0 gSS, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep step) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSliceable"), {"gSS", "step"});
            _m.Call(gSS, step);
        }
        static void SetInstance_1(::GlobalNamespace::GorillaSlicerSimpleManager* manager) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetInstance"), {"manager"});
            _m.Call(manager);
        }
        template <typename TP0 = void*>
        static bool UnregisterSliceable(TP0 gSS) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnregisterSliceable"), {"gSS"});
            return _m.Call(gSS);
        }
        template <typename TP0 = void*>
        static bool UnregisterSliceable(TP0 gSS, ::GlobalNamespace::GorillaSlicerSimpleManager_UpdateStep step) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("UnregisterSliceable"), {"gSS", "step"});
            return _m.Call(gSS, step);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
