#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "GameStateFx_BehaviourInfo.hpp"
#include "GameStateFx_GameObjectInfo.hpp"
#include "GameStateFx_MaterialInfo.hpp"
#include "GameStateFx_RenderInfo.hpp"
#include "GameStateFx_SoundEntry.hpp"
#include "GameStateFx_StateReaction_EOptions.hpp"

namespace GlobalNamespace {
    struct GameStateFx_StateReaction : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GameStateFx").GetInnerClass("StateReaction");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_BehaviourInfo>* GetBehaviourInfos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_BehaviourInfo>*> _field = GetClass().GetField(O("behaviourInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        float GetDelay() {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_GameObjectInfo>* GetGameObjectInfos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_GameObjectInfo>*> _field = GetClass().GetField(O("gameObjectInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo>* GetMaterialInfos() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo>*> _field = GetClass().GetField(O("materialInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameStateFx_StateReaction_EOptions GetOptions() {
            static BNM::Field<::GlobalNamespace::GameStateFx_StateReaction_EOptions> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_RenderInfo>* GetRenderers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_RenderInfo>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::GameStateFx_SoundEntry GetSoundInfo() {
            static BNM::Field<::GlobalNamespace::GameStateFx_SoundEntry> _field = GetClass().GetField(O("soundInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBehaviourInfos(::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_BehaviourInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_BehaviourInfo>*> _field = GetClass().GetField(O("behaviourInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetDelay(float value) {
            static BNM::Field<float> _field = GetClass().GetField(O("delay"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetGameObjectInfos(::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_GameObjectInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_GameObjectInfo>*> _field = GetClass().GetField(O("gameObjectInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetMaterialInfos(::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_MaterialInfo>*> _field = GetClass().GetField(O("materialInfos"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetOptions(::GlobalNamespace::GameStateFx_StateReaction_EOptions value) {
            static BNM::Field<::GlobalNamespace::GameStateFx_StateReaction_EOptions> _field = GetClass().GetField(O("options"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetRenderers(::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_RenderInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::GameStateFx_RenderInfo>*> _field = GetClass().GetField(O("renderers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSoundInfo(::GlobalNamespace::GameStateFx_SoundEntry value) {
            static BNM::Field<::GlobalNamespace::GameStateFx_SoundEntry> _field = GetClass().GetField(O("soundInfo"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
