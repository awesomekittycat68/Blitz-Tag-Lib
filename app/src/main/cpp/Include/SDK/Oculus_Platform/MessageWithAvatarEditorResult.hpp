#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message$1.hpp"

namespace Oculus_Platform {
    struct MessageWithAvatarEditorResult : ::Oculus_Platform::Message$1<::Oculus_Platform_Models::AvatarEditorResult*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "MessageWithAvatarEditorResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::AvatarEditorResult* GetAvatarEditorResult() {
            static BNM::Method<::Oculus_Platform_Models::AvatarEditorResult*> _m = GetClass().GetMethod(O("GetAvatarEditorResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AvatarEditorResult* GetDataFromMessage(::BNM::Types::nint c_message) {
            static BNM::Method<::Oculus_Platform_Models::AvatarEditorResult*> _m = GetClass().GetMethod(O("GetDataFromMessage"), {"c_message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c_message);
        }
    };
}
