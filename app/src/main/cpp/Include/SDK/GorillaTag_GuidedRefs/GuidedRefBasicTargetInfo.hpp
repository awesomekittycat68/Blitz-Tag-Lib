#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_GuidedRefs {
    struct GuidedRefBasicTargetInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefBasicTargetInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetHackIgnoreDuplicateRegistration() {
            static BNM::Field<bool> _field = GetClass().GetField(O("hackIgnoreDuplicateRegistration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*>* GetHubIds() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*>*> _field = GetClass().GetField(O("hubIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* GetTargetId() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*> _field = GetClass().GetField(O("targetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHackIgnoreDuplicateRegistration(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("hackIgnoreDuplicateRegistration"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHubIds(::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*>*> _field = GetClass().GetField(O("hubIds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetId(::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*> _field = GetClass().GetField(O("targetId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
