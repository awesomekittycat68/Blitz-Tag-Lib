#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace Oculus_Platform {
    struct WindowsPlatform : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "WindowsPlatform");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void CPPLogCallback(::BNM::Types::nint tag, ::BNM::Types::nint message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CPPLogCallback"), {"tag", "message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(tag, message);
        }
        ::BNM::Types::nint getCallbackPointer() {
            static BNM::Method<::BNM::Types::nint> _m = GetClass().GetMethod(O("getCallbackPointer"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        bool Initialize(::BNM::Structures::Mono::String* appId) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("Initialize"), {"appId"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(appId);
        }
    };
}
