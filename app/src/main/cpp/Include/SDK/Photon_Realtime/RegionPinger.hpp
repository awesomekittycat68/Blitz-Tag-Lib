#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct RegionPinger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "RegionPinger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDone() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Done"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDone(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Done"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static int GetAttempts() {
            static BNM::Field<int> _field = GetClass().GetField(O("Attempts"));
            return _field.Get();
        }
        int GetCurrentAttempt() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentAttempt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static bool GetIgnoreInitialAttempt() {
            static BNM::Field<bool> _field = GetClass().GetField(O("IgnoreInitialAttempt"));
            return _field.Get();
        }
        static int GetMaxMilliseconsPerPing() {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxMilliseconsPerPing"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::Photon_Realtime::Region*>* GetOnDoneCall() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::Region*>*> _field = GetClass().GetField(O("onDoneCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::PhotonPing* GetPing() {
            static BNM::Field<::Photon_Realtime::PhotonPing*> _field = GetClass().GetField(O("ping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetPingWhenFailed() {
            static BNM::Field<int> _field = GetClass().GetField(O("PingWhenFailed"));
            return _field.Get();
        }
        ::Photon_Realtime::Region* GetRegion() {
            static BNM::Field<::Photon_Realtime::Region*> _field = GetClass().GetField(O("region"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetRegionAddress() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("regionAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<int>* GetRttResults() {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("rttResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetAttempts(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Attempts"));
            _field.Set(value);
        }
        void SetCurrentAttempt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentAttempt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetIgnoreInitialAttempt(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("IgnoreInitialAttempt"));
            _field.Set(value);
        }
        static void SetMaxMilliseconsPerPing(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("MaxMilliseconsPerPing"));
            _field.Set(value);
        }
        void SetOnDoneCall(::BNM::Structures::Mono::Action<::Photon_Realtime::Region*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::Region*>*> _field = GetClass().GetField(O("onDoneCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPing(::Photon_Realtime::PhotonPing* value) {
            static BNM::Field<::Photon_Realtime::PhotonPing*> _field = GetClass().GetField(O("ping"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPingWhenFailed(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("PingWhenFailed"));
            _field.Set(value);
        }
        void SetRegion(::Photon_Realtime::Region* value) {
            static BNM::Field<::Photon_Realtime::Region*> _field = GetClass().GetField(O("region"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegionAddress(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("regionAddress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRttResults(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<int>*> _field = GetClass().GetField(O("rttResults"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_Done() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Done"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Photon_Realtime::PhotonPing* GetPingImplementation() {
            static BNM::Method<::Photon_Realtime::PhotonPing*> _m = GetClass().GetMethod(O("GetPingImplementation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetResults() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetResults"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* RegionPingCoroutine() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("RegionPingCoroutine"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void RegionPingPooled(TP0 context) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegionPingPooled"), {"context"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(context);
        }
        bool RegionPingThreaded() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("RegionPingThreaded"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* ResolveHost(::BNM::Structures::Mono::String* hostName) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ResolveHost"), {"hostName"});
            return _m.Call(hostName);
        }
        void set_Done(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Done"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        bool Start() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
