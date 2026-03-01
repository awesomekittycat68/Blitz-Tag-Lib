#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CosmeticsV2Spawner_Dirty_VRRigData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CosmeticsV2Spawner_Dirty").GetInnerClass("VRRigData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>* GetBdPositionsAllObjects() {
            static BNM::Field<::BNM::Structures::Mono::List<::GlobalNamespace::TransferrableObject*>*> _field = GetClass().GetField(O("bdPositions_allObjects"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetBdPositionsAllObjectsLength() {
            static BNM::Field<int> _field = GetClass().GetField(O("bdPositions_allObjects_length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetBdPositionsLeftHandThrowables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("bdPositions_leftHandThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetBdPositionsRightHandThrowables() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("bdPositions_rightHandThrowables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::BodyDockPositions* GetBdPositionsComp() {
            static BNM::Field<::GlobalNamespace::BodyDockPositions*> _field = GetClass().GetField(O("bdPositionsComp"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::Transform*>* GetBoneXforms() {
            static BNM::Field<::BNM::Structures::Mono::Array<::Transform*>*> _field = GetClass().GetField(O("boneXforms"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Transform* GetParentOfDeactivatedHoldables() {
            static BNM::Field<::Transform*> _field = GetClass().GetField(O("parentOfDeactivatedHoldables"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::VRRig* GetVrRig() {
            static BNM::Field<::GlobalNamespace::VRRig*> _field = GetClass().GetField(O("vrRig"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetVrRigCosmetics() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("vrRig_cosmetics"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GameObject*>* GetVrRigOverride() {
            static BNM::Field<::BNM::Structures::Mono::List<::GameObject*>*> _field = GetClass().GetField(O("vrRig_override"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBdPositionsAllObjectsLength(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("bdPositions_allObjects_length"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
