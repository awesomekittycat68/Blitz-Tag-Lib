#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SRand : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SRand");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr double MAX_AS_DOUBLE = 268435456.0;
        static constexpr uint32_t MAX_PLUS_ONE = 268435457;
        static constexpr double STEP_SIZE = 3.725290298461914e-09;
        static constexpr float ONE_THIRD = 0.33333334f;
        uint32_t GetSeed() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetState() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSeed(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_seed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetState(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("_state"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int GetHashCode_1() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetHashCode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint32_t Mix(uint32_t x) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("Mix"), {"x"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(x);
        }
        static ::GlobalNamespace::SRand New() {
            static BNM::Method<::GlobalNamespace::SRand> _m = GetClass().GetMethod(O("New"));
            return _m.Call();
        }
        bool NextBool() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("NextBool"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t NextByte() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("NextByte"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Color NextColor() {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("NextColor"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* NextColor32() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("NextColor32"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double NextDouble() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("NextDouble"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        double NextDouble(double max) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("NextDouble"), {"max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(max);
        }
        double NextDouble(double min, double max) {
            static BNM::Method<double> _m = GetClass().GetMethod(O("NextDouble"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max);
        }
        float NextFloat() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NextFloat"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float NextFloat(float max) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NextFloat"), {"max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(max);
        }
        float NextFloat(float min, float max) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("NextFloat"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max);
        }
        int NextInt() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int NextInt(int max) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextInt"), {"max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(max);
        }
        int NextInt(int min, int max) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextInt"), {"min", "max"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max);
        }
        int NextIntWithExclusion(int min, int max, int exclude) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextIntWithExclusion"), {"min", "max", "exclude"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max, exclude);
        }
        int NextIntWithExclusion2(int min, int max, int exclude, int exclude2) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("NextIntWithExclusion2"), {"min", "max", "exclude", "exclude2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(min, max, exclude, exclude2);
        }
        ::BNM::Structures::Unity::Vector3 NextPointInsideBox(::BNM::Structures::Unity::Vector3 extents) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("NextPointInsideBox"), {"extents"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(extents);
        }
        ::BNM::Structures::Unity::Vector3 NextPointInsideSphere(float radius) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("NextPointInsideSphere"), {"radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(radius);
        }
        ::BNM::Structures::Unity::Vector3 NextPointOnSphere(float radius) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("NextPointOnSphere"), {"radius"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(radius);
        }
        uint32_t NextState() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("NextState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint32_t NextUInt() {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("NextUInt"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Reset() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Reset(int seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        void Reset(uint32_t seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        void Reset(int64_t seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        template <typename TP0 = void*>
        void Reset(TP0 seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        void Reset(::BNM::Structures::Mono::String* seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        void Reset(::BNM::Structures::Mono::Array<uint8_t>* seed) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Reset"), {"seed"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(seed);
        }
        template <typename T>
        void Shuffle(::BNM::Structures::Mono::Array<T>* array) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Shuffle"), {"array"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(array);
        }
        template <typename T>
        void Shuffle(::BNM::Structures::Mono::List<T>* list) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Shuffle"), {"list"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(list);
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
