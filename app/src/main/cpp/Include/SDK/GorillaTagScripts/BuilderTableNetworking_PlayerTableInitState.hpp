#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct BuilderTableNetworking_PlayerTableInitState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderTableNetworking").GetInnerClass("PlayerTableInitState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<uint8_t>* GetChunk() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("chunk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumSerializedBytes() {
            static BNM::Field<int> _field = GetClass().GetField(O("numSerializedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Player* GetPlayer() {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSendNextChunkTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("sendNextChunkTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetSerializedTableState() {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("serializedTableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTotalSerializedBytes() {
            static BNM::Field<int> _field = GetClass().GetField(O("totalSerializedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWaitForInitTimeRemaining() {
            static BNM::Field<float> _field = GetClass().GetField(O("waitForInitTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetChunk(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("chunk"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumSerializedBytes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("numSerializedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayer(::Photon_Realtime::Player* value) {
            static BNM::Field<::Photon_Realtime::Player*> _field = GetClass().GetField(O("player"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSendNextChunkTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("sendNextChunkTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializedTableState(::BNM::Structures::Mono::Array<uint8_t>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<uint8_t>*> _field = GetClass().GetField(O("serializedTableState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTotalSerializedBytes(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("totalSerializedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWaitForInitTimeRemaining(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("waitForInitTimeRemaining"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
