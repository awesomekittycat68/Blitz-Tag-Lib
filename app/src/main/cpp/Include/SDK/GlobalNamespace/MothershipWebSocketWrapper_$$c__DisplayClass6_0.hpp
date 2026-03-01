#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipWebSocketWrapper_$$c__DisplayClass6_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipWebSocketWrapper").GetInnerClass("<>c__DisplayClass6_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::ActiveWebSocket* GetAws() {
            static BNM::Field<::GlobalNamespace::ActiveWebSocket*> _field = GetClass().GetField(O("aws"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::MothershipOpenWebSocketEventArgs* GetRequest() {
            static BNM::Field<::GlobalNamespace::MothershipOpenWebSocketEventArgs*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAws(::GlobalNamespace::ActiveWebSocket* value) {
            static BNM::Field<::GlobalNamespace::ActiveWebSocket*> _field = GetClass().GetField(O("aws"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRequest(::GlobalNamespace::MothershipOpenWebSocketEventArgs* value) {
            static BNM::Field<::GlobalNamespace::MothershipOpenWebSocketEventArgs*> _field = GetClass().GetField(O("request"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
