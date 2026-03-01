#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$6.hpp"

namespace GorillaTagScripts {
    struct FlowersDataStruct : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "FlowersDataStruct");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetFlowerCount() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_FlowerCount"));
            return _method.Call();
        }
        void SetFlowerCount(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_FlowerCount"));
            _method.Call(value);
        }
        int get_FlowerCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_FlowerCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_FlowerStateData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_FlowerStateData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_FlowerWateredData() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_FlowerWateredData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_FlowerCount(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_FlowerCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
