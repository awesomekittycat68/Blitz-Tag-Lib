#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "TickSystemTimerAbstract.hpp"

namespace GorillaTag {
    struct ReportMuteTimer : ::GorillaTag::TickSystemTimerAbstract {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "ReportMuteTimer");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr uint8_t evCode = 51;
        int GetMuted() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_Muted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMuted(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Muted"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::Array<void*>* GetContent() {
            static BNM::Field<::BNM::Structures::Mono::Array<void*>*> _field = GetClass().GetField(O("content"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMNickName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMPlayerID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_playerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GlobalNamespace::NetEventOptions* GetNetEventOptions() {
            static BNM::Field<::GlobalNamespace::NetEventOptions*> _field = GetClass().GetField(O("netEventOptions"));
            return _field.Get();
        }
        void SetMNickName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_nickName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPlayerID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("m_playerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_Muted() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_Muted"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnTimedEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimedEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void set_Muted(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Muted"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetReportData(::BNM::Structures::Mono::String* id, ::BNM::Structures::Mono::String* name, int muted) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetReportData"), {"id", "name", "muted"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(id, name, muted);
        }
    };
}
