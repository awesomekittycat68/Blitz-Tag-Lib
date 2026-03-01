#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct ProgressionManager_JuicerStatusResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "ProgressionManager").GetInnerClass("JuicerStatusResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        float GetCoreProcessingPercent() {
            static BNM::Field<float> _field = GetClass().GetField(O("CoreProcessingPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoreProcessingTimeSec() {
            static BNM::Field<int> _field = GetClass().GetField(O("CoreProcessingTimeSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCoresProcessedByOverdrive() {
            static BNM::Field<int> _field = GetClass().GetField(O("CoresProcessedByOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetCurrentCoreCount() {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentCoreCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetError() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::String* GetMothershipId() {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOverdriveCap() {
            static BNM::Field<int> _field = GetClass().GetField(O("OverdriveCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetOverdriveSupply() {
            static BNM::Field<int> _field = GetClass().GetField(O("OverdriveSupply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetRefreshJuice() {
            static BNM::Field<bool> _field = GetClass().GetField(O("RefreshJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStatusCode() {
            static BNM::Field<int> _field = GetClass().GetField(O("StatusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCoreProcessingPercent(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("CoreProcessingPercent"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoreProcessingTimeSec(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CoreProcessingTimeSec"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCoresProcessedByOverdrive(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CoresProcessedByOverdrive"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetCurrentCoreCount(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("CurrentCoreCount"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetError(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("Error"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMothershipId(::BNM::Structures::Mono::String* value) {
            static BNM::Field<::BNM::Structures::Mono::String*> _field = GetClass().GetField(O("MothershipId"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveCap(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("OverdriveCap"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOverdriveSupply(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("OverdriveSupply"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRefreshJuice(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("RefreshJuice"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStatusCode(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("StatusCode"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
