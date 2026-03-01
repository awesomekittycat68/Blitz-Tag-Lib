#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CreatorCodeSmallDisplay : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CreatorCodeSmallDisplay");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* CreatorCode = "CREATOR CODE: ";
        static constexpr const char* CreatorSupported = "SUPPORTED: ";
        static constexpr const char* NoCreator = "<NONE>";
        ::Text* GetCodeText() {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("codeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCodeText(::Text* value) {
            static BNM::Field<::Text*> _field = GetClass().GetField(O("codeText"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetCode(::BNM::Structures::Mono::String* code) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetCode"), {"code"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(code);
        }
        void SuccessfulPurchase(::BNM::Structures::Mono::String* memberName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SuccessfulPurchase"), {"memberName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(memberName);
        }
    };
}
