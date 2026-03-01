#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GlobalDeactivatedSpawnRoot : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GlobalDeactivatedSpawnRoot");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::Transform* GetXform() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_xform"));
            return _field.Get();
        }
        static void SetXform(::Transform* value) {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("_xform"));
            _field.Set(value);
        }
        static ::Transform* GetOrCreate() {
            static BNM::Method<::Transform*> _m = GetClass().GetMethod(O("GetOrCreate"));
            return _m.Call();
        }
    };
}
