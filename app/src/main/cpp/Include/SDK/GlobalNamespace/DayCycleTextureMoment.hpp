#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DayCycleTextureMoment : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DayCycleTextureMoment");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Texture2D* GetCloudyTex() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("cloudyTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Texture2D* GetSunnyTex() {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("sunnyTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCloudyTex(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("cloudyTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSunnyTex(::Texture2D* value) {
            static BNM::Field<::Texture2D*> _field = GetClass().GetField(O("sunnyTex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
