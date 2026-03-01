#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct PlayFabAuthenticator_$CachePlayFabId$d__75 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "PlayFabAuthenticator").GetInnerClass("<CachePlayFabId>d__75");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* GetData() {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest* value) {
            static BNM::Field<::GorillaNetworking::PlayFabAuthenticator_CachePlayFabIdRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
