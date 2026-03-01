#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$207.hpp"
#include "../Fusion_CodeGen/FixedStorage$33.hpp"

namespace GlobalNamespace {
    struct FusionPlayerProperties_PlayerInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "FusionPlayerProperties").GetInnerClass("PlayerInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* get_NickName() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_NickName"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_properties() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_properties"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_NickName(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_NickName"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
