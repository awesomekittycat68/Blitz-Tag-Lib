#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab {
    template <typename TOut>
    struct PlayFabClientAPI_$$c__DisplayClass19_0$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab", "PlayFabClientAPI").GetInnerClass("<>c__DisplayClass19_0`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ExecuteCloudScriptResult*>* GetResultCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ExecuteCloudScriptResult*>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResultCallback(::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ExecuteCloudScriptResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab_ClientModels::ExecuteCloudScriptResult*>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
