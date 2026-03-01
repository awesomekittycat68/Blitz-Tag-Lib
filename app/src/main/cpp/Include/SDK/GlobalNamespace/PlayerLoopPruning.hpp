#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PlayerLoopPruning : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PlayerLoopPruning");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetAndroidSubsystemExtras() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("androidSubsystemExtras"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetIsAndroid() {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetRemoveSubsystemList() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("removeSubsystemList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static float GetSlop() {
            static BNM::Field<float> _field = GetClass().GetField(O("slop"));
            return _field.Get();
        }
        static ::BNM::IL2CPP::Il2CppObject* GetSw() {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sw"));
            return _field.Get();
        }
        void SetAndroidSubsystemExtras(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("androidSubsystemExtras"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetIsAndroid(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("isAndroid"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRemoveSubsystemList(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("removeSubsystemList"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        static void SetSlop(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("slop"));
            _field.Set(value);
        }
        static void SetSw(::BNM::IL2CPP::Il2CppObject* value) {
            static BNM::Field<::BNM::IL2CPP::Il2CppObject*> _field = GetClass().GetField(O("sw"));
            _field.Set(value);
        }
        static void PhaseSyncDestroyer3000End() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhaseSyncDestroyer3000End"));
            _m.Call();
        }
        static void PhaseSyncDestroyer3000Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("PhaseSyncDestroyer3000Start"));
            _m.Call();
        }
        template <typename T>
        void* RemoveSystem(void*& loopSystem) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("RemoveSystem"), {"loopSystem"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(&loopSystem);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
