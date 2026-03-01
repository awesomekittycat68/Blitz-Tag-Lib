#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct UGCPermissionManager_KIDPermissions : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "UGCPermissionManager").GetInnerClass("KIDPermissions");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<bool>* GetSetUGCEnabled() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("setUGCEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSetUGCEnabled(::BNM::Structures::Mono::Action<bool>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool>*> _field = GetClass().GetField(O("setUGCEnabled"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void CheckPermissions() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("CheckPermissions"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Initialize() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Initialize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        template <typename TP1 = void*>
        void OnKIDSessionUpdate(bool isEnabled, TP1 managedBy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKIDSessionUpdate"), {"isEnabled", "managedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(isEnabled, managedBy);
        }
        template <typename TP2 = void*>
        void ProcessPermissionKID(bool hasOptedIn, bool isEnabled, TP2 managedBy) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("ProcessPermissionKID"), {"hasOptedIn", "isEnabled", "managedBy"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(hasOptedIn, isEnabled, managedBy);
        }
        void SetUGCEnabled(bool enabled) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetUGCEnabled"), {"enabled"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(enabled);
        }
    };
}
