#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "AbuseReportType.hpp"
#include "AbuseReportVideoMode.hpp"

namespace Oculus_Platform {
    struct AdvancedAbuseReportOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "AdvancedAbuseReportOptions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Types::nint GetHandle() {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("Handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetHandle(::BNM::Types::nint value) {
            static BNM::Field<::BNM::Types::nint> _field = GetClass().GetField(O("Handle"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void AddSuggestedUser(uint64_t userID) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddSuggestedUser"), {"userID"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(userID);
        }
        void ClearDeveloperDefinedContext() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearDeveloperDefinedContext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void ClearSuggestedUsers() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearSuggestedUsers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetDeveloperDefinedContext(::BNM::Structures::Mono::String* key, ::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetDeveloperDefinedContext"), {"key", "value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(key, value);
        }
        void SetObjectType(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetObjectType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetReportType(::Oculus_Platform::AbuseReportType value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetReportType"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetVideoMode(::Oculus_Platform::AbuseReportVideoMode value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetVideoMode"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
