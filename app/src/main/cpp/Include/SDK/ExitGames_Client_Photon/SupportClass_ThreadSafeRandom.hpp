#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SupportClass_ThreadSafeRandom : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SupportClass").GetInnerClass("ThreadSafeRandom");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::IL2CPP::Il2CppObject* GetR() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("_r"));
            return _field.Get();
        }
        static int Next() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Next"));
            return _m.Call();
        }
    };
}
