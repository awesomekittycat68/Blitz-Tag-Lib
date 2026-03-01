#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GorillaTagCompetitiveServerApi_RankedModeRequestDataBase.hpp"

namespace GlobalNamespace {
    struct GorillaTagCompetitiveServerApi_RankedModeRequestDataPlatformed : ::GlobalNamespace::GorillaTagCompetitiveServerApi_RankedModeRequestDataBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaTagCompetitiveServerApi").GetInnerClass("RankedModeRequestDataPlatformed");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetPlatform() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlatform(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("platform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
