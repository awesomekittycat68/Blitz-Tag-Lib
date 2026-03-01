#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BubbleGumEvents : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BubbleGumEvents");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GumBubble* GetBubble() {
            static BNM::Field<::GlobalNamespace::GumBubble*> _field = GetClass().GetField(O("_bubble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::EdibleHoldable* GetEdible() {
            static BNM::Field<::GlobalNamespace::EdibleHoldable*> _field = GetClass().GetField(O("_edible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::GumBubble*>* GetGTargetCache() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::GumBubble*>*> _field = GetClass().GetField(O("gTargetCache"));
            return _field.Get();
        }
        void SetBubble(::GlobalNamespace::GumBubble* value) {
            static BNM::Field<::GlobalNamespace::GumBubble*> _field = GetClass().GetField(O("_bubble"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEdible(::GlobalNamespace::EdibleHoldable* value) {
            static BNM::Field<::GlobalNamespace::EdibleHoldable*> _field = GetClass().GetField(O("_edible"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetGTargetCache(::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::GumBubble*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<::GameObject*, ::GlobalNamespace::GumBubble*>*> _field = GetClass().GetField(O("gTargetCache"));
            _field.Set(value);
        }
        void OnBite(::GlobalNamespace::VRRig* rig, int nextState, bool isViewRig) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBite"), {"rig", "nextState", "isViewRig"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, nextState, isViewRig);
        }
        void OnBiteView(::GlobalNamespace::VRRig* rig, int nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBiteView"), {"rig", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, nextState);
        }
        void OnBiteWorld(::GlobalNamespace::VRRig* rig, int nextState) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnBiteWorld"), {"rig", "nextState"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(rig, nextState);
        }
        void OnDisable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDisable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnEnable() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnEnable"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
