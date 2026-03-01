#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    template <typename Titem, typename Tenum>
    struct CallLimitersList$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CallLimitersList`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<Titem>* GetMCallLimiters() {
            static BNM::Field<::BNM::Structures::Mono::Array<Titem>*> _field = GetClass().GetField(O("m_callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMCallLimiters(::BNM::Structures::Mono::Array<Titem>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<Titem>*> _field = GetClass().GetField(O("m_callLimiters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool IsSpamming(Tenum index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSpamming"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        bool IsSpamming(int index) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSpamming"), {"index"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index);
        }
        bool IsSpamming(Tenum index, double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSpamming"), {"index", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index, serverTime);
        }
        bool IsSpamming(int index, double serverTime) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsSpamming"), {"index", "serverTime"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(index, serverTime);
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
