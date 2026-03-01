#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct Callback_RequestCallback : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Callback").GetInnerClass("RequestCallback");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform::Message_Callback* GetMessageCallback() {
            static BNM::Field<::Oculus_Platform::Message_Callback*> _field = GetClass().GetField(O("messageCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMessageCallback(::Oculus_Platform::Message_Callback* value) {
            static BNM::Field<::Oculus_Platform::Message_Callback*> _field = GetClass().GetField(O("messageCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void HandleMessage(::Oculus_Platform::Message* msg) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandleMessage"), {"msg"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(msg);
        }
    };
}
