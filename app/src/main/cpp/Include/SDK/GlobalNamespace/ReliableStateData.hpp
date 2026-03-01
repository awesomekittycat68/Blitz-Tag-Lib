#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$10.hpp"

namespace GlobalNamespace {
    struct ReliableStateData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ReliableStateData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetHeader() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_Header"));
            return _method.Call();
        }
        void SetHeader(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Header"));
            _method.Call(value);
        }
        int GetLThrowableProjectileIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_LThrowableProjectileIndex"));
            return _method.Call();
        }
        void SetLThrowableProjectileIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_LThrowableProjectileIndex"));
            _method.Call(value);
        }
        int64_t GetPackedBeads() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_PackedBeads"));
            return _method.Call();
        }
        void SetPackedBeads(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PackedBeads"));
            _method.Call(value);
        }
        int64_t GetPackedBeadsMoreThan6() {
            static BNM::Method<int64_t> _method = GetClass().GetMethod(O("get_PackedBeadsMoreThan6"));
            return _method.Call();
        }
        void SetPackedBeadsMoreThan6(int64_t value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PackedBeadsMoreThan6"));
            _method.Call(value);
        }
        int GetRandomThrowableIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RandomThrowableIndex"));
            return _method.Call();
        }
        void SetRandomThrowableIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RandomThrowableIndex"));
            _method.Call(value);
        }
        int GetRThrowableProjectileIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_RThrowableProjectileIndex"));
            return _method.Call();
        }
        void SetRThrowableProjectileIndex(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_RThrowableProjectileIndex"));
            _method.Call(value);
        }
        int GetSizeLayerMask() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_SizeLayerMask"));
            return _method.Call();
        }
        void SetSizeLayerMask(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_SizeLayerMask"));
            _method.Call(value);
        }
        int GetWearablesPackedState() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_WearablesPackedState"));
            return _method.Call();
        }
        void SetWearablesPackedState(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_WearablesPackedState"));
            _method.Call(value);
        }
        int64_t get_Header() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_Header"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_LThrowableProjectileIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_LThrowableProjectileIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_PackedBeads() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_PackedBeads"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t get_PackedBeadsMoreThan6() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("get_PackedBeadsMoreThan6"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RandomThrowableIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RandomThrowableIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_RThrowableProjectileIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_RThrowableProjectileIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_SizeLayerMask() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_SizeLayerMask"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_TransferrableStates() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_TransferrableStates"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_WearablesPackedState() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_WearablesPackedState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_Header(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Header"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_LThrowableProjectileIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_LThrowableProjectileIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PackedBeads(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PackedBeads"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PackedBeadsMoreThan6(int64_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PackedBeadsMoreThan6"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RandomThrowableIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RandomThrowableIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_RThrowableProjectileIndex(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_RThrowableProjectileIndex"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_SizeLayerMask(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_SizeLayerMask"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_WearablesPackedState(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_WearablesPackedState"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
