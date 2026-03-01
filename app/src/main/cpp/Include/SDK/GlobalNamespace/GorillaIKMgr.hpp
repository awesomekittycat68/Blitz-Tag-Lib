#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaIKMgr_IKJob.hpp"
#include "GorillaIKMgr_IKTransformJob.hpp"

namespace GlobalNamespace {
    struct GorillaIKMgr : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaIKMgr");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaIKMgr* get_Instance() {
            static BNM::Method<::GlobalNamespace::GorillaIKMgr*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::GorillaIKMgr* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr int MaxSize = 20;
        static constexpr int tFormCount = 8;
        ::GlobalNamespace::GorillaIKMgr* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::GorillaIKMgr*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::GorillaIKMgr* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        int GetActualListSz() {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstFrame() {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GorillaIK*>* GetIkList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaIK*>*> _field = GetClass().GetField(O("ikList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaIKMgr_IKJob GetJob() {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr_IKJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaIKMgr_IKTransformJob GetJobXform() {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr_IKTransformJob> _field = GetClass().GetField(O("jobXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobXformHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobXformHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaIK* GetPlayerIK() {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("playerIK"));
            return _field.Get();
        }
        void* GetTAA() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Transform*>* GetTransformList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("transformList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUpdatedSinceLastRun() {
            static BNM::Field<bool> _field = GetClass().GetField(O("updatedSinceLastRun"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::GorillaIKMgr* value) {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetActualListSz(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstFrame(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("firstFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIkList(::BNM::Structures::Mono::List<::GlobalNamespace::GorillaIK*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GorillaIK*>*> _field = GetClass().GetField(O("ikList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJob(::GlobalNamespace::GorillaIKMgr_IKJob value) {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr_IKJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobXform(::GlobalNamespace::GorillaIKMgr_IKTransformJob value) {
            static BNM::Field<::GlobalNamespace::GorillaIKMgr_IKTransformJob> _field = GetClass().GetField(O("jobXform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobXformHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobXformHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPlayerIK(::GlobalNamespace::GorillaIK* value) {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("playerIK"));
            _field.Set(value);
        }
        void SetTAA(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTransformList(::BNM::Structures::Mono::List<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Transform*>*> _field = GetClass().GetField(O("transformList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdatedSinceLastRun(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("updatedSinceLastRun"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void AddPlayerIK(::GlobalNamespace::GorillaIK* _playerIK) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPlayerIK"), {"_playerIK"});
            _m.Call(_playerIK);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyInput() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyInput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CopyOutput() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CopyOutput"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DeregisterIK(::GlobalNamespace::GorillaIK* ik) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterIK"), {"ik"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ik);
        }
        static ::GlobalNamespace::GorillaIKMgr* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::GorillaIKMgr*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterIK(::GlobalNamespace::GorillaIK* ik) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterIK"), {"ik"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ik);
        }
        void SetConstantData(::GlobalNamespace::GorillaIK* ik, int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetConstantData"), {"ik", "index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ik, index);
        }
    };
}
