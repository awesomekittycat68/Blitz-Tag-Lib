#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/HashWrapper.hpp"

namespace GlobalNamespace {
    struct HandTapOverrides : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HandTapOverrides");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* PREFAB_TOOLTIP = "Must be in the global object pool and have a tag.

Prefabs can have an FXModifier component to be adjusted after creation.";
        ::GorillaTag::HashWrapper GetGamemodeTapPrefab() {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("gamemodeTapPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideGamemodePrefab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideGamemodePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideSound() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetOverrideSurfacePrefab() {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSurfacePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag::HashWrapper GetSurfaceTapPrefab() {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("surfaceTapPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::AudioClip* GetTapSound() {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("tapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGamemodeTapPrefab(::GorillaTag::HashWrapper value) {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("gamemodeTapPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideGamemodePrefab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideGamemodePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideSound(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverrideSurfacePrefab(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("overrideSurfacePrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceTapPrefab(::GorillaTag::HashWrapper value) {
            static BNM::Field<::GorillaTag::HashWrapper> _field = GetClass().GetField(O("surfaceTapPrefab"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTapSound(::AudioClip* value) {
            static BNM::Field<::AudioClip*> _field = GetClass().GetField(O("tapSound"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
