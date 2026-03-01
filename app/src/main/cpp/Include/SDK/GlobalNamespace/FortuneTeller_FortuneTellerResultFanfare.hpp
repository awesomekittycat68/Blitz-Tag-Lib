#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FortuneResults_FortuneCategoryType.hpp"

namespace GlobalNamespace {
    struct FortuneTeller_FortuneTellerResultFanfare : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FortuneTeller").GetInnerClass("FortuneTellerResultFanfare");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::IL2CPP::Il2CppObject* GetFanfare() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fanfare"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::FortuneResults_FortuneCategoryType GetType_f() {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneCategoryType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFanfare(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("fanfare"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetType(::GlobalNamespace::FortuneResults_FortuneCategoryType value) {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneCategoryType> _field = GetClass().GetField(O("type"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
