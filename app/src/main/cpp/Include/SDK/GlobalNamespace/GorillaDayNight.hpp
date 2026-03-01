#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaDayNight : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaDayNight");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::GorillaDayNight* GetInstance() {
            static BNM::Field<::GlobalNamespace::GorillaDayNight*> field = GetClass().GetField("instance");
            return field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetDirsThread() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dirsThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetDone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("done"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFinishedStep() {
            static BNM::Field<bool> _field = GetClass().GetField(O("finishedStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFirstData() {
            static BNM::Field<int> _field = GetClass().GetField(O("firstData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetFromPixels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("fromPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetI() {
            static BNM::Field<int> _field = GetClass().GetField(O("i"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::GorillaDayNight* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::GorillaDayNight*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        int GetJ() {
            static BNM::Field<int> _field = GetClass().GetField(O("j"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetK() {
            static BNM::Field<int> _field = GetClass().GetField(O("k"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetL() {
            static BNM::Field<int> _field = GetClass().GetField(O("l"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaLightmapData*>* GetLightmapDatas() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaLightmapData*>*> _field = GetClass().GetField(O("lightmapDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLightsThread() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lightsThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetMixedPixels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("mixedPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSecondData() {
            static BNM::Field<int> _field = GetClass().GetField(O("secondData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("test"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetToPixels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("toPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWorking() {
            static BNM::Field<bool> _field = GetClass().GetField(O("working"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LightmapData* GetWorkingLightMapData() {
            static BNM::Field<::LightmapData*> _field = GetClass().GetField(O("workingLightMapData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::LightmapData*>* GetWorkingLightMapDatas() {
            static BNM::Field<::BNM::Structures::Mono::Array<::LightmapData*>*> _field = GetClass().GetField(O("workingLightMapDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDirsThread(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("dirsThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("done"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinishedStep(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("finishedStep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstData(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("firstData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromPixels(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("fromPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetI(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("i"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::GorillaDayNight* value) {
            static BNM::Field<::GlobalNamespace::GorillaDayNight*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetJ(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("j"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetK(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("k"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetL(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("l"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightmapDatas(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaLightmapData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaLightmapData*>*> _field = GetClass().GetField(O("lightmapDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLightsThread(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lightsThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMixedPixels(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("mixedPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSecondData(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("secondData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("test"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToPixels(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("toPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorking(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("working"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkingLightMapData(::LightmapData* value) {
            static BNM::Field<::LightmapData*> _field = GetClass().GetField(O("workingLightMapData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkingLightMapDatas(::BNM::Structures::Mono::Array<::LightmapData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::LightmapData*>*> _field = GetClass().GetField(O("workingLightMapDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoDirsStep() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoDirsStep"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoLightsStep() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoLightsStep"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void DoWork() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DoWork"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* LightMapSet(int setFirstData, int setSecondData, float setLerp) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("LightMapSet"), {"setFirstData", "setSecondData", "setLerp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(setFirstData, setSecondData, setLerp);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
