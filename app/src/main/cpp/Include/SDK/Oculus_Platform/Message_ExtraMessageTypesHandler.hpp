#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message_MessageType.hpp"

namespace Oculus_Platform {
    struct Message_ExtraMessageTypesHandler : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "Message").GetInnerClass("ExtraMessageTypesHandler");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        template <typename TP3 = void*>
        void* BeginInvoke(::BNM::Types::nint messageHandle, ::Oculus_Platform::Message_MessageType message_type, ::BNM::IL2CPP::Il2CppObject* callback, TP3 object) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("BeginInvoke"), {"messageHandle", "message_type", "callback", "object"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(messageHandle, message_type, callback, object);
        }
        template <typename TP0 = void*>
        ::Oculus_Platform::Message* EndInvoke(TP0 result) {
            static BNM::Method<::Oculus_Platform::Message*> _m = GetClass().GetMethod(O("EndInvoke"), {"result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(result);
        }
        ::Oculus_Platform::Message* Invoke(::BNM::Types::nint messageHandle, ::Oculus_Platform::Message_MessageType message_type) {
            static BNM::Method<::Oculus_Platform::Message*> _m = GetClass().GetMethod(O("Invoke"), {"messageHandle", "message_type"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(messageHandle, message_type);
        }
    };
}
