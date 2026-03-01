#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace ExitGames_Client_Photon {
    struct SupportClass_IntegerMillisecondsDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("ExitGames.Client.Photon", "SupportClass").GetInnerClass("IntegerMillisecondsDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP1 = void*>
        void* BeginInvoke(::BNM::IL2CPP::Il2CppObject* callback, TP1 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(callback, object);
        }
        template <typename TP0 = void*>
        int EndInvoke(TP0 result) {
            static BNM::Method<int> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        int Invoke() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("Invoke"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
