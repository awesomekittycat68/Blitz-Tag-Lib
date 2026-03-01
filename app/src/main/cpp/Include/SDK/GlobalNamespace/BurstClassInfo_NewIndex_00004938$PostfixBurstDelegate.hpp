#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "lua_State.hpp"

namespace GlobalNamespace {
    struct BurstClassInfo_NewIndex_00004938$PostfixBurstDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BurstClassInfo").GetInnerClass("NewIndex_00004938$PostfixBurstDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(::GlobalNamespace::lua_State* L, ::BNM::IL2CPP::Il2CppObject* , TP2 _1) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"L", "", ""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(L, , _1);
        }
        template <typename TP0 = void*>
        int EndInvoke(TP0 ) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EndInvoke"), {""});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int Invoke(::GlobalNamespace::lua_State* L) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Invoke"), {"L"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(L);
        }
    };
}
