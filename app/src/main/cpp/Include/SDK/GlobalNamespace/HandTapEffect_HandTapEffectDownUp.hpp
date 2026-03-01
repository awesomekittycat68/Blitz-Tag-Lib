#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/HashWrapper.hpp"

namespace GlobalNamespace {
    struct HandTapEffect_HandTapEffectDownUp : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandTapEffect").GetInnerClass("HandTapEffectDownUp");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHasOverrides() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_HasOverrides"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::HandTapBehaviour*>* GetOnTapBehaviours() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HandTapBehaviour*>*> _field = GetClass().GetField(O("onTapBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::HashWrapper GetOnTapPrefabToSpawn() {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("onTapPrefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetOnTapUnityEvents() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTapUnityEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::HandTapOverrides* GetOverrides() {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("overrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnTapBehaviours(::BNM::Structures::Mono::Array<::GlobalNamespace::HandTapBehaviour*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::HandTapBehaviour*>*> _field = GetClass().GetField(O("onTapBehaviours"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTapPrefabToSpawn(::GorillaTag::HashWrapper value) {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("onTapPrefabToSpawn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnTapUnityEvents(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("onTapUnityEvents"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrides(::GlobalNamespace::HandTapOverrides* value) {
            static BNM::Field<::GlobalNamespace::HandTapOverrides*> _field = GetClass().GetField(O("overrides"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool get_HasOverrides() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_HasOverrides"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnTap(::GlobalNamespace::HandEffectContext* handContext) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnTap"), {"handContext"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(handContext);
        }
    };
}
