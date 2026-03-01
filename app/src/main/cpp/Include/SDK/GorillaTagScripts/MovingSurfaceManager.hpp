#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GorillaTagScripts {
    struct MovingSurfaceManager : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("GorillaTagScripts", "MovingSurfaceManager");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static ::GorillaTagScripts::MovingSurfaceManager* GetInstance() {
            static BNM::Field<::GorillaTagScripts::MovingSurfaceManager*> field = GetClass().GetField("instance");
            return field.Get();
        }
        static ::GorillaTagScripts::MovingSurfaceManager* GetInstance_f() {
            static BNM::Field<::GorillaTagScripts::MovingSurfaceManager*> _field = GetClass().GetField(O("instance"));
            return _field.Get();
        }
        ::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::MovingSurface*>* GetMovingSurfaces() {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::MovingSurface*>*> _field = GetClass().GetField(O("movingSurfaces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::BNM::Structures::Mono::List<::GorillaTagScripts::SurfaceMover*>* GetSurfaceMovers() {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::SurfaceMover*>*> _field = GetClass().GetField(O("surfaceMovers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        static void SetInstance(::GorillaTagScripts::MovingSurfaceManager* value) {
            static BNM::Field<::GorillaTagScripts::MovingSurfaceManager*> _field = GetClass().GetField(O("instance"));
            _field.Set(value);
        }
        void SetMovingSurfaces(::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::MovingSurface*>* value) {
            static BNM::Field<::BNM::Structures::Mono::Dictionary<int, ::GorillaTagScripts::MovingSurface*>*> _field = GetClass().GetField(O("movingSurfaces"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSurfaceMovers(::BNM::Structures::Mono::List<::GorillaTagScripts::SurfaceMover*>* value) {
            static BNM::Field<::BNM::Structures::Mono::List<::GorillaTagScripts::SurfaceMover*>*> _field = GetClass().GetField(O("surfaceMovers"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void FixedUpdate() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("FixedUpdate"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void RegisterMovingSurface(::GorillaTagScripts::MovingSurface* ms) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterMovingSurface"), {"ms"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ms);
        }
        void RegisterSurfaceMover(::GorillaTagScripts::SurfaceMover* sm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("RegisterSurfaceMover"), {"sm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sm);
        }
        bool TryGetMovingSurface(int id, ::GorillaTagScripts::MovingSurface*& result) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("TryGetMovingSurface"), {"id", "result"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(id, &result);
        }
        void UnregisterMovingSurface(::GorillaTagScripts::MovingSurface* ms) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterMovingSurface"), {"ms"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(ms);
        }
        void UnregisterSurfaceMover(::GorillaTagScripts::SurfaceMover* sm) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("UnregisterSurfaceMover"), {"sm"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(sm);
        }
    };
}
