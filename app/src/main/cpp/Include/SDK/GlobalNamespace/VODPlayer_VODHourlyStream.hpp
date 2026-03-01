#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "VODPlayer_VODStream.hpp"

namespace GlobalNamespace {
    struct VODPlayer_VODHourlyStream : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VODPlayer").GetInnerClass("VODHourlyStream");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetEndDateTime() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("endDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetEndDT() {
            static BNM::Field<void*> _field = GetClass().GetField(O("endDT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetMinute() {
            static BNM::Field<int> _field = GetClass().GetField(O("minute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetStartDateTime() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("startDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetStartDT() {
            static BNM::Field<void*> _field = GetClass().GetField(O("startDT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VODPlayer_VODStream GetStream() {
            static BNM::Field<::GlobalNamespace::VODPlayer_VODStream> _field = GetClass().GetField(O("stream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndDateTime(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("endDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndDT(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("endDT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinute(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("minute"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartDateTime(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("startDateTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartDT(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("startDT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStream(::GlobalNamespace::VODPlayer_VODStream value) {
            static BNM::Field<::GlobalNamespace::VODPlayer_VODStream> _field = GetClass().GetField(O("stream"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void* ClampedDateTime(TP0 dateTime) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("ClampedDateTime"), {"dateTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(dateTime);
        }
        int CompareTo(::GlobalNamespace::VODPlayer_VODHourlyStream other) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        template <typename TP0 = void*>
        bool IsDateInRange(TP0 serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsDateInRange"), {"serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(serverTime);
        }
        void ValidateDate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ValidateDate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
