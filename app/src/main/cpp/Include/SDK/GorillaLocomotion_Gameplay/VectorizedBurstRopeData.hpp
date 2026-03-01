#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct VectorizedBurstRopeData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "VectorizedBurstRopeData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetLastPosX() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastPosX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastPosY() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastPosY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetLastPosZ() {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastPosZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetNodeMass() {
            static BNM::Field<void*> _field = GetClass().GetField(O("nodeMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPosX() {
            static BNM::Field<void*> _field = GetClass().GetField(O("posX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPosY() {
            static BNM::Field<void*> _field = GetClass().GetField(O("posY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetPosZ() {
            static BNM::Field<void*> _field = GetClass().GetField(O("posZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRopeRoots() {
            static BNM::Field<void*> _field = GetClass().GetField(O("ropeRoots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetValidNodes() {
            static BNM::Field<void*> _field = GetClass().GetField(O("validNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLastPosX(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastPosX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosY(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastPosY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastPosZ(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("lastPosZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNodeMass(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("nodeMass"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosX(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("posX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosY(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("posY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPosZ(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("posZ"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRopeRoots(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("ropeRoots"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetValidNodes(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("validNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
