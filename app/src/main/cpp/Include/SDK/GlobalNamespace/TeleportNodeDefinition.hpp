#pragma once
#include <BNMIncludes.hpp>
#include <BNMResolve.hpp>
#include "../ForwardDeclarations.hpp"

namespace GlobalNamespace {
    struct TeleportNodeDefinition : BNM::UnityEngine::Object {
    public:
        static BNM::Class GetClass() {
            static BNM::Class clazz = ::BNM::Class("", "TeleportNodeDefinition");
            return clazz;
        }

        static BNM::MonoType* GetType() { return GetClass().GetMonoType(); }

        ::GlobalNamespace::TeleportNode* GetBackward() {
            static BNM::Method<::GlobalNamespace::TeleportNode*> _method = GetClass().GetMethod(O("get_Backward"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::TeleportNode* GetForward() {
            static BNM::Method<::GlobalNamespace::TeleportNode*> _method = GetClass().GetMethod(O("get_Forward"));
            _method.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _method.Call();
        }
        ::GlobalNamespace::TeleportNode* GetBackward_f() {
            static BNM::Field<::GlobalNamespace::TeleportNode*> _field = GetClass().GetField(O("backward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        ::GlobalNamespace::TeleportNode* GetForward_f() {
            static BNM::Field<::GlobalNamespace::TeleportNode*> _field = GetClass().GetField(O("forward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _field.Get();
        }
        void SetBackward(::GlobalNamespace::TeleportNode* value) {
            static BNM::Field<::GlobalNamespace::TeleportNode*> _field = GetClass().GetField(O("backward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        void SetForward(::GlobalNamespace::TeleportNode* value) {
            static BNM::Field<::GlobalNamespace::TeleportNode*> _field = GetClass().GetField(O("forward"));
            _field.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _field.Set(value);
        }
        ::GlobalNamespace::TeleportNode* get_Backward() {
            static BNM::Method<::GlobalNamespace::TeleportNode*> _m = GetClass().GetMethod(O("get_Backward"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        ::GlobalNamespace::TeleportNode* get_Forward() {
            static BNM::Method<::GlobalNamespace::TeleportNode*> _m = GetClass().GetMethod(O("get_Forward"));
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            return _m.Call();
        }
        void SetBackward_1(::GlobalNamespace::TeleportNode* node) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetBackward"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node);
        }
        void SetForward_1(::GlobalNamespace::TeleportNode* node) {
            static BNM::Method<void> _m = GetClass().GetMethod(O("SetForward"), {"node"});
            _m.SetInstance(reinterpret_cast<::BNM::IL2CPP::Il2CppObject*>(this));
            _m.Call(node);
        }
    };
}
