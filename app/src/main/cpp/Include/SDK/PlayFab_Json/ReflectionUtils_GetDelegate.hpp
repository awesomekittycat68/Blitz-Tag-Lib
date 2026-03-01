#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace PlayFab_Json {
    struct ReflectionUtils_GetDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Json", "ReflectionUtils").GetInnerClass("GetDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*, typename TP2 = void*>
        void* BeginInvoke(TP0 source, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"source", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(source, callback, object);
        }
        template <typename TP0 = void*>
        void* EndInvoke(TP0 result) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        template <typename TP0 = void*>
        void* Invoke(TP0 source) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("Invoke"), {"source"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(source);
        }
    };
}
