#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "SceneIndex.hpp"

namespace GlobalNamespace {
    struct XSceneRefGlobalHub : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "XSceneRefGlobalHub");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::BNM::Structures::Mono::List<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::XSceneRefTarget*>*>* GetRegistry() {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::XSceneRefTarget*>*>*> _field = GetClass().GetField(O("registry"));
            return _field.Get();
        }
        static void SetRegistry(::BNM::Structures::Mono::List<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::XSceneRefTarget*>*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::BNM::Structures::Mono::Dictionary<int, ::GlobalNamespace::XSceneRefTarget*>*>*> _field = GetClass().GetField(O("registry"));
            _field.Set(value);
        }
        static void Register(int ID, ::GlobalNamespace::XSceneRefTarget* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Register"), {"ID", "obj"});
            _m.Call(ID, obj);
        }
        static bool TryResolve(::GlobalNamespace::SceneIndex sceneIndex, int ID, ::GlobalNamespace::XSceneRefTarget*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryResolve"), {"sceneIndex", "ID", "result"});
            return _m.Call(sceneIndex, ID, &result);
        }
        static void Unregister(int ID, ::GlobalNamespace::XSceneRefTarget* obj) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Unregister"), {"ID", "obj"});
            _m.Call(ID, obj);
        }
    };
}
