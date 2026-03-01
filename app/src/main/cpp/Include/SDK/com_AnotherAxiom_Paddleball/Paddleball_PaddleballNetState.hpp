#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace com_AnotherAxiom_Paddleball {
    struct Paddleball_PaddleballNetState : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("com.AnotherAxiom.Paddleball", "Paddleball").GetInnerClass("PaddleballNetState");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetBallLocX() {
            static BNM::Field<float> _field = GetClass().GetField(O("BallLocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetBallLocY() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("BallLocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBallSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("BallSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetBallTrajectoryX() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("BallTrajectoryX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetBallTrajectoryY() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("BallTrajectoryY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetP0LocY() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P0LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetP1LocY() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P1LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetP2LocY() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P2LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        uint8_t GetP3LocY() {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P3LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScoreLeft() {
            static BNM::Field<int> _field = GetClass().GetField(O("ScoreLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScoreRight() {
            static BNM::Field<int> _field = GetClass().GetField(O("ScoreRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScreenMode() {
            static BNM::Field<int> _field = GetClass().GetField(O("ScreenMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBallLocX(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("BallLocX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallLocY(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("BallLocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("BallSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallTrajectoryX(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("BallTrajectoryX"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallTrajectoryY(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("BallTrajectoryY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP0LocY(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P0LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP1LocY(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P1LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP2LocY(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P2LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP3LocY(uint8_t value) {
            static BNM::Field<uint8_t> _field = GetClass().GetField(O("P3LocY"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreLeft(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ScoreLeft"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreRight(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ScoreRight"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScreenMode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("ScreenMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool Equals_1(::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState other) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Equals"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(other);
        }
    };
}
