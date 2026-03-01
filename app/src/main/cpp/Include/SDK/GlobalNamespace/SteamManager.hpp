#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SteamManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SteamManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetInitialized() {
            static BNM::Method<bool> _method = GetClass().GetMethod(O("get_Initialized"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static bool get_Initialized() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("get_Initialized"));
            return _m.Call();
        }
    };
}
