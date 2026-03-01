#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ShaderGroup : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ShaderGroup");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Shader* GetBakingShader() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("bakingShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetGameplayShader() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("gameplayShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Material* GetMaterial() {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Shader* GetOriginalShader() {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("originalShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBakingShader(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("bakingShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameplayShader(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("gameplayShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterial(::Material* value) {
            static BNM::Field<::Material*> _field = GetClass().GetField(O("material"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOriginalShader(::Shader* value) {
            static BNM::Field<::Shader*> _field = GetClass().GetField(O("originalShader"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
