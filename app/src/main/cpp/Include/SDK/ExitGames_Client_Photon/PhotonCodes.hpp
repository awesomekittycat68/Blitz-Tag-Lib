#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct PhotonCodes : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "PhotonCodes");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t Ok = 0;
        static uint8_t GetClientKey() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ClientKey"));
            return _field.Get();
        }
        static uint8_t GetInitEncryption() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("InitEncryption"));
            return _field.Get();
        }
        static uint8_t GetModeKey() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ModeKey"));
            return _field.Get();
        }
        static uint8_t GetPing() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Ping"));
            return _field.Get();
        }
        static uint8_t GetServerKey() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ServerKey"));
            return _field.Get();
        }
        static void SetClientKey(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ClientKey"));
            _field.Set(value);
        }
        static void SetInitEncryption(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("InitEncryption"));
            _field.Set(value);
        }
        static void SetModeKey(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ModeKey"));
            _field.Set(value);
        }
        static void SetPing(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("Ping"));
            _field.Set(value);
        }
        static void SetServerKey(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("ServerKey"));
            _field.Set(value);
        }
    };
}
