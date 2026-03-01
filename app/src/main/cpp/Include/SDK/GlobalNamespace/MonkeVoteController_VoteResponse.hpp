#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MonkeVoteController_VoteResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MonkeVoteController").GetInnerClass("VoteResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPollId() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_PollId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPollId(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PollId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<int>* GetPredictionCount() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _method = GetClass().GetMethod(O("get_PredictionCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetPredictionCount(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_PredictionCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTitleId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_TitleId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_TitleId"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<int>* GetVoteCount() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _method = GetClass().GetMethod(O("get_VoteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoteCount(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VoteCount"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetVoteOptions() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _method = GetClass().GetMethod(O("get_VoteOptions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetVoteOptions(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_VoteOptions"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int get_PollId() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_PollId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<int>* get_PredictionCount() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _m = GetClass().GetMethod(O("get_PredictionCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_TitleId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_TitleId"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<int>* get_VoteCount() {
            static BNM::Method<::BNM::Structures::Mono::List<int>*> _m = GetClass().GetMethod(O("get_VoteCount"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* get_VoteOptions() {
            static BNM::Method<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _m = GetClass().GetMethod(O("get_VoteOptions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void set_PollId(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PollId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_PredictionCount(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PredictionCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_TitleId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_TitleId"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VoteCount(::BNM::Structures::Mono::List<int>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoteCount"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_VoteOptions(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_VoteOptions"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
