#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/ECosmeticPartType.hpp"
#include "CosmeticAttachInfo.hpp"

namespace GorillaTag_CosmeticSystem {
    struct CosmeticPart : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "CosmeticPart");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAttachInfo>* GetAttachAnchors() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAttachInfo>*> _field = GetClass().GetField(O("attachAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::ECosmeticPartType GetPartType() {
            static BNM::Field<::GlobalNamespace::ECosmeticPartType> _field = GetClass().GetField(O("partType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAttachAnchors(::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAttachInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_CosmeticSystem::CosmeticAttachInfo>*> _field = GetClass().GetField(O("attachAnchors"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPartType(::GlobalNamespace::ECosmeticPartType value) {
            static BNM::Field<::GlobalNamespace::ECosmeticPartType> _field = GetClass().GetField(O("partType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
