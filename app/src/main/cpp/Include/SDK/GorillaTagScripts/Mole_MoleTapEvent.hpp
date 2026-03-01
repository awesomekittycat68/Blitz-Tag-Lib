#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct Mole_MoleTapEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "Mole").GetInnerClass("MoleTapEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP5 = void*>
        void* BeginInvoke(::GorillaTagScripts::MoleTypes* moleType, ::BNM::Structures::Unity::Vector3 position, bool isLocalTap, bool isLeft, ::BNM::IL2CPP::Il2CppObject* callback, TP5 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"moleType", "position", "isLocalTap", "isLeft", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(moleType, position, isLocalTap, isLeft, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::GorillaTagScripts::MoleTypes* moleType, ::BNM::Structures::Unity::Vector3 position, bool isLocalTap, bool isLeft) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"moleType", "position", "isLocalTap", "isLeft"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(moleType, position, isLocalTap, isLeft);
        }
    };
}
