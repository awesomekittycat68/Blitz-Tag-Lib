#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTSignalID : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSignalID");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetId() {
            static BNM::Field<int> _field = GetClass().GetField(O("_id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_id"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        bool Equals_1(TP0 obj) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(obj);
        }
        bool Equals_1(::GlobalNamespace::GTSignalID other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        bool Equals_1(int other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
