#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts_CustomMapSupport {
    struct CMSTryOnArea : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts.CustomMapSupport", "CMSTryOnArea");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        void* GetOriginalScene() {
            static BNM::Field<void*> _field = GetClass().GetField(O("originalScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BoxCollider* GetTryOnAreaCollider() {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("tryOnAreaCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetOriginalScene(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("originalScene"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetTryOnAreaCollider(::BoxCollider* value) {
            static BNM::Field<::BoxCollider*> _field = GetClass().GetField(O("tryOnAreaCollider"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        template <typename TP1 = void*>
        void InitializeForCustomMap(::GlobalNamespace::CompositeTriggerEvents* customMapTryOnArea, TP1 customMapScene) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("InitializeForCustomMap"), {"customMapTryOnArea", "customMapScene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(customMapTryOnArea, customMapScene);
        }
        template <typename TP0 = void*>
        bool IsFromScene(TP0 unloadingScene) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("IsFromScene"), {"unloadingScene"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(unloadingScene);
        }
        void RemoveFromCustomMap(::GlobalNamespace::CompositeTriggerEvents* customMapTryOnArea) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RemoveFromCustomMap"), {"customMapTryOnArea"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(customMapTryOnArea);
        }
    };
}
