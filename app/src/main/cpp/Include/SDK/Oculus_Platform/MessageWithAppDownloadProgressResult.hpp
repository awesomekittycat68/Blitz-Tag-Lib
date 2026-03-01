#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Message$1.hpp"

namespace Oculus_Platform {
    struct MessageWithAppDownloadProgressResult : ::Oculus_Platform::Message$1<::Oculus_Platform_Models::AppDownloadProgressResult*> {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "MessageWithAppDownloadProgressResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::Oculus_Platform_Models::AppDownloadProgressResult* GetAppDownloadProgressResult() {
            static BNM::Method<::Oculus_Platform_Models::AppDownloadProgressResult*> _m = GetClass().GetMethod(O("GetAppDownloadProgressResult"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::Oculus_Platform_Models::AppDownloadProgressResult* GetDataFromMessage(::BNM::Types::nint c_message) {
            static BNM::Method<::Oculus_Platform_Models::AppDownloadProgressResult*> _m = GetClass().GetMethod(O("GetDataFromMessage"), {"c_message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(c_message);
        }
    };
}
