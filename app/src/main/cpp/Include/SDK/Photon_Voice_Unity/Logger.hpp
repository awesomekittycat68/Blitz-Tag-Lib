#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Photon_Voice_Unity {
    struct Logger : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Photon.Voice.Unity", "Logger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void LogDebug(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogDebug"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogError(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogError"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogInfo(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogInfo"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
        void LogWarning(::BNM::Structures::Mono::String* fmt, ::BNM::Structures::Mono::Array<void*>* args) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("LogWarning"), {"fmt", "args"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(fmt, args);
        }
    };
}
