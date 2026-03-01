#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AnalyticsResponseVector_AnalyticsResponseVectorEnumerator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AnalyticsResponseVector").GetInnerClass("AnalyticsResponseVectorEnumerator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::MothershipAnalyticsResultEntry* GetCurrent() {
            static BNM::Method<::GlobalNamespace::MothershipAnalyticsResultEntry*> _method = GetClass().GetMethod(O("get_Current"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::AnalyticsResponseVector* GetCollectionRef() {
            static BNM::Field<::GlobalNamespace::AnalyticsResponseVector*> _field = GetClass().GetField(O("collectionRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetCurrentObject() {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentSize() {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollectionRef(::GlobalNamespace::AnalyticsResponseVector* value) {
            static BNM::Field<::GlobalNamespace::AnalyticsResponseVector*> _field = GetClass().GetField(O("collectionRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentObject(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("currentObject"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentSize(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("currentSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::GlobalNamespace::MothershipAnalyticsResultEntry* get_Current() {
            static BNM::Method<::GlobalNamespace::MothershipAnalyticsResultEntry*> _m = GetClass().GetMethod(O("get_Current"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
