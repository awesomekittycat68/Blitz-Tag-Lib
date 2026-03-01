#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PropHuntHandFollower : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PropHuntHandFollower");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr bool _k__GT_PROP_HUNT__USE_POOLING__ = true;
        static constexpr bool _k_isBetaOrEditor = false;
        static constexpr float HandFollowDistance = 0.1f;
        ::GlobalNamespace::VRRig* GetAttachedToRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _method = GetClass().GetMethod(O("get_attachedToRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAttachedToRig(::GlobalNamespace::VRRig* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_attachedToRig"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetHasProp() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_hasProp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHasProp(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_hasProp"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsInstantiatingAsync() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsInstantiatingAsync"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsInstantiatingAsync(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsInstantiatingAsync"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsLeftHand() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsLeftHand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* GetColliders() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>*> _field = GetClass().GetField(O("_colliders"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropHuntGrabbableProp* GetGrabbableProp() {
            static BNM::Field<::GlobalNamespace::PropHuntGrabbableProp*> _field = GetClass().GetField(O("_grabbableProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasProp_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* GetInteractionPoints() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>*> _field = GetClass().GetField(O("_interactionPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLeftHand_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsLocal() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetLastRelativeAngle() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_lastRelativeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetLastRelativePos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastRelativePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetNetworkLastRelativeAngle() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_networkLastRelativeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetNetworkLastRelativePos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_networkLastRelativePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetProp() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_prop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetPropOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_propOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::PropHuntTaggableProp* GetTaggableProp() {
            static BNM::Field<::GlobalNamespace::PropHuntTaggableProp*> _field = GetClass().GetField(O("_taggableProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCollisionLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* GetRaycastHits() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTargetPoint() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGrabbableProp(::GlobalNamespace::PropHuntGrabbableProp* value) {
            static BNM::Field<::GlobalNamespace::PropHuntGrabbableProp*> _field = GetClass().GetField(O("_grabbableProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasProp_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_hasProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLeftHand(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLeftHand"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsLocal(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isLocal"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRelativeAngle(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_lastRelativeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastRelativePos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_lastRelativePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkLastRelativeAngle(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("_networkLastRelativeAngle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetworkLastRelativePos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_networkLastRelativePos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProp(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_prop"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPropOffset(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("_propOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTaggableProp(::GlobalNamespace::PropHuntTaggableProp* value) {
            static BNM::Field<::GlobalNamespace::PropHuntTaggableProp*> _field = GetClass().GetField(O("_taggableProp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollisionLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("collisionLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRaycastHits(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::RaycastHit>*> _field = GetClass().GetField(O("raycastHits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPoint(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("targetPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CreateProp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CreateProp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DestroyProp() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyProp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void DestroyProp_NoPool(::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* _colliders, bool& hasProp, ::GameObject*& _prop) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyProp_NoPool"), {"_colliders", "hasProp", "_prop"});
            _m.Call(_colliders, &hasProp, &_prop);
        }
        ::BNM::Structures::Unity::Vector3 GeoCollisionPoint(::BNM::Structures::Unity::Vector3 sourcePos, ::BNM::Structures::Unity::Vector3 targetPos) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("GeoCollisionPoint"), {"sourcePos", "targetPos"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(sourcePos, targetPos);
        }
        ::GlobalNamespace::VRRig* get_attachedToRig() {
            static BNM::Method<::GlobalNamespace::VRRig*> _m = GetClass().GetMethod(O("get_attachedToRig"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_hasProp() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_hasProp"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsInstantiatingAsync() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsInstantiatingAsync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsLeftHand() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsLeftHand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t GetRelativePosRotLong() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetRelativePosRotLong"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
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
        template <typename TP0 = void*>
        void OnPropLoaded(TP0 handle) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPropLoaded"), {"handle"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handle);
        }
        void OnRoundStart() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRoundStart"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_attachedToRig(::GlobalNamespace::VRRig* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_attachedToRig"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_hasProp(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_hasProp"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsInstantiatingAsync(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsInstantiatingAsync"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetProp_1(bool isLeftHand, ::BNM::Structures::Unity::Vector3 propPos, ::BNM::Structures::Unity::Quaternion propRot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetProp"), {"isLeftHand", "propPos", "propRot"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isLeftHand, propPos, propRot);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SwitchHand(bool newIsLeftHand) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SwitchHand"), {"newIsLeftHand"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newIsLeftHand);
        }
        static bool TryPrepPropTemplate(::GameObject* _prop, bool _isLocal, ::GorillaTag_CosmeticSystem::CosmeticSO* debugCosmeticSO, ::BNM::Structures::Mono::List<::BNM::IL2CPP::Il2CppObject*>* _colliders, ::BNM::Structures::Mono::List<::GlobalNamespace::InteractionPoint*>* ref_interactionPoints, ::GlobalNamespace::PropHuntGrabbableProp*& grabbableProp, ::GlobalNamespace::PropHuntTaggableProp*& taggableProp) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryPrepPropTemplate"), {"_prop", "_isLocal", "debugCosmeticSO", "_colliders", "ref_interactionPoints", "grabbableProp", "taggableProp"});
            return _m.Call(_prop, _isLocal, debugCosmeticSO, _colliders, ref_interactionPoints, &grabbableProp, &taggableProp);
        }
    };
}
