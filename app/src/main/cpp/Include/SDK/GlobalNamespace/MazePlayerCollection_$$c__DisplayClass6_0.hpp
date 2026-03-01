#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MazePlayerCollection_$$c__DisplayClass6_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MazePlayerCollection").GetInnerClass("<>c__DisplayClass6_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::NetPlayer* GetOtherPlayer() {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("otherPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOtherPlayer(::GlobalNamespace::NetPlayer* value) {
            static BNM::Field<::GlobalNamespace::NetPlayer*> _field = GetClass().GetField(O("otherPlayer"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
