#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "../Fusion_CodeGen/FixedStorage$20.hpp"
#include "GorillaPaintbrawlManager_PaintbrawlState.hpp"
#include "GorillaPaintbrawlManager_PaintbrawlStatus.hpp"

namespace GlobalNamespace {
    struct PaintbrawlData : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PaintbrawlData");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState GetCurrentPaintbrawlState() {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState> _field = GetClass().GetField(O("currentPaintbrawlState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetCurrentPaintbrawlState(::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState value) {
            static BNM::Field<::GlobalNamespace::GorillaPaintbrawlManager_PaintbrawlState> _field = GetClass().GetField(O("currentPaintbrawlState"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void* get_playerActorNumberArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_playerActorNumberArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_playerLivesArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_playerLivesArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void* get_playerStatusArray() {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("get_playerStatusArray"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
    };
}
