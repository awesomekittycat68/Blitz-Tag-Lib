#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice {
    template <typename T>
    struct AudioUtil_TempoUp$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "AudioUtil").GetInnerClass("TempoUp`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetChannels() {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSign() {
            static BNM::Field<int> _field = GetClass().GetField(O("sign"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSizeofT() {
            static BNM::Field<int> _field = GetClass().GetField(O("sizeofT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSkipFactor() {
            static BNM::Field<int> _field = GetClass().GetField(O("skipFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSkipGroup() {
            static BNM::Field<int> _field = GetClass().GetField(O("skipGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSkipping() {
            static BNM::Field<bool> _field = GetClass().GetField(O("skipping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWaveCnt() {
            static BNM::Field<int> _field = GetClass().GetField(O("waveCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChannels(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("channels"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSign(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sign"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipFactor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("skipFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipGroup(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("skipGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSkipping(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("skipping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaveCnt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("waveCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Begin(int channels, int changePerc, int skipGroup) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Begin"), {"channels", "changePerc", "skipGroup"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(channels, changePerc, skipGroup);
        }
        int End(::BNM::Structures::Mono::Array<T>* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("End"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s);
        }
        int endFloat(::BNM::Structures::Mono::Array<float>* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("endFloat"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s);
        }
        int endShort(::BNM::Structures::Mono::Array<int16_t>* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("endShort"), {"s"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s);
        }
        int Process(::BNM::Structures::Mono::Array<T>* s, ::BNM::Structures::Mono::Array<T>* d) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Process"), {"s", "d"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s, d);
        }
        int processFloat(::BNM::Structures::Mono::Array<float>* s, ::BNM::Structures::Mono::Array<float>* d) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("processFloat"), {"s", "d"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s, d);
        }
        int processShort(::BNM::Structures::Mono::Array<int16_t>* s, ::BNM::Structures::Mono::Array<int16_t>* d) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("processShort"), {"s", "d"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(s, d);
        }
    };
}
