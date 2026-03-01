#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CompressionLevel.hpp"
#include "CompressionStrategy.hpp"
#include "ParallelDeflateOutputStream_TraceBits.hpp"

namespace Ionic_Zlib {
    struct ParallelDeflateOutputStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Ionic.Zlib", "ParallelDeflateOutputStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBufferSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_BufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetBufferSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_BufferSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int64_t GetBytesProcessed() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_BytesProcessed"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanRead() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanRead"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanSeek() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanSeek"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetCanWrite() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_CanWrite"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetCrc32() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Crc32"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int64_t GetLength() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_Length"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetMaxBufferPairs() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MaxBufferPairs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMaxBufferPairs(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MaxBufferPairs"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int64_t GetPosition() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPosition(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Position"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::Ionic_Zlib::CompressionStrategy GetStrategy() {
            static BNM::Method<::Ionic_Zlib::CompressionStrategy> _method = GetClass().GetMethod(O("get_Strategy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetStrategy(::Ionic_Zlib::CompressionStrategy value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Strategy"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetBufferSize_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_bufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::CompressionLevel GetCompressLevel() {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("_compressLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCrc32_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_Crc32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentlyFilling() {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentlyFilling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Zlib::ParallelDeflateOutputStream_TraceBits GetDesiredTrace() {
            static BNM::Field<::Ionic_Zlib::ParallelDeflateOutputStream_TraceBits> _field = GetClass().GetField(O("_DesiredTrace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetELock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_eLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetFirstWriteDone() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_firstWriteDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHandlingException() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_handlingException"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsClosed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isClosed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastFilled() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastFilled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastWritten() {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastWritten"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLatestCompressed() {
            static BNM::Field<int> _field = GetClass().GetField(O("_latestCompressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLatestLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_latestLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLeaveOpen() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leaveOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMaxBufferPairs_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxBufferPairs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNewlyCompressedBlob() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_newlyCompressedBlob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOutputLock() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_outputLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOutStream() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_outStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPendingException() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_pendingException"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Ionic_Zlib::WorkItem*>* GetPool() {
            static BNM::Field<::BNM::Structures::Mono::List<::Ionic_Zlib::WorkItem*>*> _field = GetClass().GetField(O("_pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Ionic_Crc::CRC32* GetRunningCrc() {
            static BNM::Field<::Ionic_Crc::CRC32*> _field = GetClass().GetField(O("_runningCrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetToFill() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_toFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetTotalBytesProcessed() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_totalBytesProcessed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetToWrite() {
            static BNM::Field<void*> _field = GetClass().GetField(O("_toWrite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetBufferPairsPerCore() {
            static BNM::Field<int> _field = GetClass().GetField(O("BufferPairsPerCore"));
            return _field.Get();
        }
        bool GetEmitting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("emitting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetIOBUFFERSIZEDEFAULT() {
            static BNM::Field<int> _field = GetClass().GetField(O("IO_BUFFER_SIZE_DEFAULT"));
            return _field.Get();
        }
        void SetBufferSize_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_bufferSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCompressLevel(::Ionic_Zlib::CompressionLevel value) {
            static BNM::Field<::Ionic_Zlib::CompressionLevel> _field = GetClass().GetField(O("_compressLevel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCrc32(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_Crc32"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentlyFilling(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_currentlyFilling"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDesiredTrace(::Ionic_Zlib::ParallelDeflateOutputStream_TraceBits value) {
            static BNM::Field<::Ionic_Zlib::ParallelDeflateOutputStream_TraceBits> _field = GetClass().GetField(O("_DesiredTrace"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetELock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_eLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFirstWriteDone(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_firstWriteDone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHandlingException(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_handlingException"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsClosed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isClosed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastFilled(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastFilled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastWritten(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_lastWritten"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestCompressed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_latestCompressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatestLock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_latestLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaveOpen(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_leaveOpen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxBufferPairs_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_maxBufferPairs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewlyCompressedBlob(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_newlyCompressedBlob"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputLock(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_outputLock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutStream(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_outStream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPendingException(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_pendingException"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPool(::BNM::Structures::Mono::List<::Ionic_Zlib::WorkItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Ionic_Zlib::WorkItem*>*> _field = GetClass().GetField(O("_pool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRunningCrc(::Ionic_Crc::CRC32* value) {
            static BNM::Field<::Ionic_Crc::CRC32*> _field = GetClass().GetField(O("_runningCrc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToFill(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_toFill"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalBytesProcessed(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("_totalBytesProcessed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToWrite(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("_toWrite"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEmitting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("emitting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void _DeflateOne(TP0 wi) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_DeflateOne"), {"wi"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(wi);
        }
        void _Flush(bool lastInput) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_Flush"), {"lastInput"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(lastInput);
        }
        void _FlushFinish() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_FlushFinish"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void _InitializePoolOfWorkItems() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_InitializePoolOfWorkItems"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Close() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Close"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool DeflateOneSegment(::Ionic_Zlib::WorkItem* workitem) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("DeflateOneSegment"), {"workitem"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(workitem);
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
        void EmitPendingBuffers(bool doAll, bool mustWait) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EmitPendingBuffers"), {"doAll", "mustWait"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(doAll, mustWait);
        }
        void Flush() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Flush"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int get_BufferSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_BufferSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_BytesProcessed() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_BytesProcessed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanRead() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanRead"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanSeek() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanSeek"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_CanWrite() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_CanWrite"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_Crc32() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Crc32"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_Length() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_Length"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MaxBufferPairs() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MaxBufferPairs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_Position() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_Position"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Ionic_Zlib::CompressionStrategy get_Strategy() {
            static BNM::Method<::Ionic_Zlib::CompressionStrategy> _m = GetClass().GetMethod(O("get_Strategy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Read(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Read"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buffer, offset, count);
        }
        void Reset(::BNM::IL2CPP::Il2CppObject* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        template <typename TP1 = void*>
        int64_t Seek(int64_t offset, TP1 origin) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Seek"), {"offset", "origin"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(offset, origin);
        }
        void set_BufferSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_BufferSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MaxBufferPairs(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MaxBufferPairs"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Position(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Position"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Strategy(::Ionic_Zlib::CompressionStrategy value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Strategy"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetLength(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetLength"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void TraceOutput(::Ionic_Zlib::ParallelDeflateOutputStream_TraceBits bits, ::BNM::Structures::Mono::String* format, ::BNM::Structures::Mono::Array<void*>* varParams) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TraceOutput"), {"bits", "format", "varParams"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bits, format, varParams);
        }
        void Write(::BNM::Structures::Mono::Array<uint8_t>* buffer, int offset, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Write"), {"buffer", "offset", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buffer, offset, count);
        }
    };
}
