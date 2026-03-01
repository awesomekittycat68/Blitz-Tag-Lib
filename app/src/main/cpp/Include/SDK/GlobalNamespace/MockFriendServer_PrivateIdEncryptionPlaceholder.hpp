#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MockFriendServer_PrivateIdEncryptionPlaceholder : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MockFriendServer").GetInnerClass("PrivateIdEncryptionPlaceholder");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetPlayerPrivateId() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerPrivateId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetPlayerPublicId() {
            static BNM::Field<int> _field = GetClass().GetField(O("playerPublicId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetPlayerPrivateId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerPrivateId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetPlayerPublicId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("playerPublicId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
