#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_$SubmitMatchScores$d__41 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("<SubmitMatchScores>d__41");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* GetData() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeSubmitMatchScoresRequestData*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
