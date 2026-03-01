#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Paddleball_PaddleballNetState.hpp"
#include "Paddleball_ScreenMode.hpp"
#include "../GlobalNamespace/ArcadeButtons.hpp"
#include "../GlobalNamespace/ArcadeGame.hpp"
#include "../Photon_Pun/PhotonMessageInfo.hpp"

namespace com_AnotherAxiom_Paddleball {
    struct Paddleball : ::GlobalNamespace::ArcadeGame {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("com.AnotherAxiom.Paddleball", "Paddleball");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr int AUDIO_WALLBOUNCE = 0;
        static constexpr int AUDIO_PADDLEBOUNCE = 1;
        static constexpr int AUDIO_SCORE = 2;
        static constexpr int AUDIO_WIN = 3;
        static constexpr int AUDIO_PLAYERJOIN = 4;
        static constexpr int VAR_REQUESTEDPOS = 0;
        static constexpr int MAXSCORE = 10;
        static constexpr float directionToByteFactor = 127.5f;
        static constexpr float byteToDirectionFactor = 0.007843138f;
        ::Transform* GetBall() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ball"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetBallSpeedBoost() {
            static BNM::Field<float> _field = GetClass().GetField(O("ballSpeedBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetBallTrajectory() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballTrajectory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetBlackWinScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("blackWinScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetByteToYPosFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("byteToYPosFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::com_AnotherAxiom_Paddleball::Paddleball_ScreenMode GetCurrentScreenMode() {
            static BNM::Field<::com_AnotherAxiom_Paddleball::Paddleball_ScreenMode> _field = GetClass().GetField(O("currentScreenMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetGameBallSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("gameBallSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetInitialBallSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("initialBallSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState GetNetStateCur() {
            static BNM::Field<::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState> _field = GetClass().GetField(O("netStateCur"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState GetNetStateLast() {
            static BNM::Field<::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState> _field = GetClass().GetField(O("netStateLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetOfficialPos() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("officialPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::com_AnotherAxiom_Paddleball::PaddleballPaddle*>* GetP() {
            static BNM::Field<::BNM::Structures::Mono::Array<::com_AnotherAxiom_Paddleball::PaddleballPaddle*>*> _field = GetClass().GetField(O("p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetPaddleIdle() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("paddleIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetPaddleSpeed() {
            static BNM::Field<float> _field = GetClass().GetField(O("paddleSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<float>* GetRequestedPos() {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("requestedPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetReturnToTitleAfterTimestamp() {
            static BNM::Field<float> _field = GetClass().GetField(O("returnToTitleAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetScoreDisplay() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("scoreDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetScoreFormat() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("scoreFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScoreL() {
            static BNM::Field<int> _field = GetClass().GetField(O("scoreL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetScoreR() {
            static BNM::Field<int> _field = GetClass().GetField(O("scoreR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetTableSizeBall() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tableSizeBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetTableSizePaddle() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tableSizePaddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetTitleScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("titleScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetWhiteWinScreen() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("whiteWinScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetWinScreenDuration() {
            static BNM::Field<float> _field = GetClass().GetField(O("winScreenDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetYPosToByteFactor() {
            static BNM::Field<float> _field = GetClass().GetField(O("yPosToByteFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBall(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("ball"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallSpeedBoost(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("ballSpeedBoost"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBallTrajectory(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("ballTrajectory"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBlackWinScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("blackWinScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetByteToYPosFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("byteToYPosFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentScreenMode(::com_AnotherAxiom_Paddleball::Paddleball_ScreenMode value) {
            static BNM::Field<::com_AnotherAxiom_Paddleball::Paddleball_ScreenMode> _field = GetClass().GetField(O("currentScreenMode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameBallSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("gameBallSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInitialBallSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("initialBallSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateCur(::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState value) {
            static BNM::Field<::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState> _field = GetClass().GetField(O("netStateCur"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNetStateLast(::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState value) {
            static BNM::Field<::com_AnotherAxiom_Paddleball::Paddleball_PaddleballNetState> _field = GetClass().GetField(O("netStateLast"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOfficialPos(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("officialPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetP(::BNM::Structures::Mono::Array<::com_AnotherAxiom_Paddleball::PaddleballPaddle*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::com_AnotherAxiom_Paddleball::PaddleballPaddle*>*> _field = GetClass().GetField(O("p"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPaddleIdle(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("paddleIdle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPaddleSpeed(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("paddleSpeed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestedPos(::BNM::Structures::Mono::Array<float>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<float>*> _field = GetClass().GetField(O("requestedPos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReturnToTitleAfterTimestamp(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("returnToTitleAfterTimestamp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreDisplay(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("scoreDisplay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreFormat(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("scoreFormat"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreL(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("scoreL"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetScoreR(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("scoreR"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableSizeBall(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tableSizeBall"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTableSizePaddle(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("tableSizePaddle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTitleScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("titleScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWhiteWinScreen(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("whiteWinScreen"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetWinScreenDuration(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("winScreenDuration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetYPosToByteFactor(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("yPosToByteFactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ButtonDown(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonDown"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        void ButtonUp(int player, ::GlobalNamespace::ArcadeButtons button) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ButtonUp"), {"player", "button"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, button);
        }
        float ByteToYPos(uint8_t Y) {
            static BNM::Method<float> _m = GetClass().GetMethod(O("ByteToYPos"), {"Y"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(Y);
        }
        void ChangeScreen(::com_AnotherAxiom_Paddleball::Paddleball_ScreenMode mode) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeScreen"), {"mode"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(mode);
        }
        ::BNM::Structures::Mono::Array<uint8_t>* GetNetworkState() {
            static BNM::Method<::BNM::Structures::Mono::Array<uint8_t>*> _m = GetClass().GetMethod(O("GetNetworkState"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnTimeout() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTimeout"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ReadPlayerDataPUN(int player, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReadPlayerDataPUN"), {"player", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, stream, info);
        }
        void SetNetworkState(::BNM::Structures::Mono::Array<uint8_t>* b) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetNetworkState"), {"b"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(b);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateScore() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateScore"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void WritePlayerDataPUN(int player, ::Photon_Pun::PhotonStream* stream, ::Photon_Pun::PhotonMessageInfo info) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("WritePlayerDataPUN"), {"player", "stream", "info"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(player, stream, info);
        }
        uint8_t YPosToByte(float Y) {
            static BNM::Method<uint8_t> _m = GetClass().GetMethod(O("YPosToByte"), {"Y"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(Y);
        }
    };
}
