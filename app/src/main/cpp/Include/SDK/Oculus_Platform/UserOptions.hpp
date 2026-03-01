#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ServiceProvider.hpp"
#include "TimeWindow.hpp"

namespace Oculus_Platform {
    struct UserOptions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("Oculus.Platform", "UserOptions");
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
        void AddServiceProvider(::Oculus_Platform::ServiceProvider value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("AddServiceProvider"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void ClearServiceProviders() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ClearServiceProviders"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void SetMaxUsers(uint32_t value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetMaxUsers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void SetTimeWindow(::Oculus_Platform::TimeWindow value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetTimeWindow"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
