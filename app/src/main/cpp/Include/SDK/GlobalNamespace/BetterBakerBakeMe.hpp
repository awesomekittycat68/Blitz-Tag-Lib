#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "FlagForBaking.hpp"
#include "../GorillaTag_Rendering_Shaders/ShaderConfigData_ShaderConfig.hpp"

namespace GlobalNamespace {
    struct BetterBakerBakeMe : ::GlobalNamespace::FlagForBaking {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BetterBakerBakeMe");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaTag_Rendering_Shaders::ShaderConfigData_ShaderConfig>* GetAllConfigs() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Rendering_Shaders::ShaderConfigData_ShaderConfig>*> _field = GetClass().GetField(O("allConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGetMatStuffFromHere() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("getMatStuffFromHere"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GameObject*>* GetStuffIncludingParentsToBake() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("stuffIncludingParentsToBake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAllConfigs(::BNM::Structures::Mono::List<::GorillaTag_Rendering_Shaders::ShaderConfigData_ShaderConfig>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_Rendering_Shaders::ShaderConfigData_ShaderConfig>*> _field = GetClass().GetField(O("allConfigs"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGetMatStuffFromHere(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("getMatStuffFromHere"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStuffIncludingParentsToBake(::BNM::Structures::Mono::Array<::GameObject*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GameObject*>*> _field = GetClass().GetField(O("stuffIncludingParentsToBake"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
