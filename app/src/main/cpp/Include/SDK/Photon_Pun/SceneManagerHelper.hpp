#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Pun {
    struct SceneManagerHelper : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Pun", "SceneManagerHelper");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetActiveSceneBuildIndex() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_ActiveSceneBuildIndex"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BNM::Structures::Mono::String* GetActiveSceneName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_ActiveSceneName"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        static int get_ActiveSceneBuildIndex() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_ActiveSceneBuildIndex"));
            return _m.Call();
        }
        static ::BNM::Structures::Mono::String* get_ActiveSceneName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_ActiveSceneName"));
            return _m.Call();
        }
    };
}
