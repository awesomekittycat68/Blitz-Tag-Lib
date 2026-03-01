#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SIResource_ResourceType.hpp"

namespace GlobalNamespace {
    struct SIProgression_SIProgressionResourceCap : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIProgression").GetInnerClass("SIProgressionResourceCap");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetResourceMax() {
            static BNM::Field<int> _field = GetClass().GetField(O("resourceMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::SIResource_ResourceType GetResourceType() {
            static BNM::Field<::GlobalNamespace::SIResource_ResourceType> _field = GetClass().GetField(O("resourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResourceMax(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("resourceMax"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResourceType(::GlobalNamespace::SIResource_ResourceType value) {
            static BNM::Field<::GlobalNamespace::SIResource_ResourceType> _field = GetClass().GetField(O("resourceType"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
