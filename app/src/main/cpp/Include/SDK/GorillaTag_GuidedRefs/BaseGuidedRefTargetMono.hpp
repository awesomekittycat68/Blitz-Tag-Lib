#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GuidedRefBasicTargetInfo.hpp"

namespace GorillaTag_GuidedRefs {
    struct BaseGuidedRefTargetMono : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs", "BaseGuidedRefTargetMono");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_GuidedRefs::GuidedRefBasicTargetInfo GetGuidedRefTargetInfo() {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefBasicTargetInfo> _field = GetClass().GetField(O("guidedRefTargetInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGuidedRefTargetInfo(::GorillaTag_GuidedRefs::GuidedRefBasicTargetInfo value) {
            static BNM::Field<::GorillaTag_GuidedRefs::GuidedRefBasicTargetInfo> _field = GetClass().GetField(O("guidedRefTargetInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
