#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ThrowableBugBeacon_ThrowableBugBeaconFloatEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ThrowableBugBeacon").GetInnerClass("ThrowableBugBeaconFloatEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(::GlobalNamespace::ThrowableBugBeacon* tbb, float f, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"tbb", "f", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(tbb, f, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::GlobalNamespace::ThrowableBugBeacon* tbb, float f) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"tbb", "f"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tbb, f);
        }
    };
}
