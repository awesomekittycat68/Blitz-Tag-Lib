#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_DockWristStatusResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("DockWristStatusResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetCurrentUpgrade1Level() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentUpgrade1Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentUpgrade2Level() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentUpgrade2Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentUpgrade3Level() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentUpgrade3Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpgrade1LevelMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("Upgrade1LevelMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpgrade2LevelMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("Upgrade2LevelMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetUpgrade3LevelMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("Upgrade3LevelMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentUpgrade1Level(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentUpgrade1Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentUpgrade2Level(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentUpgrade2Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentUpgrade3Level(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentUpgrade3Level"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade1LevelMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Upgrade1LevelMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade2LevelMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Upgrade2LevelMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUpgrade3LevelMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("Upgrade3LevelMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
