#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct DevConsole_MessagePayload : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "DevConsole").GetInnerClass("MessagePayload");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::DevConsole_MessagePayload_Block*>* GetBlocks() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::DevConsole_MessagePayload_Block*>*> _field = GetClass().GetField(O("blocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBlocks(::BNM::Structures::Mono::Array<::GlobalNamespace::DevConsole_MessagePayload_Block*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::DevConsole_MessagePayload_Block*>*> _field = GetClass().GetField(O("blocks"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_MessagePayload*>* GeneratePayloads(::BNM::Structures::Mono::String* username, ::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_LogEntry*>* entries) {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::DevConsole_MessagePayload*>*> _m = GetClass().GetMethod(O("GeneratePayloads"), {"username", "entries"});
            return _m.Call(username, entries);
        }
    };
}
