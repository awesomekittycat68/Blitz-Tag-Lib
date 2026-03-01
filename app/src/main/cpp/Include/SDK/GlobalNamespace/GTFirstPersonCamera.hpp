#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct GTFirstPersonCamera : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "GTFirstPersonCamera");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        static constexpr const char* preLog = "[GTFirstPersonCamera]  ";
        static constexpr const char* preErr = "[GTFirstPersonCamera]  ERROR!!!  ";
        ::Camera* GetCamera() {
            static BNM::Method<::Camera*> _method = GetClass().GetMethod(O("get_camera"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetCamera(::Camera* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_camera"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        static ::BNM::Structures::Mono::Action<>* GetOnPreRenderEvent() {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPreRenderEvent"));
            return _field.Get();
        }
        static void SetOnPreRenderEvent(::BNM::Structures::Mono::Action<>* value) {
            static BNM::Field<::BNM::Structures::Mono::Action<>*> _field = GetClass().GetField(O("OnPreRenderEvent"));
            _field.Set(value);
        }
        template <typename TP0 = void*>
        void _OnPreRender(TP0 context, ::Camera* cam) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("_OnPreRender"), {"context", "cam"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(context, cam);
        }
        void Awake() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Awake"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        static ::Camera* get_camera() {
            static BNM::Method<::Camera*> _m = GetClass().GetMethod(O("get_camera"));
            return _m.Call();
        }
        static void set_camera(::Camera* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_camera"), {"value"});
            _m.Call(value);
        }
    };
}
