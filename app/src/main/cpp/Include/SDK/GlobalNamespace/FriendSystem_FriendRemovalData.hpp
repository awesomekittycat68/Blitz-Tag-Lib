#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct FriendSystem_FriendRemovalData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FriendSystem").GetInnerClass("FriendRemovalData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::FriendSystem_FriendRemovalCallback* GetCompletionCallback() {
            static BNM::Field<::GlobalNamespace::FriendSystem_FriendRemovalCallback*> _field = GetClass().GetField(O("completionCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetLocalTimeSent() {
            static BNM::Field<float> _field = GetClass().GetField(O("localTimeSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetTargetPlayerId() {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCompletionCallback(::GlobalNamespace::FriendSystem_FriendRemovalCallback* value) {
            static BNM::Field<::GlobalNamespace::FriendSystem_FriendRemovalCallback*> _field = GetClass().GetField(O("completionCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetLocalTimeSent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("localTimeSent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTargetPlayerId(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("targetPlayerId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
