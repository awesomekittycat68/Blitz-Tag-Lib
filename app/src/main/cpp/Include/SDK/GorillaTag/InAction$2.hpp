#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    template <typename T1, typename T2>
    struct InAction$2 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "InAction`2");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(T1& obj1, T2& obj2, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"obj1", "obj2", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&obj1, &obj2, callback, object);
        }
        template <typename TP2 = void*>
        void EndInvoke(T1& obj1, T2& obj2, TP2 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"obj1", "obj2", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj1, &obj2, result);
        }
        void Invoke(T1& obj1, T2& obj2) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"obj1", "obj2"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj1, &obj2);
        }
    };
}
