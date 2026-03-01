#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GorillaIKMgr_$$c__DisplayClass25_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GorillaIKMgr").GetInnerClass("<>c__DisplayClass25_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaIK* GetIk() {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("ik"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetIk(::GlobalNamespace::GorillaIK* value) {
            static BNM::Field<::GlobalNamespace::GorillaIK*> _field = GetClass().GetField(O("ik"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
