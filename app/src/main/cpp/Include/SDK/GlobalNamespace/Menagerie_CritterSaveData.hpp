#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct Menagerie_CritterSaveData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "Menagerie").GetInnerClass("CritterSaveData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::Menagerie_CritterData*>* GetCollectedCritters() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::Menagerie_CritterData*>*> _field = GetClass().GetField(O("collectedCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetDonatedCritterCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("donatedCritterCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetFavoriteCritter() {
            static BNM::Field<int> _field = GetClass().GetField(O("favoriteCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::Menagerie_CritterData*>* GetNewCritters() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::Menagerie_CritterData*>*> _field = GetClass().GetField(O("newCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCollectedCritters(::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::Menagerie_CritterData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::Menagerie_CritterData*>*> _field = GetClass().GetField(O("collectedCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDonatedCritterCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("donatedCritterCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFavoriteCritter(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("favoriteCritter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNewCritters(::BNM::Structures::Mono::List<::GlobalNamespace::Menagerie_CritterData*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::Menagerie_CritterData*>*> _field = GetClass().GetField(O("newCritters"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Clear() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Clear"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
