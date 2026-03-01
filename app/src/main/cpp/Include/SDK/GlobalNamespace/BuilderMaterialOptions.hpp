#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderMaterialOptions : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderMaterialOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::BuilderMaterialOptions_Options*>* GetOptions() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderMaterialOptions_Options*>*> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOptions(::BNM::Structures::Mono::List<::GlobalNamespace::BuilderMaterialOptions_Options*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::BuilderMaterialOptions_Options*>*> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void GetDefaultMaterial(int& materialType, ::Material*& material, int& soundIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetDefaultMaterial"), {"materialType", "material", "soundIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&materialType, &material, &soundIndex);
        }
        void GetMaterialFromType(int materialType, ::Material*& material, int& soundIndex) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("GetMaterialFromType"), {"materialType", "material", "soundIndex"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(materialType, &material, &soundIndex);
        }
    };
}
