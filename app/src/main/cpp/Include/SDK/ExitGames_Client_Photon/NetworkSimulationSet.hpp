#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct NetworkSimulationSet : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "NetworkSimulationSet");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetIncomingJitter() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_IncomingJitter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIncomingJitter(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IncomingJitter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetIncomingLag() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_IncomingLag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIncomingLag(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IncomingLag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetIncomingLossPercentage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_IncomingLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIncomingLossPercentage(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IncomingLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsSimulationEnabled() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsSimulationEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsSimulationEnabled(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsSimulationEnabled"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLostPackagesIn() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LostPackagesIn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLostPackagesIn(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LostPackagesIn"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetLostPackagesOut() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LostPackagesOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLostPackagesOut(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LostPackagesOut"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOutgoingJitter() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OutgoingJitter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOutgoingJitter(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OutgoingJitter"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOutgoingLag() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OutgoingLag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOutgoingLag(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OutgoingLag"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetOutgoingLossPercentage() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_OutgoingLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetOutgoingLossPercentage(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_OutgoingLossPercentage"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetIncomingJitter_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingJitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncomingLag_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingLag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIncomingLossPercentage_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingLossPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsSimulationEnabled_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSimulationEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNetSimManualResetEvent() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("NetSimManualResetEvent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetNetSimThread() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("netSimThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingJitter_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingJitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingLag_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingLag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOutgoingLossPercentage_f() {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingLossPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::ExitGames_Client_Photon::PeerBase* GetPeerBase() {
            static BNM::Field<::ExitGames_Client_Photon::PeerBase*> _field = GetClass().GetField(O("peerBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIncomingJitter_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingJitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingLag_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingLag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncomingLossPercentage_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("incomingLossPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsSimulationEnabled_fs(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSimulationEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetSimThread(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("netSimThread"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingJitter_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingJitter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingLag_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingLag"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutgoingLossPercentage_fs(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("outgoingLossPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPeerBase(::ExitGames_Client_Photon::PeerBase* value) {
            static BNM::Field<::ExitGames_Client_Photon::PeerBase*> _field = GetClass().GetField(O("peerBase"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_IncomingJitter() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_IncomingJitter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_IncomingLag() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_IncomingLag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_IncomingLossPercentage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_IncomingLossPercentage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsSimulationEnabled() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsSimulationEnabled"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LostPackagesIn() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LostPackagesIn"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LostPackagesOut() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LostPackagesOut"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OutgoingJitter() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OutgoingJitter"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OutgoingLag() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OutgoingLag"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_OutgoingLossPercentage() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_OutgoingLossPercentage"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_IncomingJitter(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IncomingJitter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IncomingLag(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IncomingLag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IncomingLossPercentage(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IncomingLossPercentage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsSimulationEnabled(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsSimulationEnabled"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LostPackagesIn(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LostPackagesIn"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LostPackagesOut(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LostPackagesOut"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OutgoingJitter(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OutgoingJitter"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OutgoingLag(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OutgoingLag"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_OutgoingLossPercentage(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_OutgoingLossPercentage"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
