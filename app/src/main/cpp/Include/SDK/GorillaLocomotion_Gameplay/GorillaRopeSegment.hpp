#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaLocomotion_Gameplay {
    struct GorillaRopeSegment : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaLocomotion.Gameplay", "GorillaRopeSegment");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetBoneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("boneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GorillaLocomotion_Gameplay::GorillaRopeSwing* GetSwing() {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwing*> _field = GetClass().GetField(O("swing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBoneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("boneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwing(::GorillaLocomotion_Gameplay::GorillaRopeSwing* value) {
            static BNM::Field<::GorillaLocomotion_Gameplay::GorillaRopeSwing*> _field = GetClass().GetField(O("swing"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
