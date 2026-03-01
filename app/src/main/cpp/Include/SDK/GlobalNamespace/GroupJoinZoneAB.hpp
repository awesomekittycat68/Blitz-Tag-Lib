#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GroupJoinZoneA.hpp"
#include "GroupJoinZoneB.hpp"

namespace GlobalNamespace {
    struct GroupJoinZoneAB : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GroupJoinZoneAB");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GroupJoinZoneA GetA() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneA> _field = GetClass().GetField(O("a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GroupJoinZoneB GetB() {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneB> _field = GetClass().GetField(O("b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetA(::GlobalNamespace::GroupJoinZoneA value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneA> _field = GetClass().GetField(O("a"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetB(::GlobalNamespace::GroupJoinZoneB value) {
            static BNM::Field<::GlobalNamespace::GroupJoinZoneB> _field = GetClass().GetField(O("b"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool HasAnyFlag(::GlobalNamespace::GroupJoinZoneAB other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("HasAnyFlag"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
