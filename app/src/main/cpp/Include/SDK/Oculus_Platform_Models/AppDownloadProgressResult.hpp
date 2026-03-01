#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Oculus_Platform/AppStatus.hpp"

namespace Oculus_Platform_Models {
    struct AppDownloadProgressResult : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform.Models", "AppDownloadProgressResult");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int64_t GetDownloadBytes() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("DownloadBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int64_t GetDownloadedBytes() {
            static BNM::Field<int64_t> _field = GetClass().GetField(O("DownloadedBytes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::Oculus_Platform::AppStatus GetStatusCode() {
            static BNM::Field<::Oculus_Platform::AppStatus> _field = GetClass().GetField(O("StatusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
    };
}
