#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UnityYaml : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UnityYaml");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::Dictionary<int, ::BNM::MonoType*>* GetClassIDToType() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::MonoType*>*> _field = GetClass().GetField(O("ClassIDToType"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetEngineAssembly() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("EngineAssembly"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetTerrainAssembly() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("TerrainAssembly"));
            return _field.Get();
        }
        static void SetClassIDToType(::BNM::Structures::Mono::Dictionary<int, ::BNM::MonoType*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::BNM::MonoType*>*> _field = GetClass().GetField(O("ClassIDToType"));
            _field.Set(value);
        }
    };
}
