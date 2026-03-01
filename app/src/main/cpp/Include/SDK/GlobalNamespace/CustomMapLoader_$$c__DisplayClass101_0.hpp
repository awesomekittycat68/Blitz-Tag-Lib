#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapLoader_$$c__DisplayClass101_0 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapLoader").GetInnerClass("<>c__DisplayClass101_0");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>* GetLoadCompleteCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("loadCompleteCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        bool GetSuccessfullyLoadedAllScenes() {
            static BNM::Field<bool> _field = GetClass().GetField(O("successfullyLoadedAllScenes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* GetSuccessfullyLoadedSceneNames() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("successfullyLoadedSceneNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLoadCompleteCallback(::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("loadCompleteCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessfullyLoadedAllScenes(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("successfullyLoadedAllScenes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSuccessfullyLoadedSceneNames(::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*> _field = GetClass().GetField(O("successfullyLoadedSceneNames"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
