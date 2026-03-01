#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTag_MonkeFX {
    struct MonkeFXMono : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTag.MonkeFX", "MonkeFXMono");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GorillaTag_MonkeFX::MonkeFXSettingsSO*>* GetSettings() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_MonkeFX::MonkeFXSettingsSO*>*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSettings(::BNM::Structures::Mono::Array<::GorillaTag_MonkeFX::MonkeFXSettingsSO*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GorillaTag_MonkeFX::MonkeFXSettingsSO*>*> _field = GetClass().GetField(O("settings"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
