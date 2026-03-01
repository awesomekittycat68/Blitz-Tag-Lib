#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SerializableBSPNode_Axis.hpp"

namespace GlobalNamespace {
    struct SerializableBSPNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SerializableBSPNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetMatrixIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_matrixIndex"));
            return _method.Call();
        }
        int GetOutsideChildIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_outsideChildIndex"));
            return _method.Call();
        }
        int GetZoneIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_zoneIndex"));
            return _method.Call();
        }
        ::GlobalNamespace::SerializableBSPNode_Axis GetAxis() {
            static BNM::Field<::GlobalNamespace::SerializableBSPNode_Axis> _field = GetClass().GetField(O("axis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetLeftChildIndex() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("leftChildIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int16_t GetRightChildIndex() {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("rightChildIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetSplitValue() {
            static BNM::Field<float> _field = GetClass().GetField(O("splitValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAxis(::GlobalNamespace::SerializableBSPNode_Axis value) {
            static BNM::Field<::GlobalNamespace::SerializableBSPNode_Axis> _field = GetClass().GetField(O("axis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeftChildIndex(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("leftChildIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightChildIndex(int16_t value) {
            static BNM::Field<int16_t> _field = GetClass().GetField(O("rightChildIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSplitValue(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("splitValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        int get_matrixIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_matrixIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_outsideChildIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_outsideChildIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_zoneIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_zoneIndex"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
