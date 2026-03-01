#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CosmeticIDUtils : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticIDUtils");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static int _PlayFabIdToInt(::BNM::Structures::Mono::String* playFabIdString, int start) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("_PlayFabIdToInt"), {"playFabIdString", "start"});
            return _m.Call(playFabIdString, start);
        }
        static ::BNM::Structures::Mono::String* IntToPlayFabId(int id) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("IntToPlayFabId"), {"id"});
            return _m.Call(id);
        }
        static int PlayFabIdToIndexInCategory(::BNM::Structures::Mono::String* playFabIdString) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PlayFabIdToIndexInCategory"), {"playFabIdString"});
            return _m.Call(playFabIdString);
        }
        static int PlayFabIdToInt(::BNM::Structures::Mono::String* playFabIdString) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("PlayFabIdToInt"), {"playFabIdString"});
            return _m.Call(playFabIdString);
        }
    };
}
