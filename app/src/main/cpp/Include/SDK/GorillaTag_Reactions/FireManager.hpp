#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Reactions {
    struct FireManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Reactions", "FireManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float _kSpatialGridCellSize = 0.2f;
        static constexpr int _kMaxAudioSources = 8;
        bool GetHasInstance() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasInstance(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasInstance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GorillaTag_Reactions::FireManager* GetInstance() {
            static BNM::Method<::GorillaTag_Reactions::FireManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTag_Reactions::FireManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static int GetActiveAudioSources() {
            static BNM::Field<int> _field = GetClass().GetField(O("_activeAudioSources"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<void*, int>* GetFireSpatialGrid() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<void*, int>*> _field = GetClass().GetField(O("_fireSpatialGrid"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTag_Reactions::FireInstance*>* GetKEnabledReactions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Reactions::FireInstance*>*> _field = GetClass().GetField(O("_kEnabledReactions"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTag_Reactions::FireInstance*>* GetKFiresToDespawn() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Reactions::FireInstance*>*> _field = GetClass().GetField(O("_kFiresToDespawn"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GorillaTag_Reactions::FireInstance*>* GetKGObjInstIdToFire() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTag_Reactions::FireInstance*>*> _field = GetClass().GetField(O("_kGObjInstId_to_fire"));
            return _field.Get();
        }
        static int GetShaderPropEmissionColor() {
            static BNM::Field<int> _field = GetClass().GetField(O("shaderProp_EmissionColor"));
            return _field.Get();
        }
        static void SetActiveAudioSources(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_activeAudioSources"));
            _field.Set(value);
        }
        static void Extinguish(::GameObject* gObj, float extinguishAmount) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Extinguish"), {"gObj", "extinguishAmount"});
            _m.Call(gObj, extinguishAmount);
        }
        static bool get_hasInstance() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasInstance"));
            return _m.Call();
        }
        static ::GorillaTag_Reactions::FireManager* get_instance() {
            static BNM::Method<::GorillaTag_Reactions::FireManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        static void* GetSpatialGridPos(::BNM::Structures::Unity::Vector3 pos) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSpatialGridPos"), {"pos"});
            return _m.Call(pos);
        }
        static void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.Call();
        }
        static void OnDisable(::GorillaTag_Reactions::FireInstance* f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"), {"f"});
            _m.Call(f);
        }
        static void OnEnable(::GorillaTag_Reactions::FireInstance* f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"), {"f"});
            _m.Call(f);
        }
        static void OnTriggerEnter(::GorillaTag_Reactions::FireInstance* f, ::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"f", "other"});
            _m.Call(f, other);
        }
        static void Register(::GorillaTag_Reactions::FireInstance* f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"f"});
            _m.Call(f);
        }
        static void ResetFireValues(::GorillaTag_Reactions::FireInstance* f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetFireValues"), {"f"});
            _m.Call(f);
        }
        static void set_hasInstance(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasInstance"), {"value"});
            _m.Call(value);
        }
        static void set_instance(::GorillaTag_Reactions::FireManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        static void SpawnFire(::GlobalNamespace::SinglePool* pool, ::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Vector3 normal, float scale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SpawnFire"), {"pool", "pos", "normal", "scale"});
            _m.Call(pool, pos, normal, scale);
        }
        static void Unregister(::GorillaTag_Reactions::FireInstance* reactable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"reactable"});
            _m.Call(reactable);
        }
    };
}
