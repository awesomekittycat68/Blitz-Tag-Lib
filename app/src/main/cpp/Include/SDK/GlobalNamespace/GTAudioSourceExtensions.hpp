#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTAudioSourceExtensions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTAudioSourceExtensions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static void _BetaLogIfAudioSourceIsNotActiveAndEnabled(::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_BetaLogIfAudioSourceIsNotActiveAndEnabled"), {"audioSource"});
            _m.Call(audioSource);
        }
        static void GTPause(::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPause"), {"audioSource"});
            _m.Call(audioSource);
        }
        static void GTPlay(::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlay"), {"audioSource"});
            _m.Call(audioSource);
        }
        static void GTPlay(::AudioSource* audioSource, uint64_t delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlay"), {"audioSource", "delay"});
            _m.Call(audioSource, delay);
        }
        static void GTPlayClipAtPoint(::AudioClip* clip, ::BNM::Structures::Unity::Vector3 position) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlayClipAtPoint"), {"clip", "position"});
            _m.Call(clip, position);
        }
        static void GTPlayClipAtPoint(::AudioClip* clip, ::BNM::Structures::Unity::Vector3 position, float volume) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlayClipAtPoint"), {"clip", "position", "volume"});
            _m.Call(clip, position, volume);
        }
        static void GTPlayDelayed(::AudioSource* audioSource, float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlayDelayed"), {"audioSource", "delay"});
            _m.Call(audioSource, delay);
        }
        template <typename TP1 = void*>
        static void GTPlayOneShot(::AudioSource* audioSource, TP1 clips, float volumeScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlayOneShot"), {"audioSource", "clips", "volumeScale"});
            _m.Call(audioSource, clips, volumeScale);
        }
        static void GTPlayOneShot(::AudioSource* audioSource, ::AudioClip* clip, float volumeScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlayOneShot"), {"audioSource", "clip", "volumeScale"});
            _m.Call(audioSource, clip, volumeScale);
        }
        static void GTPlayScheduled(::AudioSource* audioSource, double time) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTPlayScheduled"), {"audioSource", "time"});
            _m.Call(audioSource, time);
        }
        static void GTStop(::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTStop"), {"audioSource"});
            _m.Call(audioSource);
        }
        static void GTUnPause(::AudioSource* audioSource) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GTUnPause"), {"audioSource"});
            _m.Call(audioSource);
        }
    };
}
