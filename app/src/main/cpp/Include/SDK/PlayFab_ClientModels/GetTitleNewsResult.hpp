#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../PlayFab_SharedModels/PlayFabResultCommon.hpp"

namespace PlayFab_ClientModels {
    struct GetTitleNewsResult : ::PlayFab_SharedModels::PlayFabResultCommon {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.ClientModels", "GetTitleNewsResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::PlayFab_ClientModels::TitleNewsItem*>* GetNews() {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TitleNewsItem*>*> _field = GetClass().GetField(O("News"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNews(::BNM::Structures::Mono::List<::PlayFab_ClientModels::TitleNewsItem*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::PlayFab_ClientModels::TitleNewsItem*>*> _field = GetClass().GetField(O("News"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
