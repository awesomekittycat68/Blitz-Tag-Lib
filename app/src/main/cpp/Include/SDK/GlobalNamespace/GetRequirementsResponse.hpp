#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "ApprovedAgeCollectionMethods.hpp"
#include "SessionStatus.hpp"

namespace GlobalNamespace {
    struct GetRequirementsResponse : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GetRequirementsResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::SessionStatus GetAgeStatus() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _method = GetClass().GetMethod(O("get_AgeStatus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetAgeStatus(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_AgeStatus"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::ApprovedAgeCollectionMethods>* GetApprovedAgeCollectionMethods() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::ApprovedAgeCollectionMethods>*> _method = GetClass().GetMethod(O("get_ApprovedAgeCollectionMethods"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetApprovedAgeCollectionMethods(::BNM::Structures::Mono::List<::GlobalNamespace::ApprovedAgeCollectionMethods>* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_ApprovedAgeCollectionMethods"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetCivilAge() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_CivilAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCivilAge(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_CivilAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetDigitalConsentAge() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_DigitalConsentAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetDigitalConsentAge(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_DigitalConsentAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetMinimumAge() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_MinimumAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetMinimumAge(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_MinimumAge"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* get_Age() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_Age"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::SessionStatus get_AgeStatus() {
            static BNM::Method<::GlobalNamespace::SessionStatus> _m = GetClass().GetMethod(O("get_AgeStatus"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::List<::GlobalNamespace::ApprovedAgeCollectionMethods>* get_ApprovedAgeCollectionMethods() {
            static BNM::Method<::BNM::Structures::Mono::List<::GlobalNamespace::ApprovedAgeCollectionMethods>*> _m = GetClass().GetMethod(O("get_ApprovedAgeCollectionMethods"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_CivilAge() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_CivilAge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_DigitalConsentAge() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_DigitalConsentAge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_MinimumAge() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_MinimumAge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_PlatformMinimumAge() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_PlatformMinimumAge"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        template <typename TP0 = void*>
        void set_Age(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Age"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_AgeStatus(::GlobalNamespace::SessionStatus value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_AgeStatus"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_ApprovedAgeCollectionMethods(::BNM::Structures::Mono::List<::GlobalNamespace::ApprovedAgeCollectionMethods>* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_ApprovedAgeCollectionMethods"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_CivilAge(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_CivilAge"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_DigitalConsentAge(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_DigitalConsentAge"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_MinimumAge(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_MinimumAge"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        template <typename TP0 = void*>
        void set_PlatformMinimumAge(TP0 value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_PlatformMinimumAge"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
    };
}
