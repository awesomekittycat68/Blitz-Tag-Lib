#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "BuilderMovingPart_BuilderMovingPartType.hpp"

namespace GorillaTagScripts_Builder {
    struct BuilderMovingPart : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "BuilderMovingPart");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCurrForward() {
            static BNM::Field<bool> _field = GetClass().GetField(O("currForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCurrT() {
            static BNM::Field<float> _field = GetClass().GetField(O("currT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCycleDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetCycleDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistance() {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDtSinceServerUpdate() {
            static BNM::Field<float> _field = GetClass().GetField(O("dtSinceServerUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetEndXf() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetInitLocalPos() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("initLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Quaternion GetInitLocalRotation() {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("initLocalRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsMoving() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetLastServerTimeStamp() {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetLerpAlpha() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lerpAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType GetMoveType() {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType> _field = GetClass().GetField(O("moveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTagScripts::BuilderAttachGridPlane*>* GetMyGridPlanes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts::BuilderAttachGridPlane*>*> _field = GetClass().GetField(O("myGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderPiece* GetMyPiece() {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetNUMPAUSENODES() {
            static BNM::Field<int> _field = GetClass().GetField(O("NUM_PAUSE_NODES"));
            return _field.Get();
        }
        float GetPercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("percent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseDir() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetReverseDirOnCycle() {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDirOnCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateAmt() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRotateStartAmt() {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateStartAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetStartPercentage() {
            static BNM::Field<float> _field = GetClass().GetField(O("startPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint32_t GetStartPercentageCycleOffset() {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("startPercentageCycleOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetStartXf() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetVelocity() {
            static BNM::Field<float> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrForward(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("currForward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrT(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("currT"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCycleDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDelay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCycleDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("cycleDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistance(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDtSinceServerUpdate(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("dtSinceServerUpdate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEndXf(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("endXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitLocalPos(::BNM::Structures::Unity::Vector3 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("initLocalPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitLocalRotation(::BNM::Structures::Unity::Quaternion value) {
            static BNM::Field<::BNM::Structures::Unity::Quaternion> _field = GetClass().GetField(O("initLocalRotation"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsMoving(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isMoving"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLastServerTimeStamp(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("lastServerTimeStamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLerpAlpha(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("lerpAlpha"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMoveType(::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType value) {
            static BNM::Field<::GorillaTagScripts_Builder::BuilderMovingPart_BuilderMovingPartType> _field = GetClass().GetField(O("moveType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyGridPlanes(::BNM::Structures::Mono::Array<::GorillaTagScripts::BuilderAttachGridPlane*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTagScripts::BuilderAttachGridPlane*>*> _field = GetClass().GetField(O("myGridPlanes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMyPiece(::GlobalNamespace::BuilderPiece* value) {
            static BNM::Field<::GlobalNamespace::BuilderPiece*> _field = GetClass().GetField(O("myPiece"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetNUMPAUSENODES(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NUM_PAUSE_NODES"));
            _field.Set(value);
        }
        void SetPercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("percent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseDir(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDir"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReverseDirOnCycle(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("reverseDirOnCycle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateAmt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRotateStartAmt(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("rotateStartAmt"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPercentage(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("startPercentage"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartPercentageCycleOffset(uint32_t value) {
            static BNM::Field<uint32_t> _field = GetClass().GetField(O("startPercentageCycleOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartXf(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("startXf"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetVelocity(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("velocity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ActivateAtNode(uint8_t node, int timestamp) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ActivateAtNode"), {"node", "timestamp"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node, timestamp);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        float CycleCompletionPercent() {
            static BNM::Method<float> _m = GetClass().GetMethod(O("CycleCompletionPercent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int CycleCount() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("CycleCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t CycleLengthMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("CycleLengthMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t GetNearestNode() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetNearestNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        uint8_t GetStartNode() {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("GetStartNode"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int GetTimeOffsetMS() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("GetTimeOffsetMS"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void InitMovingGrid() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitMovingGrid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool IsAnchoredToTable() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsAnchoredToTable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool IsEvenCycle() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsEvenCycle"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int64_t NetworkTimeMs() {
            static BNM::Method<int64_t> _m = GetClass().GetMethod(O("NetworkTimeMs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnPieceDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnPieceDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void PauseMovement(uint8_t node) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PauseMovement"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node);
        }
        double PlatformTime() {
            static BNM::Method<double> _m = GetClass().GetMethod(O("PlatformTime"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Progress() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Progress"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ResetMovingGrid() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ResetMovingGrid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMoving(bool isMoving) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMoving"), {"isMoving"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isMoving);
        }
        void UpdateMovingGrid() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateMovingGrid"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Unity::Vector3 UpdatePointToPoint(float perc) {
            static BNM::Method<::BNM::Structures::Unity::Vector3> _m = GetClass().GetMethod(O("UpdatePointToPoint"), {"perc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(perc);
        }
        void UpdateRotation(float perc) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRotation"), {"perc"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(perc);
        }
    };
}
