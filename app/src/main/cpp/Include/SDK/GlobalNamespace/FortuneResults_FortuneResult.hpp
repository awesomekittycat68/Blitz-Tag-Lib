#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FortuneResults_FortuneCategoryType.hpp"

namespace GlobalNamespace {
    struct FortuneResults_FortuneResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FortuneResults").GetInnerClass("FortuneResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FortuneResults_FortuneCategoryType GetFortuneType() {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneCategoryType> _field = GetClass().GetField(O("fortuneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetResultIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("resultIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFortuneType(::GlobalNamespace::FortuneResults_FortuneCategoryType value) {
            static BNM::Field<::GlobalNamespace::FortuneResults_FortuneCategoryType> _field = GetClass().GetField(O("fortuneType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("resultIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
