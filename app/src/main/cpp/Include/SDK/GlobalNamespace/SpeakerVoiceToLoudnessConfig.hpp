#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SpeakerVoiceToLoudnessConfig_SerializedConfig.hpp"

namespace GlobalNamespace {
    struct SpeakerVoiceToLoudnessConfig : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SpeakerVoiceToLoudnessConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* k_titleDataKey = "SpeakerVoiceToLoudnessConfig";
        bool GetEnableLoudnessLimit() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_EnableLoudnessLimit"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        float GetLoudnessLimitThreshold() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_LoudnessLimitThreshold"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig GetKConfig() {
            static BNM::Field<::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig> _field = GetClass().GetField(O("k_config"));
            return _field.Get();
        }
        static void SetKConfig(::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig value) {
            static BNM::Field<::GlobalNamespace::SpeakerVoiceToLoudnessConfig_SerializedConfig> _field = GetClass().GetField(O("k_config"));
            _field.Set(value);
        }
        static bool get_EnableLoudnessLimit() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_EnableLoudnessLimit"));
            return _m.Call();
        }
        static float get_LoudnessLimitThreshold() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_LoudnessLimitThreshold"));
            return _m.Call();
        }
        static void OnTitleDataCacheError(::PlayFab::PlayFabError* errorMsg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataCacheError"), {"errorMsg"});
            _m.Call(errorMsg);
        }
        static void OnTitleDataCacheReady(::GorillaNetworking::PlayFabTitleDataCache* titleDataCache) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataCacheReady"), {"titleDataCache"});
            _m.Call(titleDataCache);
        }
        static void OnTitleDataCacheRespsonse(::BNM::Structures::Mono::String* json) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTitleDataCacheRespsonse"), {"json"});
            _m.Call(json);
        }
        static void StaticLoad() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StaticLoad"));
            _m.Call();
        }
    };
}
