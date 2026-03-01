#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIExclusionZone : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIExclusionZone");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>* GetGadgetsInZone() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>*> _field = GetClass().GetField(O("gadgetsInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::SIPlayer*>* GetPlayersInZone() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIPlayer*>*> _field = GetClass().GetField(O("playersInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGadgetsInZone(::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIGadget*>*> _field = GetClass().GetField(O("gadgetsInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayersInZone(::BNM::Structures::Mono::List<::GlobalNamespace::SIPlayer*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::SIPlayer*>*> _field = GetClass().GetField(O("playersInZone"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ClearGadget(::GlobalNamespace::SIGadget* gadget) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearGadget"), {"gadget"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(gadget);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnTriggerEnter(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerEnter"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
        void OnTriggerExit(::Collider* other) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTriggerExit"), {"other"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(other);
        }
    };
}
