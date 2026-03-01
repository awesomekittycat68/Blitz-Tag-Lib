#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ECosmeticPartMirrorAxis.hpp"

namespace GorillaTag_CosmeticSystem {
    struct CosmeticPartMirrorOption : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "CosmeticPartMirrorOption");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GorillaTag_CosmeticSystem::ECosmeticPartMirrorAxis GetAxis() {
            static BNM::Field<::GorillaTag_CosmeticSystem::ECosmeticPartMirrorAxis> _field = GetClass().GetField(O("axis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetNegativeScale() {
            static BNM::Field<bool> _field = GetClass().GetField(O("negativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetAxis(::GorillaTag_CosmeticSystem::ECosmeticPartMirrorAxis value) {
            static BNM::Field<::GorillaTag_CosmeticSystem::ECosmeticPartMirrorAxis> _field = GetClass().GetField(O("axis"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetNegativeScale(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("negativeScale"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
