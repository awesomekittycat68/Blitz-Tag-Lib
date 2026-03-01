#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaNetworking {
    struct CosmeticsController_CosmeticSet_OnSetActivatedHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaNetworking", "CosmeticsController").GetInnerClass("CosmeticSet").GetInnerClass("OnSetActivatedHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP4 = void*>
        void* BeginInvoke(::GorillaNetworking::CosmeticsController_CosmeticSet* prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet* currentSet, ::GlobalNamespace::NetPlayer* netPlayer, ::BNM::IL2CPP::Il2CppObject* callback, TP4 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"prevSet", "currentSet", "netPlayer", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prevSet, currentSet, netPlayer, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::GorillaNetworking::CosmeticsController_CosmeticSet* prevSet, ::GorillaNetworking::CosmeticsController_CosmeticSet* currentSet, ::GlobalNamespace::NetPlayer* netPlayer) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"prevSet", "currentSet", "netPlayer"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(prevSet, currentSet, netPlayer);
        }
    };
}
