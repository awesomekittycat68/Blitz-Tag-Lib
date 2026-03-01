#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DebugSpawnPointChanger_GeoTriggersGroup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DebugSpawnPointChanger").GetInnerClass("GeoTriggersGroup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<int>* GetCanJumpToIndex() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("canJumpToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GorillaGeoHideShowTrigger* GetEnterTrigger() {
            static BNM::Field<::GlobalNamespace::GorillaGeoHideShowTrigger*> _field = GetClass().GetField(O("enterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaGeoHideShowTrigger*>* GetLeaveTrigger() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaGeoHideShowTrigger*>*> _field = GetClass().GetField(O("leaveTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetLevelName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("levelName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCanJumpToIndex(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("canJumpToIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEnterTrigger(::GlobalNamespace::GorillaGeoHideShowTrigger* value) {
            static BNM::Field<::GlobalNamespace::GorillaGeoHideShowTrigger*> _field = GetClass().GetField(O("enterTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLeaveTrigger(::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaGeoHideShowTrigger*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GorillaGeoHideShowTrigger*>*> _field = GetClass().GetField(O("leaveTrigger"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLevelName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("levelName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
