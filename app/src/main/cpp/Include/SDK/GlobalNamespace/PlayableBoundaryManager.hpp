#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ShaderHashId.hpp"

namespace GlobalNamespace {
    struct PlayableBoundaryManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayableBoundaryManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int _k_cylinders_count = 8;
        bool GetShouldRender() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_ShouldRender"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetShouldRender(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ShouldRender"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>* GetCylindersCenters() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>*> _field = GetClass().GetField(O("_cylinders_centers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>* GetCylindersRadiusHeights() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Vector4>*> _field = GetClass().GetField(O("_cylinders_radiusHeights"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTGameModesPlayableBoundaryCylindersCenters() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_Cylinders_Centers"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTGameModesPlayableBoundaryCylindersRadiusHeights() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_Cylinders_RadiusHeights"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTGameModesPlayableBoundaryIsEnabled() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_IsEnabled"));
            return _field.Get();
        }
        static ::GlobalNamespace::ShaderHashId GetGTGameModesPlayableBoundaryNonZeroSmoothRadius() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_NonZeroSmoothRadius"));
            return _field.Get();
        }
        int GetLastFrameUpdated() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastFrameUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Unity::Vector3 GetKHashVec() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("kHashVec"));
            return _field.Get();
        }
        float GetMBigCylinderRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_bigCylinderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetMSmallCylindersMoveTimeScale() {
            static BNM::Field<double> _field = GetClass().GetField(O("m_smallCylindersMoveTimeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMSmallCylindersRadius() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_smallCylindersRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMSmoothFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_smoothFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRadiusScale() {
            static BNM::Field<float> _field = GetClass().GetField(O("radiusScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::PlayableBoundaryTracker*>* GetTracked() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PlayableBoundaryTracker*>*> _field = GetClass().GetField(O("tracked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetGTGameModesPlayableBoundaryCylindersCenters(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_Cylinders_Centers"));
            _field.Set(value);
        }
        static void SetGTGameModesPlayableBoundaryCylindersRadiusHeights(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_Cylinders_RadiusHeights"));
            _field.Set(value);
        }
        static void SetGTGameModesPlayableBoundaryIsEnabled(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_IsEnabled"));
            _field.Set(value);
        }
        static void SetGTGameModesPlayableBoundaryNonZeroSmoothRadius(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GTGameModes_PlayableBoundary_NonZeroSmoothRadius"));
            _field.Set(value);
        }
        void SetLastFrameUpdated(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastFrameUpdated"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetKHashVec(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("kHashVec"));
            _field.Set(value);
        }
        void SetMBigCylinderRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_bigCylinderRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSmallCylindersMoveTimeScale(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("m_smallCylindersMoveTimeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSmallCylindersRadius(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_smallCylindersRadius"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSmoothFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_smoothFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRadiusScale(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("radiusScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTracked(::BNM::Structures::Mono::List<::GlobalNamespace::PlayableBoundaryTracker*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PlayableBoundaryTracker*>*> _field = GetClass().GetField(O("tracked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        float _GetSignedDistanceToBoundary(TP0 tracked_center, float tracked_radius) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("_GetSignedDistanceToBoundary"), {"tracked_center", "tracked_radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tracked_center, tracked_radius);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool get_ShouldRender() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_ShouldRender"));
            return _m.Call();
        }
        float GetSmoothFactor() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSmoothFactor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Unity::Vector3& Hash3(float n) {
            static BNM::Method<::BNM::Structures::Unity::Vector3&> _m = GetClass().GetMethod(O("Hash3"), {"n"});
            return _m.Call(n);
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
        float SDFSmoothMerge(float signedDist1, float signedDist2, float smoothRadius) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("SDFSmoothMerge"), {"signedDist1", "signedDist2", "smoothRadius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(signedDist1, signedDist2, smoothRadius);
        }
        static void set_ShouldRender(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ShouldRender"), {"value"});
            _m.Call(value);
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateSim() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateSim"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
