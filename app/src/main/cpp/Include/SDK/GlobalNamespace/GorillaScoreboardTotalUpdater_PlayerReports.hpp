#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaScoreboardTotalUpdater_PlayerReports : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaScoreboardTotalUpdater").GetInnerClass("PlayerReports");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetCheating() {
            static BNM::Field<bool> _field = GetClass().GetField(O("cheating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHateSpeech() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hateSpeech"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetPressedReport() {
            static BNM::Field<bool> _field = GetClass().GetField(O("pressedReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetToxicity() {
            static BNM::Field<bool> _field = GetClass().GetField(O("toxicity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCheating(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("cheating"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHateSpeech(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hateSpeech"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPressedReport(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("pressedReport"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetToxicity(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("toxicity"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
