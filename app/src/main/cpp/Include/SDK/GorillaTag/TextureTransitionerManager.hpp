#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    struct TextureTransitionerManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "TextureTransitionerManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag::TextureTransitionerManager* GetInstance() {
            static BNM::Method<::GorillaTag::TextureTransitionerManager*> _method = GetClass().GetMethod(O("get_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetInstance(::GorillaTag::TextureTransitionerManager* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_instance"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::List<::GorillaTag::TextureTransitioner*>* GetComponents() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::TextureTransitioner*>*> _field = GetClass().GetField(O("components"));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMatPropBlock() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("matPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMatPropBlock(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("matPropBlock"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void EnsureInstanceIsAvailable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EnsureInstanceIsAvailable"));
            _m.Call();
        }
        static ::GorillaTag::TextureTransitionerManager* get_instance() {
            static BNM::Method<::GorillaTag::TextureTransitionerManager*> _m = GetClass().GetMethod(O("get_instance"));
            return _m.Call();
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void Register(::GorillaTag::TextureTransitioner* component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"component"});
            _m.Call(component);
        }
        static void set_instance(::GorillaTag::TextureTransitionerManager* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_instance"), {"value"});
            _m.Call(value);
        }
        static void Unregister(::GorillaTag::TextureTransitioner* component) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"component"});
            _m.Call(component);
        }
    };
}
