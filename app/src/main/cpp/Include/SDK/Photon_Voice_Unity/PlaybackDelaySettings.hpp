#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct PlaybackDelaySettings : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "PlaybackDelaySettings");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int DEFAULT_LOW = 200;
        static constexpr int DEFAULT_HIGH = 400;
        static constexpr int DEFAULT_MAX = 1000;
        int GetMaxDelayHard() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDelayHard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxDelaySoft() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDelaySoft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinDelaySoft() {
            static BNM::Field<int> _field = GetClass().GetField(O("MinDelaySoft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxDelayHard(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDelayHard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxDelaySoft(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxDelaySoft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinDelaySoft(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MinDelaySoft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
