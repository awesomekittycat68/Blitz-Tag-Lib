#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MusicManager_$FadeInVolumeCoroutine$d__7 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MusicManager").GetInnerClass("<FadeInVolumeCoroutine>d__7");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("duration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
