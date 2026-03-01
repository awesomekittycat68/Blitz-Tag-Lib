#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_$GetRankInformation$d__31 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("<GetRankInformation>d__31");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* GetData() {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionData*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData* value) {
            static BNM::Field<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionRequestData*> _field = GetClass().GetField(O("data"));
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
