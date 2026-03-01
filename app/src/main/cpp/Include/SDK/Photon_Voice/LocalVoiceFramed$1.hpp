#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LocalVoiceFramedBase.hpp"

namespace Photon_Voice {
    template <typename T>
    struct LocalVoiceFramed$1 : ::Photon_Voice::LocalVoiceFramedBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice", "LocalVoiceFramed`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetPushDataAsyncReady() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_PushDataAsyncReady"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetDataEncodeThreadStarted() {
            static BNM::Field<bool> _field = GetClass().GetField(O("dataEncodeThreadStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetExitThread() {
            static BNM::Field<bool> _field = GetClass().GetField(O("exitThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFramesSkipped() {
            static BNM::Field<int> _field = GetClass().GetField(O("framesSkipped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFramesSkippedNextLog() {
            static BNM::Field<int> _field = GetClass().GetField(O("framesSkippedNextLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPreProcessorsCnt() {
            static BNM::Field<int> _field = GetClass().GetField(O("preProcessorsCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetProcessNullFramesCnt() {
            static BNM::Field<int> _field = GetClass().GetField(O("processNullFramesCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetProcessors() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("processors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPushDataQueue() {
            static BNM::Field<void*> _field = GetClass().GetField(O("pushDataQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetPushDataQueueReady() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pushDataQueueReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDataEncodeThreadStarted(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("dataEncodeThreadStarted"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetExitThread(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("exitThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramesSkipped(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("framesSkipped"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFramesSkippedNextLog(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("framesSkippedNextLog"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreProcessorsCnt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("preProcessorsCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessNullFramesCnt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("processNullFramesCnt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetProcessors(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("processors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPushDataQueue(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("pushDataQueue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPushDataQueueReady(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("pushDataQueueReady"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddPostProcessor(::BNM::Structures::Mono::Array<void*>* processors) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPostProcessor"), {"processors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(processors);
        }
        void AddPreProcessor(::BNM::Structures::Mono::Array<void*>* processors) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddPreProcessor"), {"processors"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(processors);
        }
        void ClearProcessors() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearProcessors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool get_PushDataAsyncReady() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_PushDataAsyncReady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::Array<T>* processFrame(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<::BNM::Structures::Mono::Array<T>*> _m = GetClass().GetMethod(O("processFrame"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(buf);
        }
        void PushData(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PushData"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buf);
        }
        void PushDataAsync(::BNM::Structures::Mono::Array<T>* buf) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PushDataAsync"), {"buf"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(buf);
        }
        void PushDataAsyncThread() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PushDataAsyncThread"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
