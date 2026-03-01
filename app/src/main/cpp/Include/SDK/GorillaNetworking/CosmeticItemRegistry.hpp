#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct CosmeticItemRegistry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticItemRegistry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_isInitialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        bool GetIsInitialized_f() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticItemInstance*>* GetNameToCosmeticMap() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticItemInstance*>*> _field = GetClass().GetField(O("_nameToCosmeticMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetNullItem() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_nullItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsInitialized(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isInitialized"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNameToCosmeticMap(::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticItemInstance*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::BNM::Structures::Mono::String*, ::GorillaNetworking::CosmeticItemInstance*>*> _field = GetClass().GetField(O("_nameToCosmeticMap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNullItem(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("_nullItem"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GorillaNetworking::CosmeticItemInstance* Cosmetic(::BNM::Structures::Mono::String* itemName) {
            static BNM::Method<::GorillaNetworking::CosmeticItemInstance*> _m = GetClass().GetMethod(O("Cosmetic"), {"itemName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(itemName);
        }
        bool get_isInitialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_isInitialized"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void Initialize(::BNM::Structures::Mono::Array<::GameObject*>* cosmeticGObjs) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"), {"cosmeticGObjs"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(cosmeticGObjs);
        }
    };
}
