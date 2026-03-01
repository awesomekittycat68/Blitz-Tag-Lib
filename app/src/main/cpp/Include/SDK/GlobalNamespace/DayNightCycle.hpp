#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "DayNightCycle_LerpBakedLightingJob.hpp"

namespace GlobalNamespace {
    struct DayNightCycle : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DayNightCycle");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Texture2D* GetDayMap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_dayMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetSunriseMap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_sunriseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentColumn() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentColumn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRow() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentRowInSubtexture() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRowInSubtexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSubTexture() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSubTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFinishedCoroutine() {
            static BNM::Field<bool> _field = GetClass().GetField(O("finishedCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetFromMap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetFromPixels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("fromPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsComplete() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DayNightCycle_LerpBakedLightingJob GetJob() {
            static BNM::Field<::GlobalNamespace::DayNightCycle_LerpBakedLightingJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetJobHandle() {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetJobStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("jobStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLerpAmount() {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetMixedPixels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("mixedPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::LightmapData* GetNewData() {
            static BNM::Field<::LightmapData*> _field = GetClass().GetField(O("newData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::LightmapData*>* GetNewDatas() {
            static BNM::Field<::BNM::Structures::Mono::Array<::LightmapData*>*> _field = GetClass().GetField(O("newDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetNewTexture() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("newTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartCoroutine() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartedCoroutine() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startedCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetStartJob() {
            static BNM::Field<bool> _field = GetClass().GetField(O("startJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetSubTextureArray() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("subTextureArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSubTextureSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("subTextureSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSwitchTimeTaken() {
            static BNM::Field<float> _field = GetClass().GetField(O("switchTimeTaken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTextureHeight() {
            static BNM::Field<int> _field = GetClass().GetField(O("textureHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTextureWidth() {
            static BNM::Field<int> _field = GetClass().GetField(O("textureWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeTakenDuringJob() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTakenDuringJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeTakenPostJob() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTakenPostJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimeTakenStartingJob() {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTakenStartingJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetToMap() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetToPixels() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("toPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetWorkBlockFrom() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("workBlockFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetWorkBlockMix() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("workBlockMix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* GetWorkBlockTo() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("workBlockTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDayMap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_dayMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSunriseMap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("_sunriseMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentColumn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentColumn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRow(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentRowInSubtexture(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentRowInSubtexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSubTexture(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSubTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFinishedCoroutine(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("finishedCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromMap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromPixels(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("fromPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsComplete(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJob(::GlobalNamespace::DayNightCycle_LerpBakedLightingJob value) {
            static BNM::Field<::GlobalNamespace::DayNightCycle_LerpBakedLightingJob> _field = GetClass().GetField(O("job"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobHandle(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("jobHandle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetJobStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("jobStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpAmount(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lerpAmount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMixedPixels(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("mixedPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewData(::LightmapData* value) {
            static BNM::Field<::LightmapData*> _field = GetClass().GetField(O("newData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewDatas(::BNM::Structures::Mono::Array<::LightmapData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::LightmapData*>*> _field = GetClass().GetField(O("newDatas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewTexture(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("newTexture"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartCoroutine(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartedCoroutine(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startedCoroutine"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartJob(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("startJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubTextureArray(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("subTextureArray"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSubTextureSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("subTextureSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwitchTimeTaken(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("switchTimeTaken"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextureHeight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("textureHeight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTextureWidth(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("textureWidth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeTakenDuringJob(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTakenDuringJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeTakenPostJob(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTakenPostJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeTakenStartingJob(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timeTakenStartingJob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToMap(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToPixels(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("toPixels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkBlockFrom(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("workBlockFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkBlockMix(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("workBlockMix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWorkBlockTo(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Color>*> _field = GetClass().GetField(O("workBlockTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* UpdateWork() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("UpdateWork"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
