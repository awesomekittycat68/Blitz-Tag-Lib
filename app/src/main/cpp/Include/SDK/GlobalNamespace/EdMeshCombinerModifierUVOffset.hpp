#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct EdMeshCombinerModifierUVOffset : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "EdMeshCombinerModifierUVOffset");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector2 GetMaxUvOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("maxUvOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector2 GetMinUvOffset() {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("minUvOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMaxUvOffset(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("maxUvOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMinUvOffset(::BNM::Structures::Unity::Vector2 value) {
            static BNM::Field<::BNM::Structures::Unity::Vector2> _field = GetClass().GetField(O("minUvOffset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
