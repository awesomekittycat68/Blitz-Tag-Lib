#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SIHandScanner : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SIHandScanner");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetOnHandScanned() {
            static BNM::Field<void*> _field = GetClass().GetField(O("onHandScanned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOnHandScanned(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("onHandScanned"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void HandScanned(::GlobalNamespace::SIPlayer* scannedPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("HandScanned"), {"scannedPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(scannedPlayer);
        }
    };
}
