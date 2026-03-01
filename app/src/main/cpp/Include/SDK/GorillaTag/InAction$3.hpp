#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag {
    template <typename T1, typename T2, typename T3>
    struct InAction$3 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag", "InAction`3");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP4 = void*>
        void* BeginInvoke(T1& obj1, T2& obj2, T3& obj3, ::BNM::IL2CPP::Il2CppObject* callback, TP4 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"obj1", "obj2", "obj3", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&obj1, &obj2, &obj3, callback, object);
        }
        template <typename TP3 = void*>
        void EndInvoke(T1& obj1, T2& obj2, T3& obj3, TP3 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"obj1", "obj2", "obj3", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj1, &obj2, &obj3, result);
        }
        void Invoke(T1& obj1, T2& obj2, T3& obj3) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"obj1", "obj2", "obj3"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(&obj1, &obj2, &obj3);
        }
    };
}
