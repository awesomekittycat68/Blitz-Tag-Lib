#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "PlayFabLoggerBase.hpp"

namespace PlayFab_Public {
    struct PlayFabLogger : ::PlayFab_Public::PlayFabLoggerBase {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("PlayFab.Public", "PlayFabLogger");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void BeginUploadLog() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("BeginUploadLog"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void EndUploadLog() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("EndUploadLog"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void UploadLog(::BNM::Structures::Mono::String* message) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UploadLog"), {"message"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(message);
        }
    };
}
