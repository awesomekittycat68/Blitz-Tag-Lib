#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VRRigJobManager_VRRigTransformInput.hpp"
#include "VRRigJobManager_VRRigTransformJob.hpp"

namespace GlobalNamespace {
    struct VRRigJobManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigJobManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::VRRigJobManager* get_Instance() {
            static BNM::Method<::GlobalNamespace::VRRigJobManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GlobalNamespace::VRRigJobManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::VRRigJobManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        static constexpr int MaxSize = 19;
        static constexpr int questJobThreads = 2;
        ::GlobalNamespace::VRRigJobManager* GetInstance_pg() {
            static BNM::Method<::GlobalNamespace::VRRigJobManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::VRRigJobManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::VRRigJobManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        int GetActualListSz() {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCachedInput() {
            static BNM::Field<void*> _field = GetClass().GetField(O("cachedInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRigJobManager_VRRigTransformJob GetJob() {
            static BNM::Field<::GlobalNamespace::VRRigJobManager_VRRigTransformJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetRigList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTAA() {
            static BNM::Field<void*> _field = GetClass().GetField(O("tAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GlobalNamespace::VRRigJobManager* value) {
            static BNM::Field<::GlobalNamespace::VRRigJobManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetActualListSz(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("actualListSz"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedInput(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("cachedInput"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJob(::GlobalNamespace::VRRigJobManager_VRRigTransformJob value) {
            static BNM::Field<::GlobalNamespace::VRRigJobManager_VRRigTransformJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigList(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("rigList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTAA(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("tAA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
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
        void DeregisterVRRig(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DeregisterVRRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        static ::GlobalNamespace::VRRigJobManager* get_Instance_1() {
            static BNM::Method<::GlobalNamespace::VRRigJobManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterVRRig(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterVRRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
