#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct VRRigEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "VRRigEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::RigContainer* GetRigRef() {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetRigRef(::GlobalNamespace::RigContainer* value) {
            static BNM::Field<::GlobalNamespace::RigContainer*> _field = GetClass().GetField(O("rigRef"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void PreDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PreDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SendPostEnableEvent() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SendPostEnableEvent"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
