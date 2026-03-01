#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GameAgent_JumpRequestedEvent : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameAgent").GetInnerClass("JumpRequestedEvent");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP5 = void*>
        void* BeginInvoke(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale, ::BNM::IL2CPP::Il2CppObject* callback, TP5 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"start", "end", "heightScale", "speedScale", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(start, end, heightScale, speedScale, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::BNM::Structures::Unity::Vector3 start, ::BNM::Structures::Unity::Vector3 end, float heightScale, float speedScale) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"start", "end", "heightScale", "speedScale"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(start, end, heightScale, speedScale);
        }
    };
}
