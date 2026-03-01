#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GTSerializableKeyValue$2.hpp"

namespace GlobalNamespace {
    template <typename TKey, typename TValue>
    struct GTSerializableDict$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTSerializableDict`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void OnAfterDeserialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnAfterDeserialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnBeforeSerialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBeforeSerialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
