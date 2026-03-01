#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "HandLinkAuthorityType.hpp"

namespace GlobalNamespace {
    struct HandLinkAuthorityStatus : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandLinkAuthorityStatus");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetTiebreak() {
            static BNM::Field<int> _field = GetClass().GetField(O("tiebreak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("timestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandLinkAuthorityType GetType_f() {
            static BNM::Field<::GlobalNamespace::HandLinkAuthorityType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetTiebreak(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("tiebreak"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("timestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::HandLinkAuthorityType value) {
            static BNM::Field<::GlobalNamespace::HandLinkAuthorityType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CompareTo(::GlobalNamespace::HandLinkAuthorityStatus b) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(b);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
