#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct BuilderSetSelector_$$c__DisplayClass24_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "BuilderSetSelector").GetInnerClass("<>c__DisplayClass24_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* GetNewGroup() {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("newGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetNewGroup(::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup* value) {
            static BNM::Field<::GlobalNamespace::BuilderPieceSet_BuilderDisplayGroup*> _field = GetClass().GetField(O("newGroup"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
