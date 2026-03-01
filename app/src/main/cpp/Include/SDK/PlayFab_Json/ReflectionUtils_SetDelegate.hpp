#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    struct ReflectionUtils_SetDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "ReflectionUtils").GetInnerClass("SetDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*, typename TP1 = void*, typename TP3 = void*>
        void* BeginInvoke(TP0 source, TP1 value, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"source", "value", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(source, value, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        template <typename TP0 = void*, typename TP1 = void*>
        void Invoke(TP0 source, TP1 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"source", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(source, value);
        }
    };
}
