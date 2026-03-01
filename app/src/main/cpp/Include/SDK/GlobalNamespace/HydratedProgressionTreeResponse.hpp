#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"
#include "MothershipResponse.hpp"

namespace GlobalNamespace {
    struct HydratedProgressionTreeResponse : ::GlobalNamespace::MothershipResponse {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "HydratedProgressionTreeResponse");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TreeNodeVector* GetNodes() {
            static BNM::Method<::GlobalNamespace::TreeNodeVector*> _method = GetClass().GetMethod(O("get_Nodes"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetNodes(::GlobalNamespace::TreeNodeVector* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Nodes"));
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
        ::GlobalNamespace::ProgressionTree* GetTree() {
            static BNM::Method<::GlobalNamespace::ProgressionTree*> _method = GetClass().GetMethod(O("get_Tree"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        void SetTree(::GlobalNamespace::ProgressionTree* value) {
            static BNM::Method<void> _method = GetClass().GetMethod(O("set_Tree"));
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
        static ::GlobalNamespace::HydratedProgressionTreeResponse* FromMothershipResponse(::GlobalNamespace::MothershipResponse* response) {
            static BNM::Method<::GlobalNamespace::HydratedProgressionTreeResponse*> _m = GetClass().GetMethod(O("FromMothershipResponse"), {"response"});
            return _m.Call(response);
        }
        ::GlobalNamespace::TreeNodeVector* get_Nodes() {
            static BNM::Method<::GlobalNamespace::TreeNodeVector*> _m = GetClass().GetMethod(O("get_Nodes"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ProgressionTrack* get_Track() {
            static BNM::Method<::GlobalNamespace::ProgressionTrack*> _m = GetClass().GetMethod(O("get_Track"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::ProgressionTree* get_Tree() {
            static BNM::Method<::GlobalNamespace::ProgressionTree*> _m = GetClass().GetMethod(O("get_Tree"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        static void* getCPtr(::GlobalNamespace::HydratedProgressionTreeResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("getCPtr"), {"obj"});
            return _m.Call(obj);
        }
        bool ParseFromResponseString(::BNM::Structures::Mono::String* response) {
            static BNM::Method<bool> _m = GetClass().GetMethod(O("ParseFromResponseString"), {"response"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call(response);
        }
        void set_Nodes(::GlobalNamespace::TreeNodeVector* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Nodes"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Track(::GlobalNamespace::ProgressionTrack* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Track"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        void set_Tree(::GlobalNamespace::ProgressionTree* value) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("set_Tree"), {"value"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(value);
        }
        static void* swigRelease(::GlobalNamespace::HydratedProgressionTreeResponse* obj) {
            static BNM::Method<void*> _m = GetClass().GetMethod(O("swigRelease"), {"obj"});
            return _m.Call(obj);
        }
    };
}
