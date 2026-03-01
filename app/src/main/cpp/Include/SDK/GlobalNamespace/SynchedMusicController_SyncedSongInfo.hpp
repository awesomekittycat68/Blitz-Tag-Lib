#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SynchedMusicController_SyncedSongLayerInfo.hpp"

namespace GlobalNamespace {
    struct SynchedMusicController_SyncedSongInfo : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "SynchedMusicController").GetInnerClass("SyncedSongInfo");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>* GetSongLayers() {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>*> _field = GetClass().GetField(O("songLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSongLayers(::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>* value) {
            static BNM::Field<::BNM::Structures::Mono::Array<::GlobalNamespace::SynchedMusicController_SyncedSongLayerInfo>*> _field = GetClass().GetField(O("songLayers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
    };
}
