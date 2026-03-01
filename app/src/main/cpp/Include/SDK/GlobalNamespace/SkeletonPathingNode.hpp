#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct SkeletonPathingNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SkeletonPathingNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>* GetConnectedNodes() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("connectedNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDistanceToExitNode() {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceToExitNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetEjectionPoint() {
            static BNM::Field<bool> _field = GetClass().GetField(O("ejectionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetConnectedNodes(::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SkeletonPathingNode*>*> _field = GetClass().GetField(O("connectedNodes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDistanceToExitNode(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("distanceToExitNode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetEjectionPoint(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("ejectionPoint"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
