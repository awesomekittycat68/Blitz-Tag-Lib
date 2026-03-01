#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_Cosmetics {
    struct CosmeticsProximityReactorManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "CosmeticsProximityReactorManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTag_Cosmetics::CosmeticsProximityReactorManager* get_Instance() {
            static BNM::Method<::GorillaTag_Cosmetics::CosmeticsProximityReactorManager*> method = GetClass().GetMethod(O("get_Instance"));
            return method.Call();
        }
        static ::GorillaTag_Cosmetics::CosmeticsProximityReactorManager* GetInstance() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactorManager*> field = GetClass().GetField("_instance");
            return field.Get();
        }
        ::GorillaTag_Cosmetics::CosmeticsProximityReactorManager* GetInstance_pg() {
            static BNM::Method<::GorillaTag_Cosmetics::CosmeticsProximityReactorManager*> _method = GetClass().GetMethod(O("get_Instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static ::GorillaTag_Cosmetics::CosmeticsProximityReactorManager* GetInstance_f() {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactorManager*> _field = GetClass().GetField(O("_instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>*>* GetByType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>*>*> _field = GetClass().GetField(O("byType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>* GetCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>*> _field = GetClass().GetField(O("cosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>* GetGorillaBodyPart() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>*> _field = GetClass().GetField(O("gorillaBodyPart"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetGroupCursor() {
            static BNM::Field<int> _field = GetClass().GetField(O("groupCursor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticsProximityReactor*, int>* GetMatchedFrame() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GorillaTag_Cosmetics::CosmeticsProximityReactor*, int>*> _field = GetClass().GetField(O("matchedFrame"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetSharedKeysCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("SharedKeysCache"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetTypeKeysCache() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("typeKeysCache"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetTypeKeysDirty() {
            static BNM::Field<bool> _field = GetClass().GetField(O("typeKeysDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GorillaTag_Cosmetics::CosmeticsProximityReactorManager* value) {
            static BNM::Field<::GorillaTag_Cosmetics::CosmeticsProximityReactorManager*> _field = GetClass().GetField(O("_instance"));
            _field.Set(value);
        }
        void SetGroupCursor(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("groupCursor"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTypeKeysDirty(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("typeKeysDirty"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool AnyGroupHasTwo() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AnyGroupHasTwo"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static bool AreCollidersWithinThreshold(::GorillaTag_Cosmetics::CosmeticsProximityReactor* a, ::GorillaTag_Cosmetics::CosmeticsProximityReactor* b, float threshold, ::BNM::Structures::Unity::Vector3& contactPoint) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("AreCollidersWithinThreshold"), {"a", "b", "threshold", "contactPoint"});
            return _m.Call(a, b, threshold, &contactPoint);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void BreakTheBoundForGroup(::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>* group) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BreakTheBoundForGroup"), {"group"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(group);
        }
        bool CheckProximity(::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>* group) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("CheckProximity"), {"group"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(group);
        }
        static ::GorillaTag_Cosmetics::CosmeticsProximityReactorManager* get_Instance_1() {
            static BNM::Method<::GorillaTag_Cosmetics::CosmeticsProximityReactorManager*> _m = GetClass().GetMethod(O("get_Instance"));
            return _m.Call();
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
        void ProcessOneGroup(::BNM::Structures::Mono::List<::GorillaTag_Cosmetics::CosmeticsProximityReactor*>* group) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessOneGroup"), {"group"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(group);
        }
        void RebuildTypeKeysCache() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RebuildTypeKeysCache"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Register(::GorillaTag_Cosmetics::CosmeticsProximityReactor* cosmetic) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"cosmetic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmetic);
        }
        static bool ShouldSkipSameIdPair(::GorillaTag_Cosmetics::CosmeticsProximityReactor* a, ::GorillaTag_Cosmetics::CosmeticsProximityReactor* b) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ShouldSkipSameIdPair"), {"a", "b"});
            return _m.Call(a, b);
        }
        void SliceUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SliceUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        bool TryFindAnyCosmeticPartner(::GorillaTag_Cosmetics::CosmeticsProximityReactor* a, ::GorillaTag_Cosmetics::CosmeticsProximityReactor*& partner, ::BNM::Structures::Unity::Vector3& contact) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryFindAnyCosmeticPartner"), {"a", "partner", "contact"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(a, &partner, &contact);
        }
        void Unregister(::GorillaTag_Cosmetics::CosmeticsProximityReactor* cosmetic) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"cosmetic"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmetic);
        }
    };
}
