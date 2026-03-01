#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct TemporaryCosmeticUnlocksEnableDisable : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "TemporaryCosmeticUnlocksEnableDisable");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetMCosmeticAreaTrigger() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_cosmeticAreaTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::TickSystemTimer* GetMTimer() {
            static BNM::Field<::GorillaTag::TickSystemTimer*> _field = GetClass().GetField(O("m_timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::CosmeticWardrobe* GetMWardrobe() {
            static BNM::Field<::GlobalNamespace::CosmeticWardrobe*> _field = GetClass().GetField(O("m_wardrobe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMCosmeticAreaTrigger(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("m_cosmeticAreaTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMTimer(::GorillaTag::TickSystemTimer* value) {
            static BNM::Field<::GorillaTag::TickSystemTimer*> _field = GetClass().GetField(O("m_timer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMWardrobe(::GlobalNamespace::CosmeticWardrobe* value) {
            static BNM::Field<::GlobalNamespace::CosmeticWardrobe*> _field = GetClass().GetField(O("m_wardrobe"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void CheckWardrobeRady() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckWardrobeRady"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
