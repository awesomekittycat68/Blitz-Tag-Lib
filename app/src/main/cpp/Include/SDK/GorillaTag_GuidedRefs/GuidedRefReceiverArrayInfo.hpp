#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRef_EResolveModes.hpp"

namespace GorillaTag_GuidedRefs {
    struct GuidedRefReceiverArrayInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefReceiverArrayInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetFieldId() {
            static BNM::Field<int> _field = GetClass().GetField(O("fieldId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefHubIdSO* GetHubId() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*> _field = GetClass().GetField(O("hubId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetResolveCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("resolveCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GRef_EResolveModes GetResolveModes() {
            static BNM::Field<::GorillaTag_GuidedRefs::GRef_EResolveModes> _field = GetClass().GetField(O("resolveModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*>* GetTargets() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFieldId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("fieldId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetHubId(::GorillaTag_GuidedRefs::GuidedRefHubIdSO* value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefHubIdSO*> _field = GetClass().GetField(O("hubId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResolveCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("resolveCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResolveModes(::GorillaTag_GuidedRefs::GRef_EResolveModes value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GRef_EResolveModes> _field = GetClass().GetField(O("resolveModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargets(::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*>*> _field = GetClass().GetField(O("targets"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
