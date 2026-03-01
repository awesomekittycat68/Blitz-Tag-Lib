#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactor_EnemyEntityCreateData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactor").GetInnerClass("EnemyEntityCreateData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPatrolIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("patrolIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRespawnCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("respawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSectionIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("sectionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPatrolIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("patrolIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRespawnCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("respawnCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSectionIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sectionIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int64_t Pack() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("Pack"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static int64_t PackData(int value, int nbits, int shift) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackData"), {"value", "nbits", "shift"});
            return _m.Call(value, nbits, shift);
        }
        static ::GlobalNamespace::GhostReactor_EnemyEntityCreateData Unpack(int64_t bits) {
            static BNM::Method<::GlobalNamespace::GhostReactor_EnemyEntityCreateData> _m = GetClass().GetMethod(O("Unpack"), {"bits"});
            return _m.Call(bits);
        }
        static int UnpackData(int64_t createData, int nbits, int shift) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UnpackData"), {"createData", "nbits", "shift"});
            return _m.Call(createData, nbits, shift);
        }
    };
}
