#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct AudioInEnumeratorEx : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "AudioInEnumeratorEx");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP0 = void*>
        static int IDAtIndex(TP0 en, int index) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("IDAtIndex"), {"en", "index"});
            return _m.Call(en, index);
        }
        template <typename TP0 = void*>
        static bool IDIsValid(TP0 en, int id) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IDIsValid"), {"en", "id"});
            return _m.Call(en, id);
        }
        template <typename TP0 = void*>
        static ::BNM::Structures::Mono::String* NameAtIndex(TP0 en, int index) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("NameAtIndex"), {"en", "index"});
            return _m.Call(en, index);
        }
    };
}
