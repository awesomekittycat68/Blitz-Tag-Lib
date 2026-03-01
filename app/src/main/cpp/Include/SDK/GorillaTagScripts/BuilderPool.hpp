#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/SnapBounds.hpp"

namespace GorillaTagScripts {
    struct BuilderPool : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "BuilderPool");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::BuilderPool* GetInstance() {
            static BNM::Field<::GorillaTagScripts::BuilderPool*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static constexpr int POOl_CAPACITY = 128;
        static constexpr int INITIAL_INSTANCE_COUNT_STARTER = 32;
        static constexpr int INITIAL_INSTANCE_COUNT_PREMIUM = 8;
        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>* GetBumpGlowPool() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>*> _field = GetClass().GetField(O("bumpGlowPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BuilderBumpGlow* GetBumpGlowPrefab() {
            static BNM::Field<::GlobalNamespace::BuilderBumpGlow*> _field = GetClass().GetField(O("bumpGlowPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetHasBuiltPieceSets() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBuiltPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTagScripts::BuilderPool* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts::BuilderPool*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        bool GetIsSetup() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, int>* GetPiecePoolLookup() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("piecePoolLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*>* GetPiecePools() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*>*> _field = GetClass().GetField(O("piecePools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::SnapOverlap*>* GetSnapOverlapPool() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::SnapOverlap*>*> _field = GetClass().GetField(O("snapOverlapPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBumpGlowPool(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderBumpGlow*>*> _field = GetClass().GetField(O("bumpGlowPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetBumpGlowPrefab(::GlobalNamespace::BuilderBumpGlow* value) {
            static BNM::Field<::GlobalNamespace::BuilderBumpGlow*> _field = GetClass().GetField(O("bumpGlowPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHasBuiltPieceSets(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hasBuiltPieceSets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetInstance(::GorillaTagScripts::BuilderPool* value) {
            static BNM::Field<::GorillaTagScripts::BuilderPool*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetIsSetup(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isSetup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiecePoolLookup(::BNM::Structures::Mono::Dictionary<int, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, int>*> _field = GetClass().GetField(O("piecePoolLookup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPiecePools(::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderPiece*>*>*> _field = GetClass().GetField(O("piecePools"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSnapOverlapPool(::BNM::Structures::Mono::List<::GorillaTagScripts::SnapOverlap*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::SnapOverlap*>*> _field = GetClass().GetField(O("snapOverlapPool"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddToGlowBumpPool(int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToGlowBumpPool"), {"count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(count);
        }
        void AddToPool(int pieceType, int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToPool"), {"pieceType", "count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(pieceType, count);
        }
        void AddToSnapOverlapPool(int count) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddToSnapOverlapPool"), {"count"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(count);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Coroutine::IEnumerator* BuildFromPieceSets() {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("BuildFromPieceSets"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void BuildFromShelves(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderShelf*>* shelves) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BuildFromShelves"), {"shelves"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(shelves);
        }
        ::GlobalNamespace::BuilderBumpGlow* CreateGlowBump() {
            static BNM::Method<::GlobalNamespace::BuilderBumpGlow*> _m = GetClass().GetMethod(O("CreateGlowBump"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::BuilderPiece* CreatePiece(int pieceType, bool assertNotEmpty) {
            static BNM::Method<::GlobalNamespace::BuilderPiece*> _m = GetClass().GetMethod(O("CreatePiece"), {"pieceType", "assertNotEmpty"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(pieceType, assertNotEmpty);
        }
        ::GorillaTagScripts::SnapOverlap* CreateSnapOverlap(::GorillaTagScripts::BuilderAttachGridPlane* otherPlane, ::GlobalNamespace::SnapBounds bounds) {
            static BNM::Method<::GorillaTagScripts::SnapOverlap*> _m = GetClass().GetMethod(O("CreateSnapOverlap"), {"otherPlane", "bounds"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(otherPlane, bounds);
        }
        void DestroyBumpGlow(::GlobalNamespace::BuilderBumpGlow* bump) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyBumpGlow"), {"bump"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bump);
        }
        void DestroyPiece(::GlobalNamespace::BuilderPiece* piece) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroyPiece"), {"piece"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(piece);
        }
        void DestroySnapOverlap(::GorillaTagScripts::SnapOverlap* snapOverlap) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("DestroySnapOverlap"), {"snapOverlap"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(snapOverlap);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Setup() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Setup"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
