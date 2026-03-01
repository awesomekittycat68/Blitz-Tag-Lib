#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$1.hpp"

namespace GlobalNamespace {
    struct RandomTimedSeedManager_RandomTimedSeedManagerData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "RandomTimedSeedManager").GetInnerClass("RandomTimedSeedManagerData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCurrentSyncTime() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_currentSyncTime"));
            return _method.Call();
        }
        void SetCurrentSyncTime(float value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_currentSyncTime"));
            _method.Call(value);
        }
        int GetSeed() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_seed"));
            return _method.Call();
        }
        void SetSeed(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_seed"));
            _method.Call(value);
        }
        float get_currentSyncTime() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_currentSyncTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_seed() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_seed"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_currentSyncTime(float value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_currentSyncTime"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_seed(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_seed"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
