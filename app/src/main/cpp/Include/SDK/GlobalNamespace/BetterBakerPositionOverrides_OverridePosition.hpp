#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BetterBakerPositionOverrides_OverridePosition : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BetterBakerPositionOverrides").GetInnerClass("OverridePosition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Transform* GetBakingTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bakingTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetGameTransform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gameTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetGo() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("go"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBakingTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("bakingTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameTransform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("gameTransform"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGo(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("go"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
