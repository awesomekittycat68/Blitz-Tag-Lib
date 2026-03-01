#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GRUIStationEmployeeBadges : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GRUIStationEmployeeBadges");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>* GetBadgeDispensers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>*> _field = GetClass().GetField(O("badgeDispensers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetDispenserForActorNr() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("dispenserForActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GhostReactor* GetReactor() {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GRBadge*>* GetRegisteredBadges() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBadge*>*> _field = GetClass().GetField(O("registeredBadges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* GetTempRigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            return _field.Get();
        }
        void SetBadgeDispensers(::BNM::Structures::Mono::List<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRUIEmployeeBadgeDispenser*>*> _field = GetClass().GetField(O("badgeDispensers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDispenserForActorNr(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("dispenserForActorNr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactor(::GlobalNamespace::GhostReactor* value) {
            static BNM::Field<::GlobalNamespace::GhostReactor*> _field = GetClass().GetField(O("reactor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRegisteredBadges(::BNM::Structures::Mono::List<::GlobalNamespace::GRBadge*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GRBadge*>*> _field = GetClass().GetField(O("registeredBadges"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetTempRigs(::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::VRRig*>*> _field = GetClass().GetField(O("tempRigs"));
            _field.Set(value);
        }
        ::GlobalNamespace::GRUIEmployeeBadgeDispenser* GetDispenserForPlayer(int actorNumber) {
            static BNM::Method<::GlobalNamespace::GRUIEmployeeBadgeDispenser*> _m = GetClass().GetMethod(O("GetDispenserForPlayer"), {"actorNumber"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(actorNumber);
        }
        void Init(::GlobalNamespace::GhostReactor* reactor) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Init"), {"reactor"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(reactor);
        }
        void LinkBadgeToDispenser(::GlobalNamespace::GRBadge* badge, int64_t createData) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LinkBadgeToDispenser"), {"badge", "createData"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(badge, createData);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RefreshBadgesAuthority() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RefreshBadgesAuthority"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RemoveBadge(::GlobalNamespace::GRBadge* badge) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveBadge"), {"badge"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(badge);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRigs() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRigs"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UpdateRigs(::GlobalNamespace::RigContainer* container) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateRigs"), {"container"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(container);
        }
    };
}
