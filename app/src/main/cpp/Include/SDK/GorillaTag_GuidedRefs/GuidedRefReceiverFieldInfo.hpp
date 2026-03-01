#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GRef_EResolveModes.hpp"

namespace GorillaTag_GuidedRefs {
    struct GuidedRefReceiverFieldInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "GuidedRefReceiverFieldInfo");
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
        ::GorillaTag_GuidedRefs::GRef_EResolveModes GetResolveModes() {
            static BNM::Field<::GorillaTag_GuidedRefs::GRef_EResolveModes> _field = GetClass().GetField(O("resolveModes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_GuidedRefs::GuidedRefTargetIdSO* GetTargetId() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefTargetIdSO*> _field = GetClass().GetField(O("targetId"));
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
        void SetResolveModes(::GorillaTag_GuidedRefs::GRef_EResolveModes value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GRef_EResolveModes> _field = GetClass().GetField(O("resolveModes"));
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
