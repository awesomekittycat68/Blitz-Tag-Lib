#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag_GuidedRefs/RegisteredReceiverFieldInfo.hpp"

namespace GorillaTag_GuidedRefs_Internal {
    struct RelayInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.GuidedRefs.Internal", "RelayInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>* GetRegisteredFields() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>*> _field = GetClass().GetField(O("registeredFields"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>* GetResolvedFields() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>*> _field = GetClass().GetField(O("resolvedFields"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetTargetMono() {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetMono"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRegisteredFields(::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>*> _field = GetClass().GetField(O("registeredFields"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResolvedFields(::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTag_GuidedRefs::RegisteredReceiverFieldInfo>*> _field = GetClass().GetField(O("resolvedFields"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetMono(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("targetMono"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
