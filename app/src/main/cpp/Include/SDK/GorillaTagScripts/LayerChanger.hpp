#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct LayerChanger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "LayerChanger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIncludeChildren() {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeChildren"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetLayersStored() {
            static BNM::Field<bool> _field = GetClass().GetField(O("layersStored"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<::Transform*, int>* GetOriginalLayers() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, int>*> _field = GetClass().GetField(O("originalLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetRestrictedLayers() {
            static BNM::Field<void*> _field = GetClass().GetField(O("restrictedLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIncludeChildren(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("includeChildren"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLayersStored(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("layersStored"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalLayers(::BNM::Structures::Mono::Dictionary<::Transform*, int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::Transform*, int>*> _field = GetClass().GetField(O("originalLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRestrictedLayers(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("restrictedLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ChangeLayer(::Transform* parent, ::BNM::Structures::Mono::String* newLayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeLayer"), {"parent", "newLayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent, newLayer);
        }
        void ChangeLayers(::Transform* parent, int newLayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ChangeLayers"), {"parent", "newLayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent, newLayer);
        }
        void InitializeLayers(::Transform* parent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeLayers"), {"parent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent);
        }
        void RestoreOriginalLayers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RestoreOriginalLayers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void StoreOriginalLayers(::Transform* parent) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("StoreOriginalLayers"), {"parent"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent);
        }
    };
}
