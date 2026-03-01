#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BetterDayNightManager_Season.hpp"
#include "BetterDayNightManager_WeatherType.hpp"
#include "ShaderHashId.hpp"
#include "TimeSettings.hpp"

namespace GlobalNamespace {
    struct BetterDayNightManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BetterDayNightManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GlobalNamespace::BetterDayNightManager* GetInstance() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int TIME_OF_DAY_COUNT = 10;
        ::BNM::Structures::Mono::String* GetCurrentTimeOfDay() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_currentTimeOfDay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCurrentTimeOfDay(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentTimeOfDay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        float GetNormalizedTimeOfDay() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_NormalizedTimeOfDay"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<double>* GetTimeOfDayRange() {
            static BNM::Method<::BNM::Structures::Mono::Array<double>*> _method = GetClass().GetMethod(O("get_timeOfDayRange"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::ShaderHashId GetColor() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_Color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightLerpValue() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightLerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightSky2Tex1() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky2Tex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightSky2Tex2() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky2Tex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightSky3Tex1() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky3Tex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightSky3Tex2() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky3Tex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightSkyTex1() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSkyTex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ShaderHashId GetGlobalDayNightSkyTex2() {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSkyTex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::PerSceneRenderData*>* GetAllScenesRenderData() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PerSceneRenderData*>*> _field = GetClass().GetField(O("allScenesRenderData"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetAnimatingLightFlash() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animatingLightFlash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetBaseSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("baseSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetBeachDayNightSkyboxTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("beachDayNightSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetCloudsDayNightSkyboxTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("cloudsDayNightSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Collider*>* GetCollidersToAddToWeatherSystems() {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("collidersToAddToWeatherSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetColorFrom() {
            static BNM::Field<float> _field = GetClass().GetField(O("colorFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetColorFromDarker() {
            static BNM::Field<float> _field = GetClass().GetField(O("colorFromDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetColorTo() {
            static BNM::Field<float> _field = GetClass().GetField(O("colorTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetColorToDarker() {
            static BNM::Field<float> _field = GetClass().GetField(O("colorToDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetComputerInit() {
            static BNM::Field<bool> _field = GetClass().GetField(O("computerInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCurrentIndexSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("currentIndexSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentLerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager_Season GetCurrentSeason() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_Season> _field = GetClass().GetField(O("currentSeason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TimeSettings GetCurrentSetting() {
            static BNM::Field<::GlobalNamespace::TimeSettings> _field = GetClass().GetField(O("currentSetting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetCurrentTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentTimeIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentTimeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrentTimestep() {
            static BNM::Field<float> _field = GetClass().GetField(O("currentTimestep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentWeatherCycle() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentWeatherCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentWeatherIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentWeatherIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetDayNightLightmapNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("dayNightLightmapNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetDayNightSkyboxTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("dayNightSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetDayNightSupportedMaterials() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("dayNightSupportedMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetDayNightSupportedMaterialsCutout() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("dayNightSupportedMaterialsCutout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetDayNightWeatherLightmapNames() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("dayNightWeatherLightmapNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Texture2D*>* GetDayNightWeatherSkyboxTextures() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("dayNightWeatherSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetFromSky() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetFromSky2() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromSky2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetFromSky3() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromSky3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFromWeatherIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("fromWeatherIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetGameEpochDay() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("gameEpochDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetGorillaUnlit() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("gorillaUnlit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetGorillaUnlitCutout() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("gorillaUnlitCutout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetH() {
            static BNM::Field<float> _field = GetClass().GetField(O("h"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetInitialDayCycles() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("initialDayCycles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::BetterDayNightManager* GetInstance_f() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        int GetLastIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLastTimeChecked() {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTimeChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxRainDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRainDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMySeed() {
            static BNM::Field<int> _field = GetClass().GetField(O("mySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOverrideIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("overrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideWeather() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BetterDayNightManager_WeatherType GetOverrideWeatherType() {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_WeatherType> _field = GetClass().GetField(O("overrideWeatherType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRainChance() {
            static BNM::Field<float> _field = GetClass().GetField(O("rainChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRainDuration() {
            static BNM::Field<int> _field = GetClass().GetField(O("rainDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetRandomNumberGenerator() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("randomNumberGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRemainingSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetS() {
            static BNM::Field<float> _field = GetClass().GetField(O("s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>* GetScheduledEvents() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*> _field = GetClass().GetField(O("scheduledEvents"));
            return _field.Get();
        }
        bool GetShouldRepopulate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRepopulate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetStandard() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("standard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetStandardCutout() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("standardCutout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetStandardMaterialsUnlit() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("standardMaterialsUnlit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Material*>* GetStandardMaterialsUnlitDarker() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("standardMaterialsUnlitDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetStandardUnlitColor() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("standardUnlitColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetStandardUnlitColorWithPremadeColorDarker() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("standardUnlitColorWithPremadeColorDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<double>* GetSummerTimeOfDayRange() {
            static BNM::Field<::BNM::Structures::Mono::Array<double>*> _field = GetClass().GetField(O("summerTimeOfDayRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTempLerp() {
            static BNM::Field<float> _field = GetClass().GetField(O("tempLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Func<int, int>* GetTimeIndexOverrideFunc() {
            static BNM::Field<::BNM::Structures::Mono::Func<int, int>*> _field = GetClass().GetField(O("timeIndexOverrideFunc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTimeMultiplier() {
            static BNM::Field<double> _field = GetClass().GetField(O("timeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetToSky() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetToSky2() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toSky2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetToSky3() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toSky3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTotalHours() {
            static BNM::Field<double> _field = GetClass().GetField(O("totalHours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetTotalSeconds() {
            static BNM::Field<double> _field = GetClass().GetField(O("totalSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetToWeatherIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("toWeatherIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetV() {
            static BNM::Field<float> _field = GetClass().GetField(O("v"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::BetterDayNightManager_WeatherType>* GetWeatherCycle() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BetterDayNightManager_WeatherType>*> _field = GetClass().GetField(O("weatherCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>* GetWeatherSystems() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>*> _field = GetClass().GetField(O("weatherSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<double>* GetWinterTimeOfDayRange() {
            static BNM::Field<::BNM::Structures::Mono::Array<double>*> _field = GetClass().GetField(O("winterTimeOfDayRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetColor(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_Color"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightLerpValue(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightLerpValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightSky2Tex1(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky2Tex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightSky2Tex2(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky2Tex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightSky3Tex1(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky3Tex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightSky3Tex2(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSky3Tex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightSkyTex1(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSkyTex1"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGlobalDayNightSkyTex2(::GlobalNamespace::ShaderHashId value) {
            static BNM::Field<::GlobalNamespace::ShaderHashId> _field = GetClass().GetField(O("_GlobalDayNightSkyTex2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetAllScenesRenderData(::BNM::Structures::Mono::List<::GlobalNamespace::PerSceneRenderData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::PerSceneRenderData*>*> _field = GetClass().GetField(O("allScenesRenderData"));
            _field.Set(value);
        }
        void SetAnimatingLightFlash(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("animatingLightFlash"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBaseSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("baseSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBeachDayNightSkyboxTextures(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("beachDayNightSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCloudsDayNightSkyboxTextures(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("cloudsDayNightSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCollidersToAddToWeatherSystems(::BNM::Structures::Mono::List<::Collider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Collider*>*> _field = GetClass().GetField(O("collidersToAddToWeatherSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorFrom(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("colorFrom"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorFromDarker(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("colorFromDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorTo(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("colorTo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetColorToDarker(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("colorToDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputerInit(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("computerInit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentIndexSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("currentIndexSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentLerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSeason(::GlobalNamespace::BetterDayNightManager_Season value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_Season> _field = GetClass().GetField(O("currentSeason"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSetting(::GlobalNamespace::TimeSettings value) {
            static BNM::Field<::GlobalNamespace::TimeSettings> _field = GetClass().GetField(O("currentSetting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("currentTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTimeIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentTimeIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentTimestep(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currentTimestep"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentWeatherCycle(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentWeatherCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentWeatherIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentWeatherIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightLightmapNames(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("dayNightLightmapNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightSkyboxTextures(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("dayNightSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightSupportedMaterials(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("dayNightSupportedMaterials"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightSupportedMaterialsCutout(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("dayNightSupportedMaterialsCutout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightWeatherLightmapNames(::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("dayNightWeatherLightmapNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDayNightWeatherSkyboxTextures(::BNM::Structures::Mono::Array<::Texture2D*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Texture2D*>*> _field = GetClass().GetField(O("dayNightWeatherSkyboxTextures"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromSky(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromSky2(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromSky2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromSky3(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("fromSky3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFromWeatherIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fromWeatherIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameEpochDay(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("gameEpochDay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaUnlit(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("gorillaUnlit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGorillaUnlitCutout(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("gorillaUnlitCutout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetH(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("h"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialDayCycles(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("initialDayCycles"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GlobalNamespace::BetterDayNightManager* value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetLastIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastTimeChecked(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("lastTimeChecked"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxRainDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxRainDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMySeed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("mySeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("overrideIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideWeather(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideWeather"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideWeatherType(::GlobalNamespace::BetterDayNightManager_WeatherType value) {
            static BNM::Field<::GlobalNamespace::BetterDayNightManager_WeatherType> _field = GetClass().GetField(O("overrideWeatherType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRainChance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rainChance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRainDuration(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("rainDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRandomNumberGenerator(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("randomNumberGenerator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemainingSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("remainingSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetS(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("s"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetShouldRepopulate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("shouldRepopulate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandard(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("standard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandardCutout(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("standardCutout"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandardMaterialsUnlit(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("standardMaterialsUnlit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandardMaterialsUnlitDarker(::BNM::Structures::Mono::Array<::Material*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::Material*>*> _field = GetClass().GetField(O("standardMaterialsUnlitDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandardUnlitColor(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("standardUnlitColor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStandardUnlitColorWithPremadeColorDarker(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("standardUnlitColorWithPremadeColorDarker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSummerTimeOfDayRange(::BNM::Structures::Mono::Array<double>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<double>*> _field = GetClass().GetField(O("summerTimeOfDayRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTempLerp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("tempLerp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeIndexOverrideFunc(::BNM::Structures::Mono::Func<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Func<int, int>*> _field = GetClass().GetField(O("timeIndexOverrideFunc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimeMultiplier(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("timeMultiplier"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToSky(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toSky"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToSky2(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toSky2"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToSky3(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("toSky3"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalHours(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("totalHours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalSeconds(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("totalSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToWeatherIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("toWeatherIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetV(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("v"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherCycle(::BNM::Structures::Mono::Array<::GlobalNamespace::BetterDayNightManager_WeatherType>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::BetterDayNightManager_WeatherType>*> _field = GetClass().GetField(O("weatherCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWeatherSystems(::BNM::Structures::Mono::Array<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::AddCollidersToParticleSystemTriggers*>*> _field = GetClass().GetField(O("weatherSystems"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWinterTimeOfDayRange(::BNM::Structures::Mono::Array<double>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<double>*> _field = GetClass().GetField(O("winterTimeOfDayRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AnimateLightFlash(int index, float fadeInDuration, float holdDuration, float fadeOutDuration) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AnimateLightFlash"), {"index", "fadeInDuration", "holdDuration", "fadeOutDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index, fadeInDuration, holdDuration, fadeOutDuration);
        }
        ::BNM::Coroutine::IEnumerator* AnimateLightFlashCo(int index, float fadeInDuration, float holdDuration, float fadeOutDuration) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("AnimateLightFlashCo"), {"index", "fadeInDuration", "holdDuration", "fadeOutDuration"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index, fadeInDuration, holdDuration, fadeOutDuration);
        }
        void ChangeLerps(float newLerp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeLerps"), {"newLerp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(newLerp);
        }
        void ChangeMaps(int fromIndex, int toIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeMaps"), {"fromIndex", "toIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromIndex, toIndex);
        }
        void ClearFixedWeather() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearFixedWeather"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::BetterDayNightManager_WeatherType CurrentWeather() {
            static BNM::Method<::GlobalNamespace::BetterDayNightManager_WeatherType> _m = GetClass().GetMethod(O("CurrentWeather"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void FastForward(float seconds) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FastForward"), {"seconds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seconds);
        }
        void GenerateWeatherEventTimes() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GenerateWeatherEventTimes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_currentTimeOfDay() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_currentTimeOfDay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_NormalizedTimeOfDay() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_NormalizedTimeOfDay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<double>* get_timeOfDayRange() {
            static BNM::Method<::BNM::Structures::Mono::Array<double>*> _m = GetClass().GetMethod(O("get_timeOfDayRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* InitialUpdate() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("InitialUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BetterDayNightManager_WeatherType LastWeather() {
            static BNM::Method<::GlobalNamespace::BetterDayNightManager_WeatherType> _m = GetClass().GetMethod(O("LastWeather"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Vector4 MaterialColorCorrection(::BNM::Structures::Unity::Vector4 color) {
            static BNM::Method<::BNM::Structures::Unity::Vector4> _m = GetClass().GetMethod(O("MaterialColorCorrection"), {"color"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(color);
        }
        ::GlobalNamespace::BetterDayNightManager_WeatherType NextWeather() {
            static BNM::Method<::GlobalNamespace::BetterDayNightManager_WeatherType> _m = GetClass().GetMethod(O("NextWeather"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
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
        void PopulateAllLightmaps() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateAllLightmaps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PopulateAllLightmaps(int fromIndex, int toIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PopulateAllLightmaps"), {"fromIndex", "toIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fromIndex, toIndex);
        }
        static void Register(::GlobalNamespace::PerSceneRenderData* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"data"});
            _m.Call(data);
        }
        static int RegisterScheduledEvent(int hour, ::BNM::Structures::Mono::Action<>* action) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("RegisterScheduledEvent"), {"hour", "action"});
            return _m.Call(hour, action);
        }
        void RequestRepopulateLightmaps() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RequestRepopulateLightmaps"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_currentTimeOfDay(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentTimeOfDay"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetFixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType weather) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetFixedWeather"), {"weather"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(weather);
        }
        void SetOverrideIndex_1(int index) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetOverrideIndex"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(index);
        }
        void SetTimeIndexOverrideFunction(::BNM::Structures::Mono::Func<int, int>* overrideFunction) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTimeIndexOverrideFunction"), {"overrideFunction"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(overrideFunction);
        }
        void SetTimeOfDay(int timeIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTimeOfDay"), {"timeIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(timeIndex);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Unregister(::GlobalNamespace::PerSceneRenderData* data) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"data"});
            _m.Call(data);
        }
        static void UnregisterScheduledEvent(int id) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterScheduledEvent"), {"id"});
            _m.Call(id);
        }
        void UnsetTimeIndexOverrideFunction() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnsetTimeIndexOverrideFunction"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateTimeOfDay() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateTimeOfDay"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
