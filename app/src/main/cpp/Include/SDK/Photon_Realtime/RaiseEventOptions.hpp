#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "EventCaching.hpp"
#include "ReceiverGroup.hpp"

namespace Photon_Realtime {
    struct RaiseEventOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Realtime", "RaiseEventOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Photon_Realtime::EventCaching GetCachingOption() {
            static BNM::Field<::Photon_Realtime::EventCaching> _field = GetClass().GetField(O("CachingOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::Photon_Realtime::RaiseEventOptions* GetDefault() {
            static BNM::Field<::Photon_Realtime::RaiseEventOptions*> _field = GetClass().GetField(O("Default"));
            return _field.Get();
        }
        ::Photon_Realtime::WebFlags* GetFlags() {
            static BNM::Field<::Photon_Realtime::WebFlags*> _field = GetClass().GetField(O("Flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetInterestGroup() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("InterestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Photon_Realtime::ReceiverGroup GetReceivers() {
            static BNM::Field<::Photon_Realtime::ReceiverGroup> _field = GetClass().GetField(O("Receivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetSequenceChannel() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("SequenceChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetTargetActors() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("TargetActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCachingOption(::Photon_Realtime::EventCaching value) {
            static BNM::Field<::Photon_Realtime::EventCaching> _field = GetClass().GetField(O("CachingOption"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFlags(::Photon_Realtime::WebFlags* value) {
            static BNM::Field<::Photon_Realtime::WebFlags*> _field = GetClass().GetField(O("Flags"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInterestGroup(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("InterestGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReceivers(::Photon_Realtime::ReceiverGroup value) {
            static BNM::Field<::Photon_Realtime::ReceiverGroup> _field = GetClass().GetField(O("Receivers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSequenceChannel(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("SequenceChannel"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetActors(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("TargetActors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
