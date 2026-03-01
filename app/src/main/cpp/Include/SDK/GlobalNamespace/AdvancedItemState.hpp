#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "LimitAxis.hpp"

namespace GlobalNamespace {
    struct AdvancedItemState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AdvancedItemState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetEncodedDeltaRotation() {
            static BNM::Method<float> _method = GetClass().GetMethod(O("get_EncodedDeltaRotation"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        int GetEncodedValue() {
            static BNM::Field<int> _field = GetClass().GetField(O("_encodedValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetAngle() {
            static BNM::Field<float> _field = GetClass().GetField(O("angle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetAngleVectorWhereUpIsStandard() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("angleVectorWhereUpIsStandard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetDeltaRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("deltaRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::LimitAxis GetLimitAxis() {
            static BNM::Field<::GlobalNamespace::LimitAxis> _field = GetClass().GetField(O("limitAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AdvancedItemState_PreData* GetPreData() {
            static BNM::Field<::GlobalNamespace::AdvancedItemState_PreData*> _field = GetClass().GetField(O("preData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseGrip() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEncodedValue(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("_encodedValue"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngle(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("angle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetAngleVectorWhereUpIsStandard(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("angleVectorWhereUpIsStandard"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDeltaRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("deltaRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("index"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLimitAxis(::GlobalNamespace::LimitAxis value) {
            static BNM::Field<::GlobalNamespace::LimitAxis> _field = GetClass().GetField(O("limitAxis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPreData(::GlobalNamespace::AdvancedItemState_PreData* value) {
            static BNM::Field<::GlobalNamespace::AdvancedItemState_PreData*> _field = GetClass().GetField(O("preData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseGrip(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseGrip"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Decode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Decode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void* DecodeAdvancedItemState(int encodedValue) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("DecodeAdvancedItemState"), {"encodedValue"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(encodedValue);
        }
        ::GlobalNamespace::AdvancedItemState* DecodeData(int encoded) {
            static BNM::Method<::GlobalNamespace::AdvancedItemState*> _m = GetClass().GetMethod(O("DecodeData"), {"encoded"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(encoded);
        }
        void DecodeDeltaRotation(float encodedDelta, bool isFlipped) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DecodeDeltaRotation"), {"encodedDelta", "isFlipped"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(encodedDelta, isFlipped);
        }
        void Encode() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Encode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        int EncodeData() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EncodeData"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float get_EncodedDeltaRotation() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("get_EncodedDeltaRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        float GetEncodedDeltaRotation_1() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetEncodedDeltaRotation"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Unity::Quaternion GetQuaternion() {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("GetQuaternion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
