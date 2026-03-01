#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Photon_Voice_Unity/MicWrapper.hpp"

namespace GorillaTag_Audio {
    struct GTMicWrapper : ::Photon_Voice_Unity::MicWrapper {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Audio", "GTMicWrapper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAllowPitchAdjustment() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_allowPitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetAllowVolumeAdjustment() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_allowVolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetGRover() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_gRover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPitchAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("_pitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVolumeAdjustment() {
            static BNM::Field<float> _field = GetClass().GetField(O("_volumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetAnaFreq() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("AnaFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetAnaMagn() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("AnaMagn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetFfTworksp() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("FfTworksp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetInFifo() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("InFifo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetLastPhase() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("LastPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetMaxFrameLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxFrameLength"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetOutFifo() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("OutFifo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetOutputAccum() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("OutputAccum"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSumPhase() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("SumPhase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSynFreq() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("SynFreq"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetSynMagn() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("SynMagn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllowPitchAdjustment(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_allowPitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAllowVolumeAdjustment(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_allowVolumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGRover(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_gRover"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPitchAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_pitchAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVolumeAdjustment(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("_volumeAdjustment"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PitchShift(float pitchShift, int64_t numSampsToProcess, float sampleRate, ::BNM::Structures::Mono::Array<float>* indata) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PitchShift"), {"pitchShift", "numSampsToProcess", "sampleRate", "indata"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pitchShift, numSampsToProcess, sampleRate, indata);
        }
        void PitchShift(float pitchShift, int64_t numSampsToProcess, int64_t fftFrameSize, int64_t osamp, float sampleRate, ::BNM::Structures::Mono::Array<float>* indata) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PitchShift"), {"pitchShift", "numSampsToProcess", "fftFrameSize", "osamp", "sampleRate", "indata"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pitchShift, numSampsToProcess, fftFrameSize, osamp, sampleRate, indata);
        }
        bool Read(::BNM::Structures::Mono::Array<float>* buffer) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Read"), {"buffer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer);
        }
        void ShortTimeFourierTransform(::BNM::Structures::Mono::Array<float>* fftBuffer, int64_t fftFrameSize, int64_t sign) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ShortTimeFourierTransform"), {"fftBuffer", "fftFrameSize", "sign"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fftBuffer, fftFrameSize, sign);
        }
        void UpdatePitchAdjustment(bool allow, float pitchAdjustment) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdatePitchAdjustment"), {"allow", "pitchAdjustment"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allow, pitchAdjustment);
        }
        void UpdateVolumeAdjustment(bool allow, float volumeAdjustment) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateVolumeAdjustment"), {"allow", "volumeAdjustment"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allow, volumeAdjustment);
        }
        void UpdateWrapper(bool allowPitchAdjustment, float pitchAdjustment, bool allowVolumeAdjustment, float volumeAdjustment) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateWrapper"), {"allowPitchAdjustment", "pitchAdjustment", "allowVolumeAdjustment", "volumeAdjustment"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(allowPitchAdjustment, pitchAdjustment, allowVolumeAdjustment, volumeAdjustment);
        }
    };
}
