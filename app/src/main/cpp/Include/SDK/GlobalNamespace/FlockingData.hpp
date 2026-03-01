#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$153.hpp"
#include "../Fusion_CodeGen/FixedStorage$183.hpp"

namespace GlobalNamespace {
    struct FlockingData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FlockingData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_count"));
            return _method.Call();
        }
        void SetCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_count"));
            _method.Call(value);
        }
        int get_count() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_count"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Positions() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Positions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_Rotations() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Rotations"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_count(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_count"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
