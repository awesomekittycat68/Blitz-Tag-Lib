#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "NetworkedRandomProvider_OutputMode.hpp"

namespace GorillaTag_Cosmetics {
    struct NetworkedRandomProvider : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "NetworkedRandomProvider");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetDebugResult() {
            static BNM::Field<float> _field = GetClass().GetField(O("debugResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetDebugWindow() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("debugWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDoubleMax() {
            static BNM::Field<double> _field = GetClass().GetField(O("doubleMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetDoubleMin() {
            static BNM::Field<double> _field = GetClass().GetField(O("doubleMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetFloatRange() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("floatRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIncludeRoomNameInSeed() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeRoomNameInSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetObjectSalt() {
            static BNM::Field<int> _field = GetClass().GetField(O("objectSalt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::NetworkedRandomProvider_OutputMode GetOutputMode() {
            static BNM::Field<::GorillaTag_Cosmetics::NetworkedRandomProvider_OutputMode> _field = GetClass().GetField(O("outputMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOwnerID() {
            static BNM::Field<int> _field = GetClass().GetField(O("OwnerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TransferrableObject* GetParentTransferable() {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWindowSeconds() {
            static BNM::Field<float> _field = GetClass().GetField(O("windowSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDebugResult(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("debugResult"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDebugWindow(int64_t value) {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("debugWindow"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoubleMax(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("doubleMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDoubleMin(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("doubleMin"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFloatRange(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("floatRange"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIncludeRoomNameInSeed(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeRoomNameInSeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetObjectSalt(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("objectSalt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOutputMode(::GorillaTag_Cosmetics::NetworkedRandomProvider_OutputMode value) {
            static BNM::Field<::GorillaTag_Cosmetics::NetworkedRandomProvider_OutputMode> _field = GetClass().GetField(O("outputMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOwnerID(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("OwnerID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParentTransferable(::GlobalNamespace::TransferrableObject* value) {
            static BNM::Field<::GlobalNamespace::TransferrableObject*> _field = GetClass().GetField(O("parentTransferable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWindowSeconds(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("windowSeconds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static uint64_t BuildSeed(int64_t windowIndex, int ownerId, int objectSalt, uint32_t roomSalt) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("BuildSeed"), {"windowIndex", "ownerId", "objectSalt", "roomSalt"});
            return _m.Call(windowIndex, ownerId, objectSalt, roomSalt);
        }
        void EnsureOwner() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureOwner"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::BNM::Structures::Mono::String* GetHierarchyPath(::Transform* t) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetHierarchyPath"), {"t"});
            return _m.Call(t);
        }
        double GetSelectedAsDouble() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetSelectedAsDouble"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetSelectedAsFloat() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetSelectedAsFloat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double GetSharedTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("GetSharedTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t GetWindowIndex() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("GetWindowIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static uint64_t Mix64(uint64_t x) {
            static BNM::Method<uint64_t> _m = GetClass().GetMethod(O("Mix64"), {"x"});
            return _m.Call(x);
        }
        double NextDouble(double min, double max) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("NextDouble"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max);
        }
        float NextFloat(float min, float max) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NextFloat"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max);
        }
        float NextFloat01() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NextFloat01"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnValidate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnValidate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool ShowDoubleRange() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShowDoubleRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool ShowFloatRange() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShowFloatRange"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static uint32_t StableHash(::BNM::Structures::Mono::String* s) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("StableHash"), {"s"});
            return _m.Call(s);
        }
        void TrySetID() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("TrySetID"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static double UnitDouble01(int64_t windowIndex, int ownerId, int objectSalt, uint32_t roomSalt) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("UnitDouble01"), {"windowIndex", "ownerId", "objectSalt", "roomSalt"});
            return _m.Call(windowIndex, ownerId, objectSalt, roomSalt);
        }
        static float UnitFloat01(int64_t windowIndex, int ownerId, int objectSalt, uint32_t roomSalt) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("UnitFloat01"), {"windowIndex", "ownerId", "objectSalt", "roomSalt"});
            return _m.Call(windowIndex, ownerId, objectSalt, roomSalt);
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
