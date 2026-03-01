#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapLoader_$LoadSceneFromAssetBundle$d__102 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapLoader").GetInnerClass("<LoadSceneFromAssetBundle>d__102");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        int GetEndingProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("endingProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::String*>* GetOnLoadComplete() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnLoadComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetSceneIndex() {
            static BNM::Field<int> _field = GetClass().GetField(O("sceneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        int GetStartingProgress() {
            static BNM::Field<int> _field = GetClass().GetField(O("startingProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetUseProgressCallback() {
            static BNM::Field<bool> _field = GetClass().GetField(O("useProgressCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetEndingProgress(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("endingProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOnLoadComplete(::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("OnLoadComplete"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSceneIndex(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("sceneIndex"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetStartingProgress(int value) {
            static BNM::Field<int> _field = GetClass().GetField(O("startingProgress"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetUseProgressCallback(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("useProgressCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        bool MoveNext() {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("MoveNext"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
