#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct AssociateMotherhsipAndModIOAccountsResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "AssociateMotherhsipAndModIOAccountsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::ModIOMothershipAssociation*>* GetResults() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ModIOMothershipAssociation*>*> _field = GetClass().GetField(O("Results"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetResults(::BNM::Structures::Mono::List<::GlobalNamespace::ModIOMothershipAssociation*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::ModIOMothershipAssociation*>*> _field = GetClass().GetField(O("Results"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
