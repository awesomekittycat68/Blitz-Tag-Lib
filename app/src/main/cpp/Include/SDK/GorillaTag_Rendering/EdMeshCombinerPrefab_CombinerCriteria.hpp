#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/UnityLayer.hpp"

namespace GorillaTag_Rendering {
    struct EdMeshCombinerPrefab_CombinerCriteria : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Rendering", "EdMeshCombinerPrefab").GetInnerClass("CombinerCriteria");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasMeshCollider() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMeshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLightmapIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lightmapIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMat() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("mat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMeshCollPhysicsMat() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("meshCollPhysicsMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::UnityLayer GetObjectLayer() {
            static BNM::Field<::GlobalNamespace::UnityLayer> _field = GetClass().GetField(O("objectLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStaticFlags() {
            static BNM::Field<int> _field = GetClass().GetField(O("staticFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfExtraVelMaxMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfExtraVelMaxMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSurfExtraVelMultiplier() {
            static BNM::Field<float> _field = GetClass().GetField(O("surfExtraVelMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSurfOverrideIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("surfOverrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSurfSendOnTapEvent() {
            static BNM::Field<bool> _field = GetClass().GetField(O("surfSendOnTapEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHasMeshCollider(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasMeshCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightmapIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lightmapIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMat(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("mat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMeshCollPhysicsMat(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("meshCollPhysicsMat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectLayer(::GlobalNamespace::UnityLayer value) {
            static BNM::Field<::GlobalNamespace::UnityLayer> _field = GetClass().GetField(O("objectLayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticFlags(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("staticFlags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfExtraVelMaxMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfExtraVelMaxMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfExtraVelMultiplier(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("surfExtraVelMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfOverrideIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("surfOverrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfSendOnTapEvent(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("surfSendOnTapEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
