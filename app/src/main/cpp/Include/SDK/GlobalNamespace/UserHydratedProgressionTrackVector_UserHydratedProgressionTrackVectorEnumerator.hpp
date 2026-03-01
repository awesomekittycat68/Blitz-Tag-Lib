#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UserHydratedProgressionTrackVector_UserHydratedProgressionTrackVectorEnumerator : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UserHydratedProgressionTrackVector").GetInnerClass("UserHydratedProgressionTrackVectorEnumerator");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::UserHydratedProgressionTrackResponse* GetCurrent() {
            static BNM::Method<::GlobalNamespace::UserHydratedProgressionTrackResponse*> _method = GetClass().GetMethod(O("get_Current"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::UserHydratedProgressionTrackVector* GetCollectionRef() {
            static BNM::Field<::GlobalNamespace::UserHydratedProgressionTrackVector*> _field = GetClass().GetField(O("collectionRef"));
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
        void SetCollectionRef(::GlobalNamespace::UserHydratedProgressionTrackVector* value) {
            static BNM::Field<::GlobalNamespace::UserHydratedProgressionTrackVector*> _field = GetClass().GetField(O("collectionRef"));
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
        ::GlobalNamespace::UserHydratedProgressionTrackResponse* get_Current() {
            static BNM::Method<::GlobalNamespace::UserHydratedProgressionTrackResponse*> _m = GetClass().GetMethod(O("get_Current"));
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
