#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CSCore_Codecs_WAV {
    struct WaveWriter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CSCore.Codecs.WAV", "WaveWriter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsDisposed() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDisposed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsDisposing() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsDisposing"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCloseStream() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_closeStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDataLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("_dataLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDisposed_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isDisposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsDisposing_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isDisposing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetStream() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_stream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::CSCore::WaveFormat* GetWaveFormat() {
            static BNM::Field<::CSCore::WaveFormat*> _field = GetClass().GetField(O("_waveFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetWaveStartPosition() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_waveStartPosition"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetWriter() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_writer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDataLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_dataLength"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDisposed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isDisposed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsDisposing(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isDisposing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStream(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_stream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWriter(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_writer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckObjectDisposed() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckObjectDisposed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_IsDisposed() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDisposed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsDisposing() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsDisposing"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Write(uint8_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Write(int16_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Write(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Write(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, offset, count);
        }
        void WriteDataChunk() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteDataChunk"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteFmtChunk() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteFmtChunk"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteHeader() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteHeader"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteRiffHeader() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteRiffHeader"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WriteSample(float sample) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSample"), {"sample"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sample);
        }
        void WriteSamples(::BNM::Structures::Mono::Array<float>* samples, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteSamples"), {"samples", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(samples, offset, count);
        }
        template <typename TP1 = void*>
        static void WriteToFile(::BNM::Structures::Mono::String* filename, TP1 source, bool deleteFileIfAlreadyExists, int maxlength) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WriteToFile"), {"filename", "source", "deleteFileIfAlreadyExists", "maxlength"});
            _m.Call(filename, source, deleteFileIfAlreadyExists, maxlength);
        }
    };
}
