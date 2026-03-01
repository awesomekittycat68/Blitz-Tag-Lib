#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "CritterAppearance.hpp"

namespace GlobalNamespace {
    struct Menagerie_CritterData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Menagerie").GetInnerClass("CritterData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::CritterAppearance GetAppearance() {
            static BNM::Field<::GlobalNamespace::CritterAppearance> _field = GetClass().GetField(O("appearance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCritterType() {
            static BNM::Field<int> _field = GetClass().GetField(O("critterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MenagerieCritter* GetInstance() {
            static BNM::Field<::GlobalNamespace::MenagerieCritter*> _field = GetClass().GetField(O("instance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAppearance(::GlobalNamespace::CritterAppearance value) {
            static BNM::Field<::GlobalNamespace::CritterAppearance> _field = GetClass().GetField(O("appearance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCritterType(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("critterType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetInstance(::GlobalNamespace::MenagerieCritter* value) {
            static BNM::Field<::GlobalNamespace::MenagerieCritter*> _field = GetClass().GetField(O("instance"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::CritterConfiguration* GetConfiguration() {
            static BNM::Method<::GlobalNamespace::CritterConfiguration*> _m = GetClass().GetMethod(O("GetConfiguration"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* ToString_1() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("ToString"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
