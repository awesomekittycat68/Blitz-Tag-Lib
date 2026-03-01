#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct MothershipApiPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "MothershipApiPINVOKE").GetInnerClass("SWIGExceptionHelper").GetInnerClass("ExceptionArgumentDelegate");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(::BNM::Structures::Mono::String* message, ::BNM::Structures::Mono::String* paramName, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"message", "paramName", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(message, paramName, callback, object);
        }
        template <typename TP0 = void*>
        void EndInvoke(TP0 result) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(result);
        }
        void Invoke(::BNM::Structures::Mono::String* message, ::BNM::Structures::Mono::String* paramName) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Invoke"), {"message", "paramName"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message, paramName);
        }
    };
}
