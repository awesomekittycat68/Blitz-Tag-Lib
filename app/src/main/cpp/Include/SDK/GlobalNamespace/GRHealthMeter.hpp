#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRHealthMeter : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRHealthMeter");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMaxHP() {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRHealthMeterNode*>* GetNodes() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRHealthMeterNode*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxHP(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("maxHP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodes(::BNM::Structures::Mono::List<::GlobalNamespace::GRHealthMeterNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRHealthMeterNode*>*> _field = GetClass().GetField(O("nodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHP(int hp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetHP"), {"hp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hp);
        }
        void Setup(int maxHP) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"), {"maxHP"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(maxHP);
        }
    };
}
