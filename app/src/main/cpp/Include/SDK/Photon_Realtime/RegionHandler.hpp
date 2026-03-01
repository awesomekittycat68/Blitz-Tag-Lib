#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Realtime {
    struct RegionHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "RegionHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::Region* GetBestRegion() {
            static BNM::Method<::Photon_Realtime::Region*> _method = GetClass().GetMethod(O("get_BestRegion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::List<::Photon_Realtime::Region*>* GetEnabledRegions() {
            static BNM::Method<::BNM::Structures::Mono::List<::Photon_Realtime::Region*>*> _method = GetClass().GetMethod(O("get_EnabledRegions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetEnabledRegions(::BNM::Structures::Mono::List<::Photon_Realtime::Region*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_EnabledRegions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetIsPinging() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_IsPinging"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetIsPinging(bool value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_IsPinging"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetSummaryToCache() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_SummaryToCache"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetAvailableRegionCodes() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("availableRegionCodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::Region* GetBestRegionCache() {
            static BNM::Field<::Photon_Realtime::Region*> _field = GetClass().GetField(O("bestRegionCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::Photon_Realtime::RegionHandler*>* GetOnCompleteCall() {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::RegionHandler*>*> _field = GetClass().GetField(O("onCompleteCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::Photon_Realtime::RegionPinger*>* GetPingerList() {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::RegionPinger*>*> _field = GetClass().GetField(O("pingerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::MonoType* GetPingImplementation() {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("PingImplementation"));
            return _field.Get();
        }
        static uint16_t GetPortToPingOverride() {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("PortToPingOverride"));
            return _field.Get();
        }
        int GetPreviousPing() {
            static BNM::Field<int> _field = GetClass().GetField(O("previousPing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPreviousSummaryProvided() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("previousSummaryProvided"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAvailableRegionCodes(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("availableRegionCodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBestRegionCache(::Photon_Realtime::Region* value) {
            static BNM::Field<::Photon_Realtime::Region*> _field = GetClass().GetField(O("bestRegionCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnCompleteCall(::BNM::Structures::Mono::Action<::Photon_Realtime::RegionHandler*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::Photon_Realtime::RegionHandler*>*> _field = GetClass().GetField(O("onCompleteCall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPingerList(::BNM::Structures::Mono::List<::Photon_Realtime::RegionPinger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::Photon_Realtime::RegionPinger*>*> _field = GetClass().GetField(O("pingerList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetPingImplementation(::BNM::MonoType* value) {
            static BNM::Field<::BNM::MonoType*> _field = GetClass().GetField(O("PingImplementation"));
            _field.Set(value);
        }
        static void SetPortToPingOverride(uint16_t value) {
            static BNM::Field<uint16_t> _field = GetClass().GetField(O("PortToPingOverride"));
            _field.Set(value);
        }
        void SetPreviousPing(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("previousPing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreviousSummaryProvided(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("previousSummaryProvided"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::Photon_Realtime::Region* get_BestRegion() {
            static BNM::Method<::Photon_Realtime::Region*> _m = GetClass().GetMethod(O("get_BestRegion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::Photon_Realtime::Region*>* get_EnabledRegions() {
            static BNM::Method<::BNM::Structures::Mono::List<::Photon_Realtime::Region*>*> _m = GetClass().GetMethod(O("get_EnabledRegions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool get_IsPinging() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_IsPinging"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_SummaryToCache() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_SummaryToCache"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* GetResults() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetResults"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnPreferredRegionPinged(::Photon_Realtime::Region* preferredRegion) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPreferredRegionPinged"), {"preferredRegion"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(preferredRegion);
        }
        void OnRegionDone(::Photon_Realtime::Region* region) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnRegionDone"), {"region"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(region);
        }
        bool PingEnabledRegions() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PingEnabledRegions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool PingMinimumOfRegions(::BNM::Structures::Mono::Action<::Photon_Realtime::RegionHandler*>* onCompleteCallback, ::BNM::Structures::Mono::String* previousSummary) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("PingMinimumOfRegions"), {"onCompleteCallback", "previousSummary"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(onCompleteCallback, previousSummary);
        }
        void set_EnabledRegions(::BNM::Structures::Mono::List<::Photon_Realtime::Region*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_EnabledRegions"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_IsPinging(bool value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_IsPinging"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetRegions(::ExitGames_Client_Photon::OperationResponse* opGetRegions) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetRegions"), {"opGetRegions"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(opGetRegions);
        }
    };
}
