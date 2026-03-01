#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ReleaseFoodWhenUpsideDown : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ReleaseFoodWhenUpsideDown");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("angle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Critters_Scripts::CrittersFoodDispenser* GetDispenser() {
            static BNM::Field<::Critters_Scripts::CrittersFoodDispenser*> _field = GetClass().GetField(O("dispenser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFoodSubIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("foodSubIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLatch() {
            static BNM::Field<bool> _field = GetClass().GetField(O("latch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetMaxFood() {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        double GetNextSpawnTime() {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSpawnDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetSpawnPoint() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingFood() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartingSize() {
            static BNM::Field<float> _field = GetClass().GetField(O("startingSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenser(::Critters_Scripts::CrittersFoodDispenser* value) {
            static BNM::Field<::Critters_Scripts::CrittersFoodDispenser*> _field = GetClass().GetField(O("dispenser"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFoodSubIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("foodSubIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLatch(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("latch"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaxFood(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("maxFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextSpawnTime(double value) {
            static BNM::Field<double> _field = GetClass().GetField(O("nextSpawnTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("spawnDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSpawnPoint(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("spawnPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingFood(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingFood"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingSize(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startingSize"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
