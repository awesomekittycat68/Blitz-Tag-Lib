#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$20.hpp"

namespace GlobalNamespace {
    struct GhostLabData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostLabData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetDoorState() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DoorState"));
            return _method.Call();
        }
        void SetDoorState(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DoorState"));
            _method.Call(value);
        }
        int get_DoorState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DoorState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_OpenDoors() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_OpenDoors"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_DoorState(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DoorState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
