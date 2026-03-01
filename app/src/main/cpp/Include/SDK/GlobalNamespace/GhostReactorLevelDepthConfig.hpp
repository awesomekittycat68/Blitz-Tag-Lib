#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GhostReactorLevelDepthConfig : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GhostReactorLevelDepthConfig");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenConfig*>* GetConfigGenOptions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenConfig*>*> _field = GetClass().GetField(O("configGenOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetDisplayName() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>* GetOptions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConfigGenOptions(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenConfig*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelGenConfig*>*> _field = GetClass().GetField(O("configGenOptions"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDisplayName(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("displayName"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptions(::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::GhostReactorLevelDepthConfig_LevelOption*>*> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
