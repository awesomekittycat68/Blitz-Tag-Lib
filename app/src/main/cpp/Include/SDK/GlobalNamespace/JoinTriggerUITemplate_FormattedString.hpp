#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct JoinTriggerUITemplate_FormattedString : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "JoinTriggerUITemplate").GetInnerClass("FormattedString");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::StringFormatter* GetFormatter() {
            static BNM::Field<::GlobalNamespace::StringFormatter*> _field = GetClass().GetField(O("formatter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetFormatText() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("formatText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetFormatter(::GlobalNamespace::StringFormatter* value) {
            static BNM::Field<::GlobalNamespace::StringFormatter*> _field = GetClass().GetField(O("formatter"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetFormatText(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("formatText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BNM::Structures::Mono::String* GetText(::BNM::Structures::Mono::String* oldZone, ::BNM::Structures::Mono::String* newZone, ::BNM::Structures::Mono::String* oldGameType, ::BNM::Structures::Mono::String* newGameType) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetText"), {"oldZone", "newZone", "oldGameType", "newGameType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(oldZone, newZone, oldGameType, newGameType);
        }
        ::BNM::Structures::Mono::String* GetText(::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* oldZone, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* newZone, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* oldGameType, ::BNM::Structures::Mono::Func<::BNM::Structures::Mono::String*>* newGameType) {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("GetText"), {"oldZone", "newZone", "oldGameType", "newGameType"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(oldZone, newZone, oldGameType, newGameType);
        }
    };
}
