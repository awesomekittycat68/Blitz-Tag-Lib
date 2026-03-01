#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MockFriendServer_FriendRequest : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MockFriendServer").GetInnerClass("FriendRequest");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCompletionTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("completionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRequesteePublicId() {
            static BNM::Field<int> _field = GetClass().GetField(O("requesteePublicId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetRequestorPublicId() {
            static BNM::Field<int> _field = GetClass().GetField(O("requestorPublicId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetRequestTime() {
            static BNM::Field<float> _field = GetClass().GetField(O("requestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCompletionTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("completionTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequesteePublicId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("requesteePublicId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestorPublicId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("requestorPublicId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequestTime(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("requestTime"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
