#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct PhotonStreamQueue : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "PhotonStreamQueue");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetMIsWriting() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_IsWriting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMLastFrameCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_LastFrameCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMLastSampleTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("m_LastSampleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMNextObjectIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_NextObjectIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<void*>* GetMObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("m_Objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMObjectsPerSample() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_ObjectsPerSample"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMSampleCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_SampleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMSampleRate() {
            static BNM::Field<int> _field = GetClass().GetField(O("m_SampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMIsWriting(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_IsWriting"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLastFrameCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_LastFrameCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLastSampleTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("m_LastSampleTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMNextObjectIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_NextObjectIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMObjects(::BNM::Structures::Mono::List<void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<void*>*> _field = GetClass().GetField(O("m_Objects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMObjectsPerSample(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_ObjectsPerSample"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSampleCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_SampleCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMSampleRate(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("m_SampleRate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void BeginWritePackage() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginWritePackage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Deserialize(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deserialize"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
        bool HasQueuedObjects() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasQueuedObjects"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* ReceiveNext() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ReceiveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP0 = void*>
        void SendNext(TP0 obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendNext"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void Serialize(::Photon_Pun::PhotonStream* stream) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Serialize"), {"stream"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(stream);
        }
    };
}
