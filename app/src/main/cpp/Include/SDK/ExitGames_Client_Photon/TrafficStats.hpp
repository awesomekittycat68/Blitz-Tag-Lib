#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct TrafficStats : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "TrafficStats");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetControlCommandBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ControlCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetControlCommandBytes(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ControlCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetControlCommandCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ControlCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetControlCommandCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ControlCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFragmentCommandBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FragmentCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFragmentCommandBytes(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FragmentCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetFragmentCommandCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FragmentCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetFragmentCommandCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FragmentCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetPackageHeaderSize() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PackageHeaderSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPackageHeaderSize(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PackageHeaderSize"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetReliableCommandBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ReliableCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReliableCommandBytes(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ReliableCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetReliableCommandCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ReliableCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetReliableCommandCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ReliableCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTimestampOfLastAck() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TimestampOfLastAck"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimestampOfLastAck(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TimestampOfLastAck"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTimestampOfLastReliableCommand() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TimestampOfLastReliableCommand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTimestampOfLastReliableCommand(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TimestampOfLastReliableCommand"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTotalCommandBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalCommandCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalCommandsInPackets() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalCommandsInPackets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTotalCommandsInPackets(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TotalCommandsInPackets"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetTotalPacketBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalPacketBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetTotalPacketCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_TotalPacketCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTotalPacketCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TotalPacketCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetUnreliableCommandBytes() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_UnreliableCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUnreliableCommandBytes(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UnreliableCommandBytes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetUnreliableCommandCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_UnreliableCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetUnreliableCommandCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_UnreliableCommandCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void CountControlCommand(int size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountControlCommand"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size);
        }
        void CountFragmentOpCommand(int size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountFragmentOpCommand"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size);
        }
        void CountReliableOpCommand(int size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountReliableOpCommand"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size);
        }
        void CountUnreliableOpCommand(int size) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CountUnreliableOpCommand"), {"size"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(size);
        }
        int get_ControlCommandBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ControlCommandBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ControlCommandCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ControlCommandCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FragmentCommandBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FragmentCommandBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_FragmentCommandCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FragmentCommandCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_PackageHeaderSize() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PackageHeaderSize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ReliableCommandBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ReliableCommandBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_ReliableCommandCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ReliableCommandCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TimestampOfLastAck() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TimestampOfLastAck"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TimestampOfLastReliableCommand() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TimestampOfLastReliableCommand"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalCommandBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalCommandBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalCommandCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalCommandCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalCommandsInPackets() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalCommandsInPackets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalPacketBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalPacketBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_TotalPacketCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_TotalPacketCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_UnreliableCommandBytes() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_UnreliableCommandBytes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_UnreliableCommandCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_UnreliableCommandCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_ControlCommandBytes(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ControlCommandBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ControlCommandCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ControlCommandCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FragmentCommandBytes(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FragmentCommandBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_FragmentCommandCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FragmentCommandCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PackageHeaderSize(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PackageHeaderSize"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ReliableCommandBytes(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ReliableCommandBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ReliableCommandCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ReliableCommandCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TimestampOfLastAck(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TimestampOfLastAck"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TimestampOfLastReliableCommand(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TimestampOfLastReliableCommand"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TotalCommandsInPackets(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TotalCommandsInPackets"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TotalPacketCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TotalPacketCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UnreliableCommandBytes(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UnreliableCommandBytes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_UnreliableCommandCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_UnreliableCommandCount"), {"value"});
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
