#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct AndroidAudioInParameters : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "AndroidAudioInParameters");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetEnableAEC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableAEC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableAGC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableAGC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEnableNS() {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableNS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnableAEC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableAEC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableAGC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableAGC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnableNS(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("EnableNS"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
