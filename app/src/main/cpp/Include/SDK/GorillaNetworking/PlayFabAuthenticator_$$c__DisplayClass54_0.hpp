#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct PlayFabAuthenticator_$$c__DisplayClass54_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "PlayFabAuthenticator").GetInnerClass("<>c__DisplayClass54_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetGetNewPlayerDateTimeTask() {
            static BNM::Field<void*> _field = GetClass().GetField(O("getNewPlayerDateTimeTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetGetNewPlayerDateTimeTask(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("getNewPlayerDateTimeTask"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
