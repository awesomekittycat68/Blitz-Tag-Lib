#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTriggerBox.hpp"
#include "SizeChanger_ChangerType.hpp"

namespace GlobalNamespace {
    struct SizeChanger : ::GlobalNamespace::GorillaTriggerBox {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SizeChanger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetEndPos() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_EndPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetMaxScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MaxScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetMinScale() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_MinScale"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::SizeChanger_ChangerType GetMyType() {
            static BNM::Method<::GlobalNamespace::SizeChanger_ChangerType> _method = GetClass().GetMethod(O("get_MyType"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSizeLayerMask() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLayerMask"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::Transform* GetStartPos() {
            static BNM::Method<::Transform*> _method = GetClass().GetMethod(O("get_StartPos"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetStaticEasing() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_StaticEasing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetAffectLayerA() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerB() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAffectLayerD() {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAlwaysControlWhenEntered() {
            static BNM::Field<bool> _field = GetClass().GetField(O("alwaysControlWhenEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAprilFoolsEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("aprilFoolsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEndPos_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetEndRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("endRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChangerTrigger* GetEnterTrigger() {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("enterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChangerTrigger* GetExitOnEnterTrigger() {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("exitOnEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChangerTrigger* GetExitTrigger() {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("exitTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxScale_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMinScale_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Collider* GetMyCollider() {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SizeChanger_ChangerType GetMyType_f() {
            static BNM::Field<::GlobalNamespace::SizeChanger_ChangerType> _field = GetClass().GetField(O("myType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnEnter() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnExit() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPriority() {
            static BNM::Field<int> _field = GetClass().GetField(O("priority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetScaleAwayFromPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("scaleAwayFromPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStartPos_f() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("startRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStaticEasing_f() {
            static BNM::Field<float> _field = GetClass().GetField(O("staticEasing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetUnregisteredPresentRigs() {
            static BNM::Field<void*> _field = GetClass().GetField(O("unregisteredPresentRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAffectLayerA(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerB(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAffectLayerD(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("affectLayerD"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAlwaysControlWhenEntered(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("alwaysControlWhenEntered"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAprilFoolsEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("aprilFoolsEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("endRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterTrigger(::GlobalNamespace::SizeChangerTrigger* value) {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("enterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger* value) {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("exitOnEnterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitTrigger(::GlobalNamespace::SizeChangerTrigger* value) {
            static BNM::Field<::GlobalNamespace::SizeChangerTrigger*> _field = GetClass().GetField(O("exitTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("minScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyCollider(::Collider* value) {
            static BNM::Field<::Collider*> _field = GetClass().GetField(O("myCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyType(::GlobalNamespace::SizeChanger_ChangerType value) {
            static BNM::Field<::GlobalNamespace::SizeChanger_ChangerType> _field = GetClass().GetField(O("myType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnEnter(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnEnter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnExit(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("OnExit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPriority(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("priority"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleAwayFromPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("scaleAwayFromPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPos(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticEasing(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("staticEasing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUnregisteredPresentRigs(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("unregisteredPresentRigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void acceptRig(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("acceptRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
        void AddEnterTrigger(::GlobalNamespace::SizeChangerTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddEnterTrigger"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        void AddExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddExitOnEnterTrigger"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 ClosestPoint(::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("ClosestPoint"), {"position"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(position);
        }
        ::Transform* get_EndPos() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_EndPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MaxScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MaxScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_MinScale() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_MinScale"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SizeChanger_ChangerType get_MyType() {
            static BNM::Method<::GlobalNamespace::SizeChanger_ChangerType> _m = GetClass().GetMethod(O("get_MyType"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SizeLayerMask() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLayerMask"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Transform* get_StartPos() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("get_StartPos"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_StaticEasing() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_StaticEasing"));
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
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void RemoveEnterTrigger(::GlobalNamespace::SizeChangerTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveEnterTrigger"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        void RemoveExitOnEnterTrigger(::GlobalNamespace::SizeChangerTrigger* trigger) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveExitOnEnterTrigger"), {"trigger"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(trigger);
        }
        void SetScaleCenterPoint(::Transform* centerPoint) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetScaleCenterPoint"), {"centerPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(centerPoint);
        }
        bool TryGetScaleCenterPoint(::BNM::Structures::Unity::Vector3& centerPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetScaleCenterPoint"), {"centerPoint"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&centerPoint);
        }
        void unacceptRig(::GlobalNamespace::VRRig* rig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("unacceptRig"), {"rig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig);
        }
    };
}
