#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_UI {
    template <typename TBinding>
    struct GorillaKeyWrapper$1 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.UI", "GorillaKeyWrapper`1");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        bool GetDefineButtonsManually() {
            static BNM::Field<bool> _field = GetClass().GetField(O("defineButtonsManually"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetOnKeyPressed() {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnKeyPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetDefineButtonsManually(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("defineButtonsManually"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnKeyPressed(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("OnKeyPressed"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void FindMatchingButtons(::GameObject* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FindMatchingButtons"), {"obj"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(obj);
        }
        void OnDestroy() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnDestroy"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void OnKeyButtonPressed(TBinding binding) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("OnKeyButtonPressed"), {"binding"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(binding);
        }
        void Start() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Start"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
    };
}
