#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct CustomMapLoader_$LoadScenesCoroutine$d__101 : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "CustomMapLoader").GetInnerClass("<LoadScenesCoroutine>d__101");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>* GetLoadCompleteCallback() {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("loadCompleteCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<int>* GetSceneIndexes() {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sceneIndexes"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetLoadCompleteCallback(::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<bool, bool, ::BNM::Structures::Mono::List<::BNM::Structures::Mono::String*>*>*> _field = GetClass().GetField(O("loadCompleteCallback"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSceneIndexes(::BNM::Structures::Mono::Array<int>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<int>*> _field = GetClass().GetField(O("sceneIndexes"));
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
