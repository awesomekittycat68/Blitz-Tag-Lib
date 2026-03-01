#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BlockState.hpp"
#include "CompressionLevel.hpp"
#include "CompressionStrategy.hpp"
#include "FlushType.hpp"

namespace Ionic_Zlib {
    struct DeflateManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "DeflateManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetWantRfc1950HeaderBytes() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_WantRfc1950HeaderBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetWantRfc1950HeaderBytes(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WantRfc1950HeaderBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Ionic_Zlib::ZlibCodec* GetCodec() {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_codec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDistanceOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_distanceOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>* GetErrorMessage() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("_ErrorMessage"));
            return _field.Get();
        }
        int GetLengthOffset() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lengthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetWantRfc1950HeaderBytes_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_WantRfc1950HeaderBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetBiBuf() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("bi_buf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBiValid() {
            static BNM::Field<int> _field = GetClass().GetField(O("bi_valid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetBlCount() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("bl_count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetBlTree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("bl_tree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBlockStart() {
            static BNM::Field<int> _field = GetClass().GetField(O("block_start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetBufSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("Buf_size"));
            return _field.Get();
        }
        static int GetBUSYSTATE() {
            static BNM::Field<int> _field = GetClass().GetField(O("BUSY_STATE"));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionLevel GetCompressionLevel() {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("compressionLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionStrategy GetCompressionStrategy() {
            static BNM::Field<::Ionic_Zlib::CompressionStrategy> _field = GetClass().GetField(O("compressionStrategy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::DeflateManager_Config* GetConfig() {
            static BNM::Field<::Ionic_Zlib::DeflateManager_Config*> _field = GetClass().GetField(O("config"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int8_t GetDataType() {
            static BNM::Field<int8_t> _field = GetClass().GetField(O("data_type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::DeflateManager_CompressFunc* GetDeflateFunction() {
            static BNM::Field<::Ionic_Zlib::DeflateManager_CompressFunc*> _field = GetClass().GetField(O("DeflateFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int8_t>* GetDepth() {
            static BNM::Field<::BNM::Structures::Mono::Array<int8_t>*> _field = GetClass().GetField(O("depth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetDynDtree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("dyn_dtree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetDynLtree() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("dyn_ltree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetDYNTREES() {
            static BNM::Field<int> _field = GetClass().GetField(O("DYN_TREES"));
            return _field.Get();
        }
        static int GetENDBLOCK() {
            static BNM::Field<int> _field = GetClass().GetField(O("END_BLOCK"));
            return _field.Get();
        }
        static int GetFINISHSTATE() {
            static BNM::Field<int> _field = GetClass().GetField(O("FINISH_STATE"));
            return _field.Get();
        }
        int GetHashBits() {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHashMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_mask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHashShift() {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_shift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHashSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetHead() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetHeap() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("heap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeapLen() {
            static BNM::Field<int> _field = GetClass().GetField(O("heap_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetHeapMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("heap_max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetHEAPSIZE() {
            static BNM::Field<int> _field = GetClass().GetField(O("HEAP_SIZE"));
            return _field.Get();
        }
        static int GetINITSTATE() {
            static BNM::Field<int> _field = GetClass().GetField(O("INIT_STATE"));
            return _field.Get();
        }
        int GetInsH() {
            static BNM::Field<int> _field = GetClass().GetField(O("ins_h"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastEobLen() {
            static BNM::Field<int> _field = GetClass().GetField(O("last_eob_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastFlush() {
            static BNM::Field<int> _field = GetClass().GetField(O("last_flush"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastLit() {
            static BNM::Field<int> _field = GetClass().GetField(O("last_lit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLitBufsize() {
            static BNM::Field<int> _field = GetClass().GetField(O("lit_bufsize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLookahead() {
            static BNM::Field<int> _field = GetClass().GetField(O("lookahead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMatchAvailable() {
            static BNM::Field<int> _field = GetClass().GetField(O("match_available"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMatchLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("match_length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMatchStart() {
            static BNM::Field<int> _field = GetClass().GetField(O("match_start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMatches() {
            static BNM::Field<int> _field = GetClass().GetField(O("matches"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetMAXMATCH() {
            static BNM::Field<int> _field = GetClass().GetField(O("MAX_MATCH"));
            return _field.Get();
        }
        static int GetMEMLEVELDEFAULT() {
            static BNM::Field<int> _field = GetClass().GetField(O("MEM_LEVEL_DEFAULT"));
            return _field.Get();
        }
        static int GetMEMLEVELMAX() {
            static BNM::Field<int> _field = GetClass().GetField(O("MEM_LEVEL_MAX"));
            return _field.Get();
        }
        static int GetMINLOOKAHEAD() {
            static BNM::Field<int> _field = GetClass().GetField(O("MIN_LOOKAHEAD"));
            return _field.Get();
        }
        static int GetMINMATCH() {
            static BNM::Field<int> _field = GetClass().GetField(O("MIN_MATCH"));
            return _field.Get();
        }
        int GetNextPending() {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOptLen() {
            static BNM::Field<int> _field = GetClass().GetField(O("opt_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetPending() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("pending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPendingCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("pendingCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetPRESETDICT() {
            static BNM::Field<int> _field = GetClass().GetField(O("PRESET_DICT"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int16_t>* GetPrev() {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("prev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("prev_length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrevMatch() {
            static BNM::Field<int> _field = GetClass().GetField(O("prev_match"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRfc1950BytesEmitted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("Rfc1950BytesEmitted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStaticLen() {
            static BNM::Field<int> _field = GetClass().GetField(O("static_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetSTATICTREES() {
            static BNM::Field<int> _field = GetClass().GetField(O("STATIC_TREES"));
            return _field.Get();
        }
        int GetStatus() {
            static BNM::Field<int> _field = GetClass().GetField(O("status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetSTOREDBLOCK() {
            static BNM::Field<int> _field = GetClass().GetField(O("STORED_BLOCK"));
            return _field.Get();
        }
        int GetStrstart() {
            static BNM::Field<int> _field = GetClass().GetField(O("strstart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZTree* GetTreeBitLengths() {
            static BNM::Field<::Ionic_Zlib::ZTree*> _field = GetClass().GetField(O("treeBitLengths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZTree* GetTreeDistances() {
            static BNM::Field<::Ionic_Zlib::ZTree*> _field = GetClass().GetField(O("treeDistances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ZTree* GetTreeLiterals() {
            static BNM::Field<::Ionic_Zlib::ZTree*> _field = GetClass().GetField(O("treeLiterals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWBits() {
            static BNM::Field<int> _field = GetClass().GetField(O("w_bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWMask() {
            static BNM::Field<int> _field = GetClass().GetField(O("w_mask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("w_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetWindow() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("window"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetWindowSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("window_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetZASCII() {
            static BNM::Field<int> _field = GetClass().GetField(O("Z_ASCII"));
            return _field.Get();
        }
        static int GetZBINARY() {
            static BNM::Field<int> _field = GetClass().GetField(O("Z_BINARY"));
            return _field.Get();
        }
        static int GetZDEFLATED() {
            static BNM::Field<int> _field = GetClass().GetField(O("Z_DEFLATED"));
            return _field.Get();
        }
        static int GetZUNKNOWN() {
            static BNM::Field<int> _field = GetClass().GetField(O("Z_UNKNOWN"));
            return _field.Get();
        }
        void SetCodec(::Ionic_Zlib::ZlibCodec* value) {
            static BNM::Field<::Ionic_Zlib::ZlibCodec*> _field = GetClass().GetField(O("_codec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_distanceOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLengthOffset(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lengthOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWantRfc1950HeaderBytes_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_WantRfc1950HeaderBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBiBuf(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("bi_buf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBiValid(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bi_valid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlCount(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("bl_count"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlTree(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("bl_tree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlockStart(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("block_start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressionLevel(::Ionic_Zlib::CompressionLevel value) {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("compressionLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressionStrategy(::Ionic_Zlib::CompressionStrategy value) {
            static BNM::Field<::Ionic_Zlib::CompressionStrategy> _field = GetClass().GetField(O("compressionStrategy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConfig(::Ionic_Zlib::DeflateManager_Config* value) {
            static BNM::Field<::Ionic_Zlib::DeflateManager_Config*> _field = GetClass().GetField(O("config"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDataType(int8_t value) {
            static BNM::Field<int8_t> _field = GetClass().GetField(O("data_type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeflateFunction(::Ionic_Zlib::DeflateManager_CompressFunc* value) {
            static BNM::Field<::Ionic_Zlib::DeflateManager_CompressFunc*> _field = GetClass().GetField(O("DeflateFunction"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDepth(::BNM::Structures::Mono::Array<int8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int8_t>*> _field = GetClass().GetField(O("depth"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDynDtree(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("dyn_dtree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDynLtree(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("dyn_ltree"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHashBits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHashMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_mask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHashShift(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_shift"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHashSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("hash_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHead(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("head"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeap(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("heap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeapLen(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heap_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHeapMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("heap_max"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInsH(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ins_h"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastEobLen(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("last_eob_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFlush(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("last_flush"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastLit(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("last_lit"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLitBufsize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lit_bufsize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLookahead(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lookahead"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchAvailable(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("match_available"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("match_length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatchStart(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("match_start"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMatches(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("matches"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextPending(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("nextPending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptLen(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("opt_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPending(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("pending"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("pendingCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrev(::BNM::Structures::Mono::Array<int16_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int16_t>*> _field = GetClass().GetField(O("prev"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prev_length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrevMatch(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("prev_match"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRfc1950BytesEmitted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("Rfc1950BytesEmitted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStaticLen(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("static_len"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatus(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("status"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStrstart(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("strstart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeBitLengths(::Ionic_Zlib::ZTree* value) {
            static BNM::Field<::Ionic_Zlib::ZTree*> _field = GetClass().GetField(O("treeBitLengths"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeDistances(::Ionic_Zlib::ZTree* value) {
            static BNM::Field<::Ionic_Zlib::ZTree*> _field = GetClass().GetField(O("treeDistances"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTreeLiterals(::Ionic_Zlib::ZTree* value) {
            static BNM::Field<::Ionic_Zlib::ZTree*> _field = GetClass().GetField(O("treeLiterals"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWBits(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("w_bits"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWMask(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("w_mask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("w_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindow(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("window"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("window_size"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void _fillWindow() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_fillWindow"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _InitializeBlocks() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_InitializeBlocks"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _InitializeLazyMatch() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_InitializeLazyMatch"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _InitializeTreeData() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_InitializeTreeData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static bool _IsSmaller(::BNM::Structures::Mono::Array<int16_t>* tree, int n, int m, ::BNM::Structures::Mono::Array<int8_t>* depth) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_IsSmaller"), {"tree", "n", "m", "depth"});
            return _m.Call(tree, n, m, depth);
        }
        void _tr_align() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_tr_align"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _tr_flush_block(int buf, int stored_len, bool eof) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_tr_flush_block"), {"buf", "stored_len", "eof"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buf, stored_len, eof);
        }
        void _tr_stored_block(int buf, int stored_len, bool eof) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_tr_stored_block"), {"buf", "stored_len", "eof"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buf, stored_len, eof);
        }
        bool _tr_tally(int dist, int lc) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("_tr_tally"), {"dist", "lc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dist, lc);
        }
        void bi_flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("bi_flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void bi_windup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("bi_windup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int build_bl_tree() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("build_bl_tree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void copy_block(int buf, int len, bool header) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("copy_block"), {"buf", "len", "header"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buf, len, header);
        }
        int Deflate(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Deflate"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        ::Ionic_Zlib::BlockState DeflateFast(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<::Ionic_Zlib::BlockState> _m = GetClass().GetMethod(O("DeflateFast"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        ::Ionic_Zlib::BlockState DeflateNone(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<::Ionic_Zlib::BlockState> _m = GetClass().GetMethod(O("DeflateNone"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        ::Ionic_Zlib::BlockState DeflateSlow(::Ionic_Zlib::FlushType flush) {
            static BNM::Method<::Ionic_Zlib::BlockState> _m = GetClass().GetMethod(O("DeflateSlow"), {"flush"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(flush);
        }
        int End() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("End"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void flush_block_only(bool eof) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("flush_block_only"), {"eof"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(eof);
        }
        bool get_WantRfc1950HeaderBytes() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_WantRfc1950HeaderBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Initialize(::Ionic_Zlib::ZlibCodec* codec, ::Ionic_Zlib::CompressionLevel level) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Initialize"), {"codec", "level"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(codec, level);
        }
        int Initialize(::Ionic_Zlib::ZlibCodec* codec, ::Ionic_Zlib::CompressionLevel level, int bits) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Initialize"), {"codec", "level", "bits"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(codec, level, bits);
        }
        int Initialize(::Ionic_Zlib::ZlibCodec* codec, ::Ionic_Zlib::CompressionLevel level, int bits, ::Ionic_Zlib::CompressionStrategy compressionStrategy) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Initialize"), {"codec", "level", "bits", "compressionStrategy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(codec, level, bits, compressionStrategy);
        }
        int Initialize(::Ionic_Zlib::ZlibCodec* codec, ::Ionic_Zlib::CompressionLevel level, int windowBits, int memLevel, ::Ionic_Zlib::CompressionStrategy strategy) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Initialize"), {"codec", "level", "windowBits", "memLevel", "strategy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(codec, level, windowBits, memLevel, strategy);
        }
        int longest_match(int cur_match) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("longest_match"), {"cur_match"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(cur_match);
        }
        void pqdownheap(::BNM::Structures::Mono::Array<int16_t>* tree, int k) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("pqdownheap"), {"tree", "k"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tree, k);
        }
        void put_bytes(::BNM::Structures::Mono::Array<uint8_t>* p, int start, int len) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("put_bytes"), {"p", "start", "len"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(p, start, len);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void scan_tree(::BNM::Structures::Mono::Array<int16_t>* tree, int max_code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("scan_tree"), {"tree", "max_code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tree, max_code);
        }
        void send_all_trees(int lcodes, int dcodes, int blcodes) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("send_all_trees"), {"lcodes", "dcodes", "blcodes"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lcodes, dcodes, blcodes);
        }
        void send_bits(int value, int length) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("send_bits"), {"value", "length"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value, length);
        }
        void send_code(int c, ::BNM::Structures::Mono::Array<int16_t>* tree) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("send_code"), {"c", "tree"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(c, tree);
        }
        void send_compressed_block(::BNM::Structures::Mono::Array<int16_t>* ltree, ::BNM::Structures::Mono::Array<int16_t>* dtree) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("send_compressed_block"), {"ltree", "dtree"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ltree, dtree);
        }
        void send_tree(::BNM::Structures::Mono::Array<int16_t>* tree, int max_code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("send_tree"), {"tree", "max_code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tree, max_code);
        }
        void set_data_type() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_data_type"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_WantRfc1950HeaderBytes(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WantRfc1950HeaderBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetDeflater() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeflater"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int SetDictionary(::BNM::Structures::Mono::Array<uint8_t>* dictionary) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetDictionary"), {"dictionary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dictionary);
        }
        int SetParams(::Ionic_Zlib::CompressionLevel level, ::Ionic_Zlib::CompressionStrategy strategy) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("SetParams"), {"level", "strategy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(level, strategy);
        }
    };
}
