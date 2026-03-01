#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DeployedChild : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DeployedChild");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetIsRemote() {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::DeployableObject* GetParent() {
            static BNM::Field<::GlobalNamespace::DeployableObject*> _field = GetClass().GetField(O("_parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Rigidbody* GetRigidbody() {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("_rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIsRemote(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("_isRemote"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetParent(::GlobalNamespace::DeployableObject* value) {
            static BNM::Field<::GlobalNamespace::DeployableObject*> _field = GetClass().GetField(O("_parent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRigidbody(::Rigidbody* value) {
            static BNM::Field<::Rigidbody*> _field = GetClass().GetField(O("_rigidbody"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Deploy(::GlobalNamespace::DeployableObject* parent, ::BNM::Structures::Unity::Vector3 launchPos, ::BNM::Structures::Unity::Quaternion launchRot, ::BNM::Structures::Unity::Vector3 releaseVel, bool isRemote) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Deploy"), {"parent", "launchPos", "launchRot", "releaseVel", "isRemote"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(parent, launchPos, launchRot, releaseVel, isRemote);
        }
        void ReturnToParent(float delay) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ReturnToParent"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(delay);
        }
        ::BNM::Coroutine::IEnumerator* ReturnToParentDelayed(float delay) {
            static BNM::Method<::BNM::Coroutine::IEnumerator*> _m = GetClass().GetMethod(O("ReturnToParentDelayed"), {"delay"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(delay);
        }
    };
}
