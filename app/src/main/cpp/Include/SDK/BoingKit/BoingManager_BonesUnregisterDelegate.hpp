#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace BoingKit {
    struct BoingManager_BonesUnregisterDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingManager").GetInnerClass("BonesUnregisterDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP2 = void*>
        void* BeginInvoke(::BoingKit::BoingBones* bones, ::BNM::IL2CPP::Il2CppObject* callback, TP2 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"bones", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(bones, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::BoingKit::BoingBones* bones) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"bones"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(bones);
        }
    };
}
