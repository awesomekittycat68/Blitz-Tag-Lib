#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct TitleVotingExample_$DoVote$d__15 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "TitleVotingExample").GetInnerClass("<DoVote>d__15");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<::GorillaNetworking::TitleVotingExample_VoteResponse*>* GetCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaNetworking::TitleVotingExample_VoteResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaNetworking::TitleVotingExample_VoteRequest* GetData() {
            static BNM::Field<::GorillaNetworking::TitleVotingExample_VoteRequest*> _field = GetClass().GetField(O("data"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCallback(::BNM::Structures::Mono::Action<::GorillaNetworking::TitleVotingExample_VoteResponse*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<::GorillaNetworking::TitleVotingExample_VoteResponse*>*> _field = GetClass().GetField(O("callback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetData(::GorillaNetworking::TitleVotingExample_VoteRequest* value) {
            static BNM::Field<::GorillaNetworking::TitleVotingExample_VoteRequest*> _field = GetClass().GetField(O("data"));
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
