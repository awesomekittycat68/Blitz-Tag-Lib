#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "InflateBlocks_InflateBlockMode.hpp"

namespace Ionic_Zlib {
    struct InflateBlocks : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "InflateBlocks");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int MANY = 1440;
        ::Ionic_Zlib::ZlibCodec* GetCodec() {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_codec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetBb() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("bb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBitb() {
            static BNM::Field<int> _field = GetClass().GetField(O("bitb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBitk() {
            static BNM::Field<int> _field = GetClass().GetField(O("bitk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetBlens() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("blens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<int>* GetBorder() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("border"));
            return _field.Get();
        }
        uint32_t GetCheck() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("check"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCheckfn() {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkfn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::InflateCodes* GetCodes() {
            static BNM::Field<::Ionic_Zlib::InflateCodes*> _field = GetClass().GetField(O("codes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetEnd() {
            static BNM::Field<int> _field = GetClass().GetField(O("end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetHufts() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("hufts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::InfTree* GetInftree() {
            static BNM::Field<::Ionic_Zlib::InfTree*> _field = GetClass().GetField(O("inftree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLast() {
            static BNM::Field<int> _field = GetClass().GetField(O("last"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLeft() {
            static BNM::Field<int> _field = GetClass().GetField(O("left"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::InflateBlocks_InflateBlockMode GetMode() {
            static BNM::Field<::Ionic_Zlib::InflateBlocks_InflateBlockMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetReadAt() {
            static BNM::Field<int> _field = GetClass().GetField(O("readAt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTable() {
            static BNM::Field<int> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetTb() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("tb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetWindow() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("window"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWriteAt() {
            static BNM::Field<int> _field = GetClass().GetField(O("writeAt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCodec(::Ionic_Zlib::ZlibCodec* value) {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_codec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBb(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("bb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBitb(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bitb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBitk(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bitk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlens(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("blens"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheck(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("check"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCheckfn(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("checkfn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCodes(::Ionic_Zlib::InflateCodes* value) {
            static BNM::Field<::Ionic_Zlib::InflateCodes*> _field = GetClass().GetField(O("codes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnd(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("end"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHufts(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("hufts"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInftree(::Ionic_Zlib::InfTree* value) {
            static BNM::Field<::Ionic_Zlib::InfTree*> _field = GetClass().GetField(O("inftree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLast(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("last"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeft(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("left"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMode(::Ionic_Zlib::InflateBlocks_InflateBlockMode value) {
            static BNM::Field<::Ionic_Zlib::InflateBlocks_InflateBlockMode> _field = GetClass().GetField(O("mode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReadAt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("readAt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTable(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("table"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTb(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("tb"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindow(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("window"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWriteAt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("writeAt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int Flush(int r) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Flush"), {"r"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(r);
        }
        void Free() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Free"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int Process(int r) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Process"), {"r"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(r);
        }
        uint32_t Reset() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetDictionary(::BNM::Structures::Mono::Array<uint8_t>* d, int start, int n) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDictionary"), {"d", "start", "n"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(d, start, n);
        }
        int SyncPoint() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SyncPoint"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
