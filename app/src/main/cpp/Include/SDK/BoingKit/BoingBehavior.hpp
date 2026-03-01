#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BoingBase.hpp"
#include "BoingManager_TranslationLockSpace.hpp"
#include "BoingManager_UpdateMode.hpp"
#include "BoingWork_Output.hpp"
#include "BoingWork_Params.hpp"
#include "QuaternionSpring.hpp"
#include "Vector3Spring.hpp"

namespace BoingKit {
    struct BoingBehavior : ::BoingKit::BoingBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingBehavior");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BoingKit::Vector3Spring GetPositionSpring() {
            static BNM::Method<::BoingKit::Vector3Spring> _method = GetClass().GetMethod(O("get_PositionSpring"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPositionSpring(::BoingKit::Vector3Spring value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PositionSpring"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BoingKit::QuaternionSpring GetRotationSpring() {
            static BNM::Method<::BoingKit::QuaternionSpring> _method = GetClass().GetMethod(O("get_RotationSpring"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRotationSpring(::BoingKit::QuaternionSpring value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RotationSpring"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BoingKit::Vector3Spring GetScaleSpring() {
            static BNM::Method<::BoingKit::Vector3Spring> _method = GetClass().GetMethod(O("get_ScaleSpring"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetScaleSpring(::BoingKit::Vector3Spring value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ScaleSpring"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Unity::Vector3 GetCachedPositionLs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("CachedPositionLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCachedPositionWs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("CachedPositionWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetCachedRotationLs() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("CachedRotationLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetCachedRotationWs() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("CachedRotationWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetCachedScaleLs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("CachedScaleLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetCachedTransformValid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("CachedTransformValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnablePositionEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnablePositionEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableRotationEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableRotationEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableScaleEffect() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableScaleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetGlobalReactionUpVector() {
            static BNM::Field<bool> _field = GetClass().GetField(O("GlobalReactionUpVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetInitRebooted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("InitRebooted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLockTranslationX() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockTranslationX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLockTranslationY() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockTranslationY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLockTranslationZ() {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockTranslationZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingWork_Params GetParams() {
            static BNM::Field<::BoingKit::BoingWork_Params> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPositionSpringDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("PositionSpringDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRenderPositionWs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("RenderPositionWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetRenderRotationWs() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("RenderRotationWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetRenderScaleLs() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("RenderScaleLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRotationSpringDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RotationSpringDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetScaleSpringDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ScaleSpringDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::SharedBoingParams* GetSharedParams() {
            static BNM::Field<::BoingKit::SharedBoingParams*> _field = GetClass().GetField(O("SharedParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingManager_TranslationLockSpace GetTranslationLockSpace() {
            static BNM::Field<::BoingKit::BoingManager_TranslationLockSpace> _field = GetClass().GetField(O("TranslationLockSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoDDistanceCheck() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDDistanceCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoDPositionInfluence() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDPositionInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTwoDRotationInfluence() {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDRotationInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingManager_UpdateMode GetUpdateMode() {
            static BNM::Field<::BoingKit::BoingManager_UpdateMode> _field = GetClass().GetField(O("UpdateMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachedPositionLs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("CachedPositionLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedPositionWs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("CachedPositionWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedRotationLs(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("CachedRotationLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedRotationWs(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("CachedRotationWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedScaleLs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("CachedScaleLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCachedTransformValid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("CachedTransformValid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnablePositionEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnablePositionEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableRotationEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableRotationEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableScaleEffect(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableScaleEffect"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalReactionUpVector(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("GlobalReactionUpVector"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitRebooted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("InitRebooted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockTranslationX(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockTranslationX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockTranslationY(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockTranslationY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLockTranslationZ(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("LockTranslationZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParams(::BoingKit::BoingWork_Params value) {
            static BNM::Field<::BoingKit::BoingWork_Params> _field = GetClass().GetField(O("Params"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPositionSpringDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("PositionSpringDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderPositionWs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("RenderPositionWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderRotationWs(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("RenderRotationWs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderScaleLs(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("RenderScaleLs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotationSpringDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RotationSpringDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScaleSpringDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ScaleSpringDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSharedParams(::BoingKit::SharedBoingParams* value) {
            static BNM::Field<::BoingKit::SharedBoingParams*> _field = GetClass().GetField(O("SharedParams"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTranslationLockSpace(::BoingKit::BoingManager_TranslationLockSpace value) {
            static BNM::Field<::BoingKit::BoingManager_TranslationLockSpace> _field = GetClass().GetField(O("TranslationLockSpace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDDistanceCheck(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDDistanceCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDPositionInfluence(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDPositionInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTwoDRotationInfluence(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("TwoDRotationInfluence"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpdateMode(::BoingKit::BoingManager_UpdateMode value) {
            static BNM::Field<::BoingKit::BoingManager_UpdateMode> _field = GetClass().GetField(O("UpdateMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Execute(float dt) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Execute"), {"dt"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(dt);
        }
        void GatherOutput(::BoingKit::BoingWork_Output& o) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GatherOutput"), {"o"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&o);
        }
        ::BoingKit::Vector3Spring get_PositionSpring() {
            static BNM::Method<::BoingKit::Vector3Spring> _m = GetClass().GetMethod(O("get_PositionSpring"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BoingKit::QuaternionSpring get_RotationSpring() {
            static BNM::Method<::BoingKit::QuaternionSpring> _m = GetClass().GetMethod(O("get_RotationSpring"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BoingKit::Vector3Spring get_ScaleSpring() {
            static BNM::Method<::BoingKit::Vector3Spring> _m = GetClass().GetMethod(O("get_ScaleSpring"));
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
        void PrepareExecute() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PrepareExecute(bool accumulateEffectors) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrepareExecute"), {"accumulateEffectors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(accumulateEffectors);
        }
        void PullResults() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullResults"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PullResults(::BoingKit::BoingWork_Params& p) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PullResults"), {"p"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&p);
        }
        void Reboot() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reboot"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Register() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Restore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Restore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_PositionSpring(::BoingKit::Vector3Spring value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PositionSpring"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RotationSpring(::BoingKit::QuaternionSpring value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RotationSpring"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ScaleSpring(::BoingKit::Vector3Spring value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ScaleSpring"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Unregister() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateFlags() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFlags"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
