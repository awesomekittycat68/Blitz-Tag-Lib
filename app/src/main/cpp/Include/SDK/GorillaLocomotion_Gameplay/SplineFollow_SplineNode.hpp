#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct SplineFollow_SplineNode : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "SplineFollow").GetInnerClass("SplineNode");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Unity::Vector3 GetPosition() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Position"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetTangent() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Tangent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Unity::Vector3 GetUp() {
            static BNM::Field<::BNM::Structures::Unity::Vector3> _field = GetClass().GetField(O("Up"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaLocomotion_Gameplay::SplineFollow_SplineNode Lerp(::GorillaLocomotion_Gameplay::SplineFollow_SplineNode a, ::GorillaLocomotion_Gameplay::SplineFollow_SplineNode b, float t) {
            static BNM::Method<::GorillaLocomotion_Gameplay::SplineFollow_SplineNode> _m = GetClass().GetMethod(O("Lerp"), {"a", "b", "t"});
            return _m.Call(a, b, t);
        }
    };
}
