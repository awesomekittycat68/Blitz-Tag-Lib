#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CosmeticWardrobeProximityDetector : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticWardrobeProximityDetector");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Array<::Collider*>* GetOverlapColliders() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Collider*>*> _field = GetClass().GetField(O("overlapColliders"));
            return _field.Get();
        }
        ::SphereCollider* GetWardrobeNearbyCollider() {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("wardrobeNearbyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::List<::SphereCollider*>* GetWardrobeNearbyDetection() {
            static BNM::Field<::BNM::Structures::Mono::List<::SphereCollider*>*> _field = GetClass().GetField(O("wardrobeNearbyDetection"));
            return _field.Get();
        }
        void SetWardrobeNearbyCollider(::SphereCollider* value) {
            static BNM::Field<::SphereCollider*> _field = GetClass().GetField(O("wardrobeNearbyCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetWardrobeNearbyDetection(::BNM::Structures::Mono::List<::SphereCollider*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::SphereCollider*>*> _field = GetClass().GetField(O("wardrobeNearbyDetection"));
            _field.Set(value);
        }
        static bool IsUserNearWardrobe(::BNM::Structures::Mono::String* userID) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsUserNearWardrobe"), {"userID"});
            return _m.Call(userID);
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
    };
}
