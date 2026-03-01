#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Internal {
    template <typename TResult>
    struct PlayFabHttp_$$c__DisplayClass23_0$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Internal", "PlayFabHttp").GetInnerClass("<>c__DisplayClass23_0`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::PlayFab_Internal::CallRequestContainer* GetReqContainer() {
            static BNM::Field<::PlayFab_Internal::CallRequestContainer*> _field = GetClass().GetField(O("reqContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<TResult>* GetResultCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<TResult>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSerializer() {
            static BNM::Field<void*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetReqContainer(::PlayFab_Internal::CallRequestContainer* value) {
            static BNM::Field<::PlayFab_Internal::CallRequestContainer*> _field = GetClass().GetField(O("reqContainer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultCallback(::BNM::Structures::Mono::Action<TResult>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<TResult>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSerializer(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("serializer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
