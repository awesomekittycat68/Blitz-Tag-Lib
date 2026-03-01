#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DayCycleTexturesSO : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DayCycleTexturesSO");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::DayCycleTextureMoment*>* GetMoments() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::DayCycleTextureMoment*>*> _field = GetClass().GetField(O("moments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMoments(::BNM::Structures::Mono::Array<::GlobalNamespace::DayCycleTextureMoment*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::DayCycleTextureMoment*>*> _field = GetClass().GetField(O("moments"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
