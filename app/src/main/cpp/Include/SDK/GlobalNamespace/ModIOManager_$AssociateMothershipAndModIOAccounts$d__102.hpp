#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ModIOManager_$AssociateMothershipAndModIOAccounts$d__102 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ModIOManager").GetInnerClass("<AssociateMothershipAndModIOAccounts>d__102");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* GetData() {
            static BNM::Field<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest* value) {
            static BNM::Field<::GlobalNamespace::AssociateMotherhsipAndModIOAccountsRequest*> _field = GetClass().GetField(O("data"));
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
