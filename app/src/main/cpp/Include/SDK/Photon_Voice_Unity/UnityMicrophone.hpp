#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct UnityMicrophone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "UnityMicrophone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetDevices() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_devices"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static void End(::BNM::Structures::Mono::String* deviceName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("End"), {"deviceName"});
            _m.Call(deviceName);
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* get_devices() {
            static BNM::Method<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_devices"));
            return _m.Call();
        }
        static void GetDeviceCaps(::BNM::Structures::Mono::String* deviceName, int& minFreq, int& maxFreq) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDeviceCaps"), {"deviceName", "minFreq", "maxFreq"});
            _m.Call(deviceName, &minFreq, &maxFreq);
        }
        static int GetPosition(::BNM::Structures::Mono::String* deviceName) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetPosition"), {"deviceName"});
            return _m.Call(deviceName);
        }
        static bool IsRecording(::BNM::Structures::Mono::String* deviceName) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsRecording"), {"deviceName"});
            return _m.Call(deviceName);
        }
        static ::AudioClip* Start(::BNM::Structures::Mono::String* deviceName, bool loop, int lengthSec, int frequency) {
            static BNM::Method<::AudioClip*> _m = GetClass().GetMethod(O("Start"), {"deviceName", "loop", "lengthSec", "frequency"});
            return _m.Call(deviceName, loop, lengthSec, frequency);
        }
    };
}
