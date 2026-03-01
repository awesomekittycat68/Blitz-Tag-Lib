#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message$1.hpp"

namespace Oculus_Platform {
    struct MessageWithDestinationList : ::Oculus_Platform::Message$1<::Oculus_Platform_Models::DestinationList*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "MessageWithDestinationList");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::DestinationList* GetDataFromMessage(::BNM::Types::nint c_message) {
            static BNM::Method<::Oculus_Platform_Models::DestinationList*> _m = GetClass().GetMethod(O("GetDataFromMessage"), {"c_message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c_message);
        }
        ::Oculus_Platform_Models::DestinationList* GetDestinationList() {
            static BNM::Method<::Oculus_Platform_Models::DestinationList*> _m = GetClass().GetMethod(O("GetDestinationList"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
