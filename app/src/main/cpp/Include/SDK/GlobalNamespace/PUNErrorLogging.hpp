#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PUNErrorLogging : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PUNErrorLogging");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<uint8_t, void*>* GetMExceptionMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, void*>*> _field = GetClass().GetField(O("m_exceptionMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogDestroy() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logDestroy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogDestroyPlayer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logDestroyPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogInstantiate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogOwnershipRequest() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logOwnershipRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogOwnershipTransfer() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logOwnershipTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogOwnershipUpdate() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logOwnershipUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogRPC() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logRPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetMLogSerializeView() {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logSerializeView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMExceptionMap(::BNM::Structures::Mono::Dictionary<uint8_t, void*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<uint8_t, void*>*> _field = GetClass().GetField(O("m_exceptionMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogDestroy(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logDestroy"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogDestroyPlayer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logDestroyPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogInstantiate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logInstantiate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogOwnershipRequest(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logOwnershipRequest"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogOwnershipTransfer(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logOwnershipTransfer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogOwnershipUpdate(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logOwnershipUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogRPC(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logRPC"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMLogSerializeView(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("m_logSerializeView"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PrintException(::BNM::IL2CPP::Il2CppObject* e, bool print) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PrintException"), {"e", "print"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(e, print);
        }
        void PUNError(::ExitGames_Client_Photon::EventData* data, ::BNM::IL2CPP::Il2CppObject* exception) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PUNError"), {"data", "exception"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(data, exception);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
