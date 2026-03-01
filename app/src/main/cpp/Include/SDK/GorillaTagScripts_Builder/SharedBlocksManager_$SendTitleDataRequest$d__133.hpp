#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_$SendTitleDataRequest$d__133 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("<SendTitleDataRequest>d__133");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* GetFailCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>*> _field = GetClass().GetField(O("failCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::GetTitleDataRequest* GetRequest() {
            static BNM::Field<::PlayFab_ClientModels::GetTitleDataRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleDataResult*>* GetSuccessCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleDataResult*>*> _field = GetClass().GetField(O("successCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFailCallback(::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>*> _field = GetClass().GetField(O("failCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequest(::PlayFab_ClientModels::GetTitleDataRequest* value) {
            static BNM::Field<::PlayFab_ClientModels::GetTitleDataRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessCallback(::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleDataResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetTitleDataResult*>*> _field = GetClass().GetField(O("successCallback"));
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
