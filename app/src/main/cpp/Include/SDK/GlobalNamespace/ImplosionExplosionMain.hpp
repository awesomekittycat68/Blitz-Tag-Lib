#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ImplosionExplosionMain : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ImplosionExplosionMain");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GameObject* GetDiamond() {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Diamond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static int GetKNumInstancedBushesPerDrawCall() {
            static BNM::Field<int> _field = GetClass().GetField(O("kNumInstancedBushesPerDrawCall"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* GetMAaInstancedDiamondMatrix() {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("m_aaInstancedDiamondMatrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::IL2CPP::Il2CppObject* GetMDiamondMaterialProps() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_diamondMaterialProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetNumDiamonds() {
            static BNM::Field<int> _field = GetClass().GetField(O("NumDiamonds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::BoingReactorField* GetReactorField() {
            static BNM::Field<::BoingKit::BoingReactorField*> _field = GetClass().GetField(O("ReactorField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDiamond(::GameObject* value) {
            static BNM::Field<::GameObject*> _field = GetClass().GetField(O("Diamond"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMAaInstancedDiamondMatrix(::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::BNM::Structures::Unity::Matrix4x4>*> _field = GetClass().GetField(O("m_aaInstancedDiamondMatrix"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMDiamondMaterialProps(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("m_diamondMaterialProps"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNumDiamonds(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("NumDiamonds"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetReactorField(::BoingKit::BoingReactorField* value) {
            static BNM::Field<::BoingKit::BoingReactorField*> _field = GetClass().GetField(O("ReactorField"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Update() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Update"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
