#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GlobalNamespace/SnapBounds.hpp"

namespace GorillaTagScripts {
    struct SnapOverlap : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "SnapOverlap");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SnapBounds GetBounds() {
            static BNM::Field<::GlobalNamespace::SnapBounds> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::SnapOverlap* GetNextOverlap() {
            static BNM::Field<::GorillaTagScripts::SnapOverlap*> _field = GetClass().GetField(O("nextOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaTagScripts::BuilderAttachGridPlane* GetOtherPlane() {
            static BNM::Field<::GorillaTagScripts::BuilderAttachGridPlane*> _field = GetClass().GetField(O("otherPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBounds(::GlobalNamespace::SnapBounds value) {
            static BNM::Field<::GlobalNamespace::SnapBounds> _field = GetClass().GetField(O("bounds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNextOverlap(::GorillaTagScripts::SnapOverlap* value) {
            static BNM::Field<::GorillaTagScripts::SnapOverlap*> _field = GetClass().GetField(O("nextOverlap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOtherPlane(::GorillaTagScripts::BuilderAttachGridPlane* value) {
            static BNM::Field<::GorillaTagScripts::BuilderAttachGridPlane*> _field = GetClass().GetField(O("otherPlane"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
