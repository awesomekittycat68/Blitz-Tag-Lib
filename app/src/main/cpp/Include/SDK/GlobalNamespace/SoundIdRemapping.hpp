#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SoundIdRemapping : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SoundIdRemapping");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetSoundIn() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SoundIn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSoundOut() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SoundOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetSoundIn_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("soundIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSoundOut_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("soundOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSoundIn(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("soundIn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundOut(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("soundOut"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_SoundIn() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SoundIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SoundOut() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SoundOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
