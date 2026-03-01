#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Id32 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Id32");
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
        static int ComputeHash(::BNM::Structures::Mono::String* s) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("ComputeHash"), {"s"});
            return _m.Call(s);
        }
        static ::GlobalNamespace::Id32 ComputeID(::BNM::Structures::Mono::String* s) {
            static BNM::Method<::GlobalNamespace::Id32> _m = GetClass().GetMethod(O("ComputeID"), {"s"});
            return _m.Call(s);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
