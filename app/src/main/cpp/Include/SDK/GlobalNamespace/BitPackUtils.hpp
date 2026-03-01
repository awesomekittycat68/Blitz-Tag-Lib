#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BitPackUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BitPackUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr float STEP_1023 = 0.0009775171f;
        static constexpr float QPackMax = 0.707107f;
        static constexpr float QPackScale = 361.33145f;
        static constexpr float QPackInvScale = 0.0027675421f;
        static ::BNM::Structures::Mono::Array<float>* GetKRadialLogLUT() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("kRadialLogLUT"));
            return _field.Get();
        }
        static int GetParityForAxis(float axisPos) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetParityForAxis"), {"axisPos"});
            return _m.Call(axisPos);
        }
        static void* GetParityForWorldPos(::BNM::Structures::Unity::Vector3 worldPos) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("GetParityForWorldPos"), {"worldPos"});
            return _m.Call(worldPos);
        }
        static float GetParityOffset(float anchorAxisPos, int anchorParity, int incomingParity) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("GetParityOffset"), {"anchorAxisPos", "anchorParity", "incomingParity"});
            return _m.Call(anchorAxisPos, anchorParity, incomingParity);
        }
        static int64_t PackAnchoredPosRotForNetwork(::BNM::Structures::Unity::Vector3 worldPos, ::BNM::Structures::Unity::Quaternion rot) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackAnchoredPosRotForNetwork"), {"worldPos", "rot"});
            return _m.Call(worldPos, rot);
        }
        static int16_t PackColorForNetwork(::BNM::Structures::Unity::Color col) {
            static BNM::Method<int16_t> _m = GetClass().GetMethod(O("PackColorForNetwork"), {"col"});
            return _m.Call(col);
        }
        static int64_t PackHandPosRotForNetwork(::BNM::Structures::Unity::Vector3 localPos, ::BNM::Structures::Unity::Quaternion rot) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackHandPosRotForNetwork"), {"localPos", "rot"});
            return _m.Call(localPos, rot);
        }
        static int64_t PackIntsIntoLong(int value1, int value2) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackIntsIntoLong"), {"value1", "value2"});
            return _m.Call(value1, value2);
        }
        static int PackQuaternionForNetwork(::BNM::Structures::Unity::Quaternion q) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PackQuaternionForNetwork"), {"q"});
            return _m.Call(q);
        }
        static uint32_t PackRelativePos(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Vector3 min, ::BNM::Structures::Unity::Vector3 max) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("PackRelativePos"), {"pos", "min", "max"});
            return _m.Call(pos, min, max);
        }
        static uint16_t PackRelativePos16(::BNM::Structures::Unity::Vector3 pos, ::BNM::Structures::Unity::Vector3 center, float radius) {
            static BNM::Method<uint16_t> _m = GetClass().GetMethod(O("PackRelativePos16"), {"pos", "center", "radius"});
            return _m.Call(pos, center, radius);
        }
        static uint32_t PackRotation(::BNM::Structures::Unity::Quaternion q, bool normalize) {
            static BNM::Method<uint32_t> _m = GetClass().GetMethod(O("PackRotation"), {"q", "normalize"});
            return _m.Call(q, normalize);
        }
        static int64_t PackWorldPosForNetwork(::BNM::Structures::Unity::Vector3 worldPos) {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("PackWorldPosForNetwork"), {"worldPos"});
            return _m.Call(worldPos);
        }
        static void UnpackAnchoredPosRotForNetwork(int64_t packed, ::BNM::Structures::Unity::Vector3 anchorPos, ::BNM::Structures::Unity::Vector3& pos, ::BNM::Structures::Unity::Quaternion& rot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackAnchoredPosRotForNetwork"), {"packed", "anchorPos", "pos", "rot"});
            _m.Call(packed, anchorPos, &pos, &rot);
        }
        static ::BNM::Structures::Unity::Color UnpackColorFromNetwork(int16_t data) {
            static BNM::Method<::BNM::Structures::Unity::Color> _m = GetClass().GetMethod(O("UnpackColorFromNetwork"), {"data"});
            return _m.Call(data);
        }
        static void UnpackHandPosRotFromNetwork(int64_t data, ::BNM::Structures::Unity::Vector3& localPos, ::BNM::Structures::Unity::Quaternion& handRot) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackHandPosRotFromNetwork"), {"data", "localPos", "handRot"});
            _m.Call(data, &localPos, &handRot);
        }
        static void UnpackIntsFromLong(int64_t value, int& value1, int& value2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnpackIntsFromLong"), {"value", "value1", "value2"});
            _m.Call(value, &value1, &value2);
        }
        static ::BNM::Structures::Unity::Quaternion UnpackQuaternionFromNetwork(int data) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("UnpackQuaternionFromNetwork"), {"data"});
            return _m.Call(data);
        }
        static ::BNM::Structures::Unity::Vector3 UnpackRelativePos(uint32_t data, ::BNM::Structures::Unity::Vector3 min, ::BNM::Structures::Unity::Vector3 max) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UnpackRelativePos"), {"data", "min", "max"});
            return _m.Call(data, min, max);
        }
        static ::BNM::Structures::Unity::Vector3 UnpackRelativePos16(uint16_t data, ::BNM::Structures::Unity::Vector3 center, float radius, bool snapToRadius) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UnpackRelativePos16"), {"data", "center", "radius", "snapToRadius"});
            return _m.Call(data, center, radius, snapToRadius);
        }
        static ::BNM::Structures::Unity::Quaternion UnpackRotation(uint32_t data) {
            static BNM::Method<::BNM::Structures::Unity::Quaternion> _m = GetClass().GetMethod(O("UnpackRotation"), {"data"});
            return _m.Call(data);
        }
        static int UnpackValue1FromLong(int64_t value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UnpackValue1FromLong"), {"value"});
            return _m.Call(value);
        }
        static int UnpackValue2FromLong(int64_t value) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("UnpackValue2FromLong"), {"value"});
            return _m.Call(value);
        }
        static ::BNM::Structures::Unity::Vector3 UnpackWorldPosFromNetwork(int64_t data) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UnpackWorldPosFromNetwork"), {"data"});
            return _m.Call(data);
        }
    };
}
