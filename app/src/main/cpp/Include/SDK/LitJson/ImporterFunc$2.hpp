#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace LitJson {
    template <typename TJson, typename TValue>
    struct ImporterFunc$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("LitJson", "ImporterFunc`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(TJson input, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"input", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input, callback, object);
        }
        template <typename TP0 = void*>
        TValue EndInvoke(TP0 result) {
            static BNM::Method<TValue> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        TValue Invoke(TJson input) {
            static BNM::Method<TValue> _m = GetClass().GetMethod(O("Invoke"), {"input"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(input);
        }
    };
}
