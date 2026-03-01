#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_Builder {
    struct SharedBlocksManager_$SendPlayfabUserDataRequest$d__142 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.Builder", "SharedBlocksManager").GetInnerClass("<SendPlayfabUserDataRequest>d__142");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* GetErrorCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>*> _field = GetClass().GetField(O("errorCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::PlayFab_ClientModels::GetUserDataRequest* GetRequest() {
            static BNM::Field<::PlayFab_ClientModels::GetUserDataRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* GetResultCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>*> _field = GetClass().GetField(O("resultCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetErrorCallback(::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab::PlayFabError*>*> _field = GetClass().GetField(O("errorCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequest(::PlayFab_ClientModels::GetUserDataRequest* value) {
            static BNM::Field<::PlayFab_ClientModels::GetUserDataRequest*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetResultCallback(::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::PlayFab_ClientModels::GetUserDataResult*>*> _field = GetClass().GetField(O("resultCallback"));
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
