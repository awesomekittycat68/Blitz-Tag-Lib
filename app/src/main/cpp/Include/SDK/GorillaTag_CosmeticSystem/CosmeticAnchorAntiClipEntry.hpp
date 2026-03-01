#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../GorillaTag/XformOffset.hpp"

namespace GorillaTag_CosmeticSystem {
    struct CosmeticAnchorAntiClipEntry : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.CosmeticSystem", "CosmeticAnchorAntiClipEntry");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetEnabled() {
            static BNM::Field<bool> _field = GetClass().GetField(O("enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static ::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry GetIdentity() {
            static BNM::Field<::GorillaTag_CosmeticSystem::CosmeticAnchorAntiClipEntry> _field = GetClass().GetField(O("Identity"));
            return _field.Get();
        }
        ::GorillaTag::XformOffset GetOffset() {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEnabled(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("enabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOffset(::GorillaTag::XformOffset value) {
            static BNM::Field<::GorillaTag::XformOffset> _field = GetClass().GetField(O("offset"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
