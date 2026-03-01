#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_RankedModePlayerProgressionData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("RankedModePlayerProgressionData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>* GetPlatformData() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>*> _field = GetClass().GetField(O("platformData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetPlayfabID() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playfabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlatformData(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeProgressionPlatformData*>*> _field = GetClass().GetField(O("platformData"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayfabID(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("playfabID"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
