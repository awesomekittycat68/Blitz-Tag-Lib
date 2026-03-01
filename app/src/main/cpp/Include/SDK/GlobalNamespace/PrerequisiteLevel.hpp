#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct PrerequisiteLevel : BNM::UnityEngine::MonoBehaviour {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "PrerequisiteLevel");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::BNM::Structures::Mono::String* GetLevelId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_level_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLevelId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_level_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetLevelName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_level_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLevelName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_level_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        int GetRequiredProgression() {
            static BNM::Method<int> _method = GetClass().GetMethod(O("get_required_progression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetRequiredProgression(int value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_required_progression"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTrackId() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_track_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrackId(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_track_id"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::BNM::Structures::Mono::String* GetTrackName() {
            static BNM::Method<::BNM::Structures::Mono::String*> _method = GetClass().GetMethod(O("get_track_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrackName(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_track_name"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        bool GetSwigCMemOwn() {
            static BNM::Field<bool> _field = GetClass().GetField(O("swigCMemOwn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCMemOwn(bool value) {
            static BNM::Field<bool> _field = GetClass().GetField(O("swigCMemOwn"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        void Finalize_1() {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Finalize"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call();
        }
        ::BNM::Structures::Mono::String* get_level_id() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_level_id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_level_name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_level_name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        int get_required_progression() {
            static BNM::Method<int> _m = GetClass().GetMethod(O("get_required_progression"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_track_id() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_track_id"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::BNM::Structures::Mono::String* get_track_name() {
            static BNM::Method<::BNM::Structures::Mono::String*> _m = GetClass().GetMethod(O("get_track_name"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::PrerequisiteLevel* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_level_id(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_level_id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_level_name(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_level_name"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_required_progression(int value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_required_progression"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_track_id(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_track_id"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_track_name(::BNM::Structures::Mono::String* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_track_name"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::PrerequisiteLevel* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
        bool ToJson(::GlobalNamespace::SWIGTYPE_p_rapidjson__Value* prerequisiteLevel, ::GlobalNamespace::SWIGTYPE_p_rapidjson__Document* body) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ToJson"), {"prerequisiteLevel", "body"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(prerequisiteLevel, body);
        }
    };
}
