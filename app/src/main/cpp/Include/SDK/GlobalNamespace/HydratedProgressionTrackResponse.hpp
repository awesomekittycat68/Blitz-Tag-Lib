#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipResponse.hpp"

namespace GlobalNamespace {
    struct HydratedProgressionTrackResponse : ::GlobalNamespace::MothershipResponse {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HydratedProgressionTrackResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TrackLevelVector* GetLevels() {
            static BNM::Method<::GlobalNamespace::TrackLevelVector*> _method = GetClass().GetMethod(O("get_Levels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetLevels(::GlobalNamespace::TrackLevelVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Levels"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::ProgressionTrack* GetTrack() {
            static BNM::Method<::GlobalNamespace::ProgressionTrack*> _method = GetClass().GetMethod(O("get_Track"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTrack(::GlobalNamespace::ProgressionTrack* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Track"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        ::GlobalNamespace::TrackTriggerVector* GetTriggers() {
            static BNM::Method<::GlobalNamespace::TrackTriggerVector*> _method = GetClass().GetMethod(O("get_Triggers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTriggers(::GlobalNamespace::TrackTriggerVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Triggers"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _method.Call(value);
        }
        void* GetSwigCPtr() {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetSwigCPtr(void* value) {
            static BNM::Field<void*> _field = GetClass().GetField(O("swigCPtr"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void Dispose(bool disposing) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("Dispose"), {"disposing"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(disposing);
        }
        static ::GlobalNamespace::HydratedProgressionTrackResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse* response) {
            static BNM::Method<::GlobalNamespace::HydratedProgressionTrackResponse*> _m = GetClass().GetMethod(O("FromMothershipResponse"), {"response"});
            return _m.Call(response);
        }
        ::GlobalNamespace::TrackLevelVector* get_Levels() {
            static BNM::Method<::GlobalNamespace::TrackLevelVector*> _m = GetClass().GetMethod(O("get_Levels"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ProgressionTrack* get_Track() {
            static BNM::Method<::GlobalNamespace::ProgressionTrack*> _m = GetClass().GetMethod(O("get_Track"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TrackTriggerVector* get_Triggers() {
            static BNM::Method<::GlobalNamespace::TrackTriggerVector*> _m = GetClass().GetMethod(O("get_Triggers"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::HydratedProgressionTrackResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromResponseString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromResponseString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_Levels(::GlobalNamespace::TrackLevelVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Levels"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Track(::GlobalNamespace::ProgressionTrack* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Track"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Triggers(::GlobalNamespace::TrackTriggerVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Triggers"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::HydratedProgressionTrackResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
