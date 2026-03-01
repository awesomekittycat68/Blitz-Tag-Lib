#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AOEReceiver_AOEContext.hpp"

namespace GorillaTag_Cosmetics {
    struct AOEReceiver : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.Cosmetics", "AOEReceiver");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetEnabledForAOE() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enabledForAOE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTag_Cosmetics::AOEContextEvent* GetOnAOEReceived() {
            static BNM::Field<::GorillaTag_Cosmetics::AOEContextEvent*> _field = GetClass().GetField(O("OnAOEReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnabledForAOE(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enabledForAOE"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnAOEReceived(::GorillaTag_Cosmetics::AOEContextEvent* value) {
            static BNM::Field<::GorillaTag_Cosmetics::AOEContextEvent*> _field = GetClass().GetField(O("OnAOEReceived"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void ReceiveAOE(::GorillaTag_Cosmetics::AOEReceiver_AOEContext& AOEContext) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReceiveAOE"), {"AOEContext"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&AOEContext);
        }
    };
}
