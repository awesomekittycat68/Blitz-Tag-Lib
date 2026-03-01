#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaLocomotion/GTPlayer_MaterialData.hpp"
#include "HashWrapper.hpp"

namespace GorillaTag {
    struct MaterialDatasSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "MaterialDatasSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>* GetDatas() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>*> _field = GetClass().GetField(O("datas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag::HashWrapper>* GetSurfaceEffects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::HashWrapper>*> _field = GetClass().GetField(O("surfaceEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDatas(::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaLocomotion::GTPlayer_MaterialData>*> _field = GetClass().GetField(O("datas"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceEffects(::BNM::Structures::Mono::List<::GorillaTag::HashWrapper>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag::HashWrapper>*> _field = GetClass().GetField(O("surfaceEffects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
