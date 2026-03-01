#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MockFriendServer_FriendPair : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MockFriendServer").GetInnerClass("FriendPair");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPrivateIdPlayerA() {
            static BNM::Field<int> _field = GetClass().GetField(O("privateIdPlayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPrivateIdPlayerB() {
            static BNM::Field<int> _field = GetClass().GetField(O("privateIdPlayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPublicIdPlayerA() {
            static BNM::Field<int> _field = GetClass().GetField(O("publicIdPlayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPublicIdPlayerB() {
            static BNM::Field<int> _field = GetClass().GetField(O("publicIdPlayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPrivateIdPlayerA(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("privateIdPlayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPrivateIdPlayerB(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("privateIdPlayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublicIdPlayerA(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("publicIdPlayerA"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPublicIdPlayerB(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("publicIdPlayerB"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
