#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PostVRRigPhysicsSynch : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PostVRRigPhysicsSynch");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::GlobalNamespace::AutoSyncTransforms*>* GetKSyncList() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::AutoSyncTransforms*>*> _field = GetClass().GetField(O("k_syncList"));
            return _field.Get();
        }
        static void AddSyncTarget(::GlobalNamespace::AutoSyncTransforms* body) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSyncTarget"), {"body"});
            _m.Call(body);
        }
        void LateUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LateUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static void RemoveSyncTarget(::GlobalNamespace::AutoSyncTransforms* body) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveSyncTarget"), {"body"});
            _m.Call(body);
        }
    };
}
