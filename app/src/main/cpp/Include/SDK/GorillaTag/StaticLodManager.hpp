#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "StaticLodManager_GroupInfo.hpp"

namespace GorillaTag {
    struct StaticLodManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "StaticLodManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<int, int>* GetGroupInstIdToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("_groupInstId_to_index"));
            return _field.Get();
        }
        static void* GetFreeSlots() {
            static BNM::Field<void*> _field = GetClass().GetField(O("freeSlots"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTag::StaticLodManager_GroupInfo>* GetGroupInfos() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::StaticLodManager_GroupInfo>*> _field = GetClass().GetField(O("groupInfos"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GorillaTag::StaticLodGroup*>* GetGroupMonoBehaviours() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::StaticLodGroup*>*> _field = GetClass().GetField(O("groupMonoBehaviours"));
            return _field.Get();
        }
        bool GetHasMainCamera() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Camera* GetMainCamera() {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHasMainCamera(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMainCamera(::Camera* value) {
            static BNM::Field<::Camera*> _field = GetClass().GetField(O("mainCamera"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename T>
        static void _EdAddPathsToGroup(::BNM::Structures::Mono::Array<T>* components, ::BNM::Structures::Mono::String*& ref_edDebugPaths) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_EdAddPathsToGroup"), {"components", "ref_edDebugPaths"});
            _m.Call(components, &ref_edDebugPaths);
        }
        static bool _TryAddMembersToLodGroup(bool isNew, int groupIndex) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_TryAddMembersToLodGroup"), {"isNew", "groupIndex"});
            return _m.Call(isNew, groupIndex);
        }
        static int OldRegister(::GorillaTag::StaticLodGroup* lodGroup) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("OldRegister"), {"lodGroup"});
            return _m.Call(lodGroup);
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
        static int Register(::GorillaTag::StaticLodGroup* lodGroup) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Register"), {"lodGroup"});
            return _m.Call(lodGroup);
        }
        static void SetEnabled(int index, bool enable) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetEnabled"), {"index", "enable"});
            _m.Call(index, enable);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool TryAddLateInstantiatedMembers(::GameObject* root) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryAddLateInstantiatedMembers"), {"root"});
            return _m.Call(root);
        }
        static void Unregister(int lodGroupIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"lodGroupIndex"});
            _m.Call(lodGroupIndex);
        }
    };
}
