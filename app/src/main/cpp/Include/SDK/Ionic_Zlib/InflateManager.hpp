#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FlushType.hpp"
#include "InflateManager_InflateManagerMode.hpp"

namespace Ionic_Zlib {
    struct InflateManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "InflateManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int PRESET_DICT = 32;
        static constexpr int Z_DEFLATED = 8;
        bool GetHandleRfc1950HeaderBytes() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HandleRfc1950HeaderBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetHandleRfc1950HeaderBytes(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_HandleRfc1950HeaderBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Ionic_Zlib::ZlibCodec* GetCodec() {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_codec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandleRfc1950HeaderBytes_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_handleRfc1950HeaderBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::InflateBlocks* GetBlocks() {
            static BNM::Field<::Ionic_Zlib::InflateBlocks*> _field = GetClass().GetField(O("blocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetComputedCheck() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("computedCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetExpectedCheck() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("expectedCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<uint8_t>* GetMark() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("mark"));
            return _field.Get();
        }
        int GetMarker() {
            static BNM::Field<int> _field = GetClass().GetField(O("marker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMethod() {
            static BNM::Field<int> _field = GetClass().GetField(O("method"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::InflateManager_InflateManagerMode GetMode() {
            static BNM::Field<::Ionic_Zlib::InflateManager_InflateManagerMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWbits() {
            static BNM::Field<int> _field = GetClass().GetField(O("wbits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCodec(::Ionic_Zlib::ZlibCodec* value) {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_codec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandleRfc1950HeaderBytes_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_handleRfc1950HeaderBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlocks(::Ionic_Zlib::InflateBlocks* value) {
            static BNM::Field<::Ionic_Zlib::InflateBlocks*> _field = GetClass().GetField(O("blocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetComputedCheck(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("computedCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExpectedCheck(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("expectedCheck"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMarker(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("marker"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMethod(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("method"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::Ionic_Zlib::InflateManager_InflateManagerMode value) {
            static BNM::Field<::Ionic_Zlib::InflateManager_InflateManagerMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWbits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("wbits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int End() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("End"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_HandleRfc1950HeaderBytes() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HandleRfc1950HeaderBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Inflate(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Inflate"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        int Initialize(::Ionic_Zlib::ZlibCodec* codec, int w) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Initialize"), {"codec", "w"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(codec, w);
        }
        int Reset() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_HandleRfc1950HeaderBytes(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_HandleRfc1950HeaderBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        int SetDictionary(::BNM::Structures::Mono::Array<uint8_t>* dictionary) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetDictionary"), {"dictionary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dictionary);
        }
        int Sync() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Sync"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int SyncPoint(::Ionic_Zlib::ZlibCodec* z) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SyncPoint"), {"z"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(z);
        }
    };
}
