#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct OverridePaperDoll : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "OverridePaperDoll");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetReplacesHeadMesh() {
            static BNM::Field<bool> _field = GetClass().GetField(O("replacesHeadMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GameObject* GetRightSideOverride() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightSideOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetReplacesHeadMesh(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("replacesHeadMesh"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRightSideOverride(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("rightSideOverride"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
