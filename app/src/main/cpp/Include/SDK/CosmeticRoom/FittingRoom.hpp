#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaNetworking/CosmeticsController_CosmeticItem.hpp"

namespace CosmeticRoom {
    struct FittingRoom : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("CosmeticRoom", "FittingRoom");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetAddOnEnable() {
            static BNM::Field<bool> _field = GetClass().GetField(O("addOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetConsoleMesh() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("consoleMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::FittingRoomButton*>* GetFittingRoomButtons() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FittingRoomButton*>*> _field = GetClass().GetField(O("fittingRoomButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetIterator() {
            static BNM::Field<int> _field = GetClass().GetField(O("iterator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAddOnEnable(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("addOnEnable"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetConsoleMesh(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("consoleMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFittingRoomButtons(::BNM::Structures::Mono::Array<::GlobalNamespace::FittingRoomButton*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::FittingRoomButton*>*> _field = GetClass().GetField(O("fittingRoomButtons"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIterator(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("iterator"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void InitializeForCustomMap(bool useCustomConsoleMesh) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeForCustomMap"), {"useCustomConsoleMesh"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(useCustomConsoleMesh);
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
        void UpdateFromCart(::BNM::Structures::Mono::List<::GorillaNetworking::CosmeticsController_CosmeticItem>* currentCart, ::GorillaNetworking::CosmeticsController_CosmeticSet* tryOnSet) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UpdateFromCart"), {"currentCart", "tryOnSet"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(currentCart, tryOnSet);
        }
    };
}
