#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace CosmeticRoom {
    struct CurrencyBoard : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CosmeticRoom", "CurrencyBoard");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::TMP_Text* GetCurrencyBoardTextTMP() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currencyBoardTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::TMP_Text* GetDailyRocksTextTMP() {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("dailyRocksTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrencyBoardTextTMP(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("currencyBoardTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDailyRocksTextTMP(::TMP_Text* value) {
            static BNM::Field<::TMP_Text*> _field = GetClass().GetField(O("dailyRocksTextTMP"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateCurrencyBoard(bool checkedDaily, bool gotDaily, int currencyBalance, int secTilTomorrow) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateCurrencyBoard"), {"checkedDaily", "gotDaily", "currencyBalance", "secTilTomorrow"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(checkedDaily, gotDaily, currencyBalance, secTilTomorrow);
        }
    };
}
