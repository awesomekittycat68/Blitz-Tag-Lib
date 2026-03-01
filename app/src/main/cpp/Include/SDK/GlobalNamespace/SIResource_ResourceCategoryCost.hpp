#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIResource_ResourceCategoryCost : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIResource").GetInnerClass("ResourceCategoryCost");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMisc() {
            static BNM::Field<int> _field = GetClass().GetField(O("misc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTechPoints() {
            static BNM::Field<int> _field = GetClass().GetField(O("techPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMisc(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("misc"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTechPoints(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("techPoints"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int CompareTo(::GlobalNamespace::SIResource_ResourceCategoryCost other) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CompareTo"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        bool Equals_1(::GlobalNamespace::SIResource_ResourceCategoryCost other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static ::GlobalNamespace::SIResource_ResourceCategoryCost Max(::GlobalNamespace::SIResource_ResourceCategoryCost left, ::GlobalNamespace::SIResource_ResourceCategoryCost right) {
            static BNM::Method<::GlobalNamespace::SIResource_ResourceCategoryCost> _m = GetClass().GetMethod(O("Max"), {"left", "right"});
            return _m.Call(left, right);
        }
    };
}
