#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename TItem, typename TRegion>
    struct SpawnRegion$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpawnRegion`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasSpawnOrigins() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasSpawnOrigins"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetID() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetID(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ID"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetItemCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ItemCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<TItem>* GetItems() {
            static BNM::Method<::BNM::Structures::Mono::List<TItem>*> _method = GetClass().GetMethod(O("get_Items"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMaxItems() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxItems"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxItems(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxItems"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<TRegion>* GetRegions() {
            static BNM::Method<::BNM::Structures::Mono::List<TRegion>*> _method = GetClass().GetMethod(O("get_Regions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetHitTestBuffer() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("_hitTestBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<TItem, int>* GetItemRegionLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<TItem, int>*> _field = GetClass().GetField(O("_itemRegionLookup"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<TItem>* GetItems_f() {
            static BNM::Field<::BNM::Structures::Mono::List<TItem>*> _field = GetClass().GetField(O("_items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, TRegion>* GetRegionLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, TRegion>*> _field = GetClass().GetField(O("_regionLookup"));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<TRegion>* GetRegions_f() {
            static BNM::Field<::BNM::Structures::Mono::List<TRegion>*> _field = GetClass().GetField(O("_regions"));
            return _field.Get();
        }
        float GetScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("_scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTestAgainstGeo() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_testAgainstGeo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseSpawnOrigins() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_useSpawnOrigins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGeoTestPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("geoTestPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetSpawnOrigins() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("spawnOrigins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHitTestBuffer(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("_hitTestBuffer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetItemRegionLookup(::BNM::Structures::Mono::Dictionary<TItem, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<TItem, int>*> _field = GetClass().GetField(O("_itemRegionLookup"));
            _field.Set(value);
        }
        void SetItems(::BNM::Structures::Mono::List<TItem>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<TItem>*> _field = GetClass().GetField(O("_items"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetRegionLookup(::BNM::Structures::Mono::Dictionary<int, TRegion>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, TRegion>*> _field = GetClass().GetField(O("_regionLookup"));
            _field.Set(value);
        }
        static void SetRegions(::BNM::Structures::Mono::List<TRegion>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<TRegion>*> _field = GetClass().GetField(O("_regions"));
            _field.Set(value);
        }
        void SetScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_scale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTestAgainstGeo(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_testAgainstGeo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseSpawnOrigins(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_useSpawnOrigins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGeoTestPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("geoTestPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnOrigins(::BNM::Structures::Mono::Array<::Transform*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("spawnOrigins"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddItem(TItem item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddItem"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        static void AddItemToRegion(TItem item, int regionId) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddItemToRegion"), {"item", "regionId"});
            _m.Call(item, regionId);
        }
        bool get_HasSpawnOrigins() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasSpawnOrigins"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ID() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ItemCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ItemCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<TItem>* get_Items() {
            static BNM::Method<::BNM::Structures::Mono::List<TItem>*> _m = GetClass().GetMethod(O("get_Items"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaxItems() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::List<TRegion>* get_Regions() {
            static BNM::Method<::BNM::Structures::Mono::List<TRegion>*> _m = GetClass().GetMethod(O("get_Regions"));
            return _m.Call();
        }
        void* GetSpawnPointWithNormal(int maxTries) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetSpawnPointWithNormal"), {"maxTries"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(maxTries);
        }
        bool IsInsideGeo(::BNM::Structures::Unity::Vector3 point) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsInsideGeo"), {"point"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(point);
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
        static void RegisterRegion(TRegion region) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterRegion"), {"region"});
            _m.Call(region);
        }
        void RemoveItem(TItem item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveItem"), {"item"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(item);
        }
        static void RemoveItemFromRegion(TItem item) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveItemFromRegion"), {"item"});
            _m.Call(item);
        }
        void set_ID(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ID"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxItems(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxItems"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool TryGetSpawnPoint(::BNM::Structures::Unity::RaycastHit& spawnPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetSpawnPoint"), {"spawnPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&spawnPoint);
        }
        bool TryGetSpawnPoint(::BNM::Structures::Unity::Vector3 origin, ::BNM::Structures::Unity::Vector3 direction, float distance, ::BNM::Structures::Unity::RaycastHit& spawnPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetSpawnPoint"), {"origin", "direction", "distance", "spawnPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(origin, direction, distance, &spawnPoint);
        }
        static void UnregisterRegion(TRegion region) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterRegion"), {"region"});
            _m.Call(region);
        }
    };
}
