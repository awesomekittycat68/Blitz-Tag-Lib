#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/GTDateTimeSerializable.hpp"

namespace GorillaTag_CosmeticSystem {
    struct SeasonSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "SeasonSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GTDateTimeSerializable GetReleaseDate() {
            static BNM::Field<::GlobalNamespace::GTDateTimeSerializable> _field = GetClass().GetField(O("releaseDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetSeasonName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("seasonName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetReleaseDate(::GlobalNamespace::GTDateTimeSerializable value) {
            static BNM::Field<::GlobalNamespace::GTDateTimeSerializable> _field = GetClass().GetField(O("releaseDate"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSeasonName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("seasonName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
