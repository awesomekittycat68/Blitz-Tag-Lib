#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "Version.hpp"

namespace BoingKit {
    struct BoingBase : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("BoingKit", "BoingBase");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BoingKit::Version GetCurrentVersion() {
            static BNM::Method<::BoingKit::Version> _method = GetClass().GetMethod(O("get_CurrentVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BoingKit::Version GetInitialVersion() {
            static BNM::Method<::BoingKit::Version> _method = GetClass().GetMethod(O("get_InitialVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BoingKit::Version GetPreviousVersion() {
            static BNM::Method<::BoingKit::Version> _method = GetClass().GetMethod(O("get_PreviousVersion"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::BoingKit::Version GetMCurrentVersion() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("m_currentVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Version GetMInitialVersion() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("m_initialVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoingKit::Version GetMPreviousVersion() {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("m_previousVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetMCurrentVersion(::BoingKit::Version value) {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("m_currentVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMInitialVersion(::BoingKit::Version value) {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("m_initialVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMPreviousVersion(::BoingKit::Version value) {
            static BNM::Field<::BoingKit::Version> _field = GetClass().GetField(O("m_previousVersion"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::BoingKit::Version get_CurrentVersion() {
            static BNM::Method<::BoingKit::Version> _m = GetClass().GetMethod(O("get_CurrentVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BoingKit::Version get_InitialVersion() {
            static BNM::Method<::BoingKit::Version> _m = GetClass().GetMethod(O("get_InitialVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BoingKit::Version get_PreviousVersion() {
            static BNM::Method<::BoingKit::Version> _m = GetClass().GetMethod(O("get_PreviousVersion"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void OnUpgrade(::BoingKit::Version oldVersion, ::BoingKit::Version newVersion) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnUpgrade"), {"oldVersion", "newVersion"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(oldVersion, newVersion);
        }
    };
}
